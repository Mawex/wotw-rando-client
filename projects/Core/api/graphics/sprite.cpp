#include <Core/api/graphics/sprite.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>

#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Material.h>
#include <Modloader/app/methods/UnityEngine/Mesh.h>
#include <Modloader/app/methods/UnityEngine/MeshFilter.h>
#include <Modloader/app/methods/UnityEngine/Quaternion.h>
#include <Modloader/app/methods/UnityEngine/Renderer.h>
#include <Modloader/app/methods/UnityEngine/Shader.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/structs/MoonIconRenderer.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/Int32.h>
#include <Modloader/app/types/Material.h>
#include <Modloader/app/types/Mesh.h>
#include <Modloader/app/types/MeshFilter.h>
#include <Modloader/app/types/MeshRenderer.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/String.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/app/types/UberShaderRuntimeRenderOrder.h>
#include <Modloader/app/types/Vector2.h>
#include <Modloader/app/types/Vector3.h>
#include <Modloader/il2cpp_helpers.h>

using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core {
    namespace {
        app::Vector2__Array* make_uvs(float x = 0, float y = 0, float w = 1, float h = 1) {
            return types::Vector2::create_array(
                std::vector<app::Vector2>{
                    { x, y },
                    { x + w, y },
                    { x, y + h },
                    { x + w, y + h } }
            );
        }

        bool use_prefab = true;
        bool custom_shader = false;
        app::GameObject* find_prefab() {
            static app::GameObject* icon = nullptr;
            if (il2cpp::unity::is_valid(icon))
                return icon;

            app::Renderer* renderer = nullptr;
            app::MeshFilter* mesh_filter = nullptr;
            if (use_prefab) {
                auto controller = types::UI::get_class()->static_fields->MessageController;
                auto message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(controller->fields.HintSmallMessage, types::MessageBox::get_class());
                auto icon_renderer = reinterpret_cast<app::MoonIconRenderer*>(
                    message_box->fields.TextBox->fields.styleCollection->fields.styles->vector[1]->fields.renderer
                );
                auto icon_obj = icon_renderer->fields.Icons->fields.Icons->fields._items->vector[0]->fields.Icon;
                auto prefab = il2cpp::unity::get_children(icon_obj)[0];
                icon = il2cpp::unity::instantiate_object(prefab);
                mesh_filter = il2cpp::unity::get_component<app::MeshFilter>(icon, types::MeshFilter::get_class());
                renderer = il2cpp::unity::get_component<app::Renderer>(icon, types::MeshRenderer::get_class());
            } else {
                icon = types::GameObject::create();
                il2cpp::invoke(icon, ".ctor");
                mesh_filter = il2cpp::unity::add_component<app::MeshFilter>(icon, types::MeshFilter::get_class());
                renderer = il2cpp::unity::add_component<app::Renderer>(icon, types::MeshRenderer::get_class());
                auto order = il2cpp::unity::add_component<app::UberShaderRuntimeRenderOrder>(icon, types::UberShaderRuntimeRenderOrder::get_class());
                order->fields.m_isInScene = true;
                bool enabled = true;
                il2cpp::invoke(renderer, "set_enabled", &enabled);
            }

            il2cpp::unity::set_active(icon, false);
            core::api::game::add_to_container(core::api::game::RandoContainer::GameObjects, icon);
            auto mesh = types::Mesh::create();
            il2cpp::invoke(mesh, ".ctor");
            il2cpp::invoke(icon, "set_name", il2cpp::string_new("rando_sprite"));
            auto vertices = types::Vector3::create_array(std::vector<app::Vector3>{ { -0.5f, -0.5f, 0 }, { 0.5f, -0.5f, 0 }, { -0.5f, 0.5f, 0 }, { 0.5f, 0.5f, 0 } });
            auto triangles = types::Int32::create_array(std::vector<int>{ 0, 2, 1, 2, 3, 1 });
            auto normals = types::Vector3::create_array(std::vector<app::Vector3>{ { 0, 0, 1 }, { 0, 0, 1 }, { 0, 0, 1 }, { 0, 0, 1 } });
            auto uv = make_uvs();

            il2cpp::invoke(mesh, "set_vertices", vertices);
            il2cpp::invoke(mesh, "set_triangles", triangles);
            il2cpp::invoke(mesh, "set_normals", normals);
            Mesh::set_uv(mesh, uv);

            il2cpp::invoke(mesh_filter, "set_mesh", mesh);

            if (custom_shader) {
                auto shader = Shader::Find(il2cpp::string_new("Hidden/UberShader/59F9A629AA8A0ABB2D0B3EAE1933B13F"));
                auto mat = types::Material::create();
                Material::ctor_1(mat, shader);

                auto keywords = types::String::create_array(std::vector<app::String*>{ il2cpp::string_new("DISABLE_ALPHA_CUTOFF") });
                il2cpp::invoke(mat, "set_shaderKeywords", keywords);

                core::shaders::set_float(mat, "_UberShaderAlphaMask", 9);
                core::shaders::set_float(mat, "_UberShaderCulling", 0);
                core::shaders::set_vector(mat, "_DepthFlipScreen", { 0.008251436, 0, 0, 0 });
                core::shaders::set_vector(mat, "_Screen", { 0, 0, 0, 1 });
                core::shaders::set_vector(mat, "_UberShaderParams", { 0, 0, 1, 1 });
                core::shaders::set_vector(mat, "_UberShaderParams2", { 1, 1, 0, 1 });

                il2cpp::invoke(renderer, "set_sharedMaterial", mat);
            }

            return icon;
        }
    } // namespace

    Sprite::Sprite(app::GameObject* parent) {
        m_root = reinterpret_cast<app::GameObject*>(il2cpp::unity::instantiate_object(find_prefab()));
        m_renderer = il2cpp::unity::get_component<app::Renderer>(m_root, types::Renderer::get_class());
        il2cpp::unity::set_active(m_root, false);
        if (parent == nullptr)
            core::api::game::add_to_container(core::api::game::RandoContainer::GameObjects, m_root);
        else
            il2cpp::unity::set_parent(m_root, parent);
    }

    Sprite::~Sprite() {
        if (il2cpp::unity::is_valid(m_root)) {
            il2cpp::unity::destroy_object(m_root);
            m_root = nullptr;
        }
    }

    void Sprite::layer(Layer l) {
        GameObject::set_layer(m_root, static_cast<int>(l));
    }

    void Sprite::local_position(app::Vector3 p) {
        Transform::set_localPosition(il2cpp::unity::get_transform(m_root), p);
    }

    void Sprite::local_scale(app::Vector3 s) {
        Transform::set_localScale(il2cpp::unity::get_transform(m_root), s);
    }

    void Sprite::local_rotation(float r) {
        auto angle = r;
        auto rotation = Quaternion::Euler_1(0, 0, angle);
        Transform::set_localRotation(il2cpp::unity::get_transform(m_root), rotation);
    }

    bool Sprite::enabled() {
        return il2cpp::unity::get_active(m_root);
    }

    void Sprite::enabled(bool value) {
        il2cpp::unity::set_active(m_root, value);
    }

    void Sprite::texture(std::shared_ptr<textures::TextureData> texture_data, std::optional<textures::MaterialParams> params) {
        if (texture_data == nullptr)
            return;

        if (m_texture_data != texture_data) {
            texture_data->apply_texture(m_renderer);
            m_texture_data = texture_data;
        }

        m_texture_params = params;
        texture_data->apply_params(m_renderer, params.has_value() ? &params.value() : nullptr);
    }

    void Sprite::set_parent(app::GameObject* parent) {
        il2cpp::unity::set_parent(m_root, parent);
    }
} // namespace core
