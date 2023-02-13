#include <il2cpp_helpers.h>
#include <modloader.h>
#include <windows_api/console.h>
#include <windows_api/memory.h>

#include <app/methods/System/String.h>
#include <app/methods/System/Type.h>
#include <app/methods/UnityEngine/Component.h>
#include <app/methods/UnityEngine/GameObject.h>
#include <app/methods/UnityEngine/Object.h>
#include <app/methods/UnityEngine/Quaternion.h>
#include <app/methods/UnityEngine/SceneManagement/Scene.h>
#include <app/methods/UnityEngine/SceneManagement/SceneManager.h>
#include <app/methods/UnityEngine/ScriptableObject.h>
#include <app/methods/UnityEngine/Transform.h>
#include <app/types/Component_1.h>
#include <app/types/GameObject.h>
#include <app/types/Quaternion.h>
#include <app/types/Scene.h>

#include <Common/ext.h>

#include <codecvt>
#include <locale>
#include <vector>
#include <xstring>

using namespace modloader::win;
using namespace app::classes;

namespace il2cpp {
    namespace internal {
        Il2CppClass* get_game_object_class() {
            return reinterpret_cast<Il2CppClass*>(types::GameObject::get_class());
        }

        Il2CppClass* get_component_class() {
            return reinterpret_cast<Il2CppClass*>(types::Component_1::get_class());
        }
    } // namespace internal

    namespace {
        std::unordered_map<std::string, Il2CppClass*> resolved_classes;
        std::unordered_map<Il2CppClass*, std::vector<MethodOverloadInfo>> resolved_klass_overloads;
        std::unordered_map<Il2CppClass*, app::Type*> resolved_class_types;

        thread_local std::string buffer;
        std::string const& get_full_name(std::string_view namezpace, std::string_view name, std::string_view nested = "") {
            buffer.clear();
            buffer.reserve(32);
            if (!namezpace.empty()) {
                buffer += namezpace;
                buffer += ".";
            }

            buffer += name;

            if (!nested.empty()) {
                buffer += ".";
                buffer += nested;
            }

            return buffer;
        }

        void resolve_overloads(Il2CppClass* klass) {
            std::vector<MethodOverloadInfo> overloads;
            void* it = nullptr;
            for (auto i = 0; i < klass->method_count; ++i) {
                auto method = il2cpp_class_get_methods(klass, &it);
                auto method_overload_info = std::find_if(overloads.begin(), overloads.end(), [method](MethodOverloadInfo const& info) -> bool {
                    return info.name == method->name && info.param_count == method->parameters_count;
                });

                if (method_overload_info == overloads.end()) {
                    MethodOverloadInfo info;
                    info.name = method->name;
                    info.param_count = method->parameters_count;
                    info.methods.push_back(method);
                    overloads.push_back(std::move(info));
                } else
                    method_overload_info->methods.push_back(method);
            }

            it = nullptr;
            for (auto i = 0; i < klass->property_count; ++i) {
                auto prop = il2cpp_class_get_properties(klass, &it);
                if (prop->get != nullptr) {
                    MethodOverloadInfo info;
                    info.name = prop->get->name;
                    info.param_count = 0;
                    info.methods.push_back(prop->get);
                    overloads.push_back(std::move(info));
                }

                if (prop->set != nullptr) {
                    MethodOverloadInfo info;
                    info.name = prop->set->name;
                    info.param_count = 1;
                    info.methods.push_back(prop->set);
                    overloads.push_back(std::move(info));
                }
            }

            resolved_klass_overloads[klass] = overloads;
        }

        app::GameObject* convert(void* obj) {
            if (!il2cpp::unity::is_valid(obj))
                return nullptr;
            if (il2cpp::is_assignable(obj, "UnityEngine", "GameObject"))
                return reinterpret_cast<app::GameObject*>(obj);
            else if (il2cpp::is_assignable(obj, "UnityEngine", "Component"))
                return UnityEngine::Component::get_gameObject(reinterpret_cast<app::Component_1*>(obj));
            else
                return nullptr;
        }
    } // namespace

    namespace unity {
        std::string get_path(void* object) {
            auto go = convert(object);
            if (go == nullptr)
                return "nullptr";

            std::string path;
            auto transform = get_transform(go);
            path = get_object_name(transform);
            transform = get_parent(transform);
            while (il2cpp::unity::is_valid(transform)) {
                path = fmt::format("{}/{}", get_object_name(transform), path);
                transform = get_parent(transform);
            }

            return path;
        }

        std::vector<std::string> get_path_v(void* object) {
            auto go = convert(object);
            std::vector<std::string> path;
            if (go == nullptr)
                return path;

            auto transform = get_transform(go);
            while (il2cpp::unity::is_valid(transform)) {
                path.push_back(get_object_name(transform));
                transform = get_parent(transform);
            }

            std::reverse(path.begin(), path.end());
            return path;
        }

        app::Vector3 get_position(void* obj) {
            auto transform = get_transform(obj);
            return UnityEngine::Transform::get_position(transform);
        }

        app::Vector3 get_rotation(void* obj) {
            auto transform = get_transform(obj);
            auto value = UnityEngine::Transform::get_rotation(transform);

            return UnityEngine::Quaternion::get_eulerAngles(types::Quaternion::box(value));
        }

        app::Vector3 get_local_position(void* obj) {
            auto transform = get_transform(obj);
            return UnityEngine::Transform::get_localPosition(transform);
        }

        app::Vector3 get_local_rotation(void* obj) {
            auto transform = get_transform(obj);
            auto value = UnityEngine::Transform::get_localRotation(transform);
            return UnityEngine::Quaternion::get_eulerAngles(types::Quaternion::box(value));
        }

        app::Vector3 get_local_scale(void* obj) {
            auto transform = get_transform(obj);
            return UnityEngine::Transform::get_localScale(transform);
        }

        void set_position(void* obj, app::Vector3 value) {
            auto transform = get_transform(obj);
            UnityEngine::Transform::set_position(transform, value);
        }

        void set_rotation(void* obj, app::Vector3 value) {
            auto transform = get_transform(obj);
            auto quat = UnityEngine::Quaternion::Euler_2(value);
            UnityEngine::Transform::set_rotation(transform, quat);
        }

        void set_local_position(void* obj, app::Vector3 value) {
            auto transform = get_transform(obj);
            UnityEngine::Transform::set_localPosition(transform, value);
        }

        void set_local_rotation(void* obj, app::Vector3 value) {
            auto transform = get_transform(obj);
            auto quat = UnityEngine::Quaternion::Euler_2(value);
            UnityEngine::Transform::set_localRotation(transform, quat);
        }

        void set_local_scale(void* obj, app::Vector3 value) {
            auto transform = get_transform(obj);
            UnityEngine::Transform::set_localScale(transform, value);
        }

        app::Transform* get_parent(void* object) {
            return UnityEngine::Transform::get_parent(get_transform(object));
        }

        void set_parent(void* child, void* parent, bool keep_local) {
            auto child_transform = get_transform(child);
            if (keep_local) {
                auto pos = get_local_position(child_transform);
                auto rot = UnityEngine::Transform::get_localRotation(child_transform);
                auto scale = get_local_scale(child_transform);
                UnityEngine::Transform::set_parent(get_transform(child), get_transform(parent));
                set_local_position(child_transform, pos);
                UnityEngine::Transform::set_localRotation(child_transform, rot);
                set_local_scale(child_transform, scale);
            } else
                UnityEngine::Transform::set_parent(get_transform(child), get_transform(parent));
        }

        bool get_active(void* object) {
            auto go = get_game_object(object);
            return UnityEngine::GameObject::get_active(go);
        }

        bool get_active_self(void* object) {
            auto go = get_game_object(object);
            return UnityEngine::GameObject::get_activeSelf(go);
        }

        void set_active(void* object, bool value) {
            auto go = get_game_object(object);
            UnityEngine::GameObject::SetActive(go, value);
        }

        void set_active_recursively(void* object, bool value) {
            auto go = get_game_object(object);
            UnityEngine::GameObject::SetActiveRecursively(go, value);
        }

        app::Transform* get_transform(void* object) {
            app::GameObject* go = nullptr;
            if (il2cpp::is_assignable(object, "UnityEngine", "Transform"))
                return reinterpret_cast<app::Transform*>(object);
            else if (il2cpp::is_assignable(object, "UnityEngine", "GameObject"))
                go = reinterpret_cast<app::GameObject*>(object);
            else if (il2cpp::is_assignable(object, "UnityEngine", "Component"))
                go = get_game_object(object);
            else
                trace(modloader::MessageType::Error, 1, "il2cpp", "Tried to get transform of non gameobject/component class");

            return UnityEngine::GameObject::get_transform(go);
        }

        std::vector<app::GameObject*> get_children(void* obj) {
            auto transform = get_transform(obj);
            std::vector<app::GameObject*> children;
            auto count = UnityEngine::Transform::GetChildCount(transform);
            for (auto i = 0; i < count; ++i)
                children.push_back(get_game_object(UnityEngine::Transform::GetChild(transform, i)));

            return children;
        }

        app::GameObject* find_child(void* obj, std::string_view name) {
            auto transform = get_transform(obj);
            auto str = il2cpp::string_new(name);
            transform = UnityEngine::Transform::Find(transform, str);
            return transform != nullptr ? get_game_object(transform) : nullptr;
        }

        app::GameObject* find_child(void* obj, std::vector<std::string_view> const& path) {
            for (auto const& name : path) {
                if (obj == nullptr)
                    break;

                obj = find_child(obj, name);
            }

            return reinterpret_cast<app::GameObject*>(obj);
        }

        app::GameObject* find_child(void* obj, std::vector<std::string> const& path) {
            for (auto const& name : path) {
                if (obj == nullptr)
                    break;

                obj = find_child(obj, name);
            }

            return reinterpret_cast<app::GameObject*>(obj);
        }

        std::vector<app::GameObject*> find_children(void* obj, std::string_view name) {
            std::vector<app::GameObject*> children;

            auto transform = get_transform(obj);
            auto child_count = UnityEngine::Transform::get_childCount(transform);

            for (int i = 0; i < child_count; i++) {
                if (il2cpp::convert_csstring(UnityEngine::Object::get_name(reinterpret_cast<app::Object_1*>(UnityEngine::Transform::GetChild(transform, i)))) == name) {
                    children.push_back(get_game_object(transform));
                }
            }

            return children;
        }

        std::vector<app::GameObject*> find_children(void* obj, std::vector<std::string_view> const& path) {
            for (auto segment = path.begin(); segment != std::prev(path.end()); segment++) {
                if (obj == nullptr)
                    return {};

                obj = find_child(obj, *segment);
            }

            return find_children(obj, path.back());
        }

        std::vector<app::GameObject*> find_children(void* obj, std::vector<std::string> const& path) {
            for (auto segment = path.begin(); segment != std::prev(path.end()); segment++) {
                if (obj == nullptr)
                    return {};

                obj = find_child(obj, *segment);
            }

            return find_children(obj, path.back());
        }

        bool is_valid(void* obj) {
            return obj != nullptr && UnityEngine::Object::op_Implicit(reinterpret_cast<app::Object_1*>(obj));
        }

        bool equals(void* o1, void* o2) {
            return UnityEngine::Object::op_Equality(reinterpret_cast<app::Object_1*>(o1), reinterpret_cast<app::Object_1*>(o2));
        }

        bool not_equals(void* o1, void* o2) {
            return UnityEngine::Object::op_Inequality(reinterpret_cast<app::Object_1*>(o1), reinterpret_cast<app::Object_1*>(o2));
        }

        std::vector<app::Component_1*> get_components_untyped(app::GameObject* game_object, Il2CppClass* klass) {
            std::vector<app::Component_1*> components;
            auto c_array = UnityEngine::GameObject::GetComponents_1(game_object, get_runtime_type(klass));
            for (auto i = 0; i < c_array->max_length; ++i)
                components.push_back(reinterpret_cast<app::Component_1*>(c_array->vector[i]));

            return components;
        }

        std::vector<app::Component_1*> get_components_in_children_untyped(app::GameObject* game_object, Il2CppClass* klass) {
            std::vector<app::Component_1*> components;
            auto c_array = UnityEngine::GameObject::GetComponentsInChildren_1(game_object, get_runtime_type(klass));
            for (auto i = 0; i < c_array->max_length; ++i)
                components.push_back(reinterpret_cast<app::Component_1*>(c_array->vector[i]));

            return components;
        }

        app::Component_1* get_component_in_children_untyped(app::GameObject* game_object, Il2CppClass* klass) {
            return reinterpret_cast<app::Component_1*>(UnityEngine::GameObject::GetComponentInChildren_2(game_object, get_runtime_type(klass)));
        }

        app::ScriptableObject* create_scriptable_object_untyped(Il2CppClass* klass) {
            if (!resolved_class_types.contains(klass)) {
                resolved_class_types[klass] = get_runtime_type(klass);
            }

            return UnityEngine::ScriptableObject::CreateInstance_1(resolved_class_types[klass]);
        }

        void* instantiate_object_untyped(void* object) {
            return UnityEngine::Object::Instantiate_3(reinterpret_cast<app::Object_1*>(object));
        }

        void destroy_object(void* object) {
            UnityEngine::Object::Destroy_2(reinterpret_cast<app::Object_1*>(object));
        }

        app::GameObject* get_game_object(void* component) {
            return convert(component);
        }

        app::Component_1* add_component_untyped(app::GameObject* game_object, Il2CppClass* klass) {
            return UnityEngine::GameObject::AddComponent_1(game_object, get_runtime_type(klass));
        }

        std::string get_object_name(void* object) {
            auto cast_object = static_cast<app::Object_1*>(object);
            if (cast_object == nullptr)
                return "nullptr";

            auto csstr = UnityEngine::Object::get_name(cast_object);
            return convert_csstring(csstr);
        }

        app::String* get_object_csname(void* object) {
            auto cast_object = static_cast<app::Object_1*>(object);
            if (cast_object == nullptr)
                return nullptr;

            return UnityEngine::Object::get_name(cast_object);
        }

        int32_t get_scene_count() {
            return UnityEngine::SceneManagement::SceneManager::get_sceneCount();
        }

        app::Scene get_scene_at(int32_t i) {
            return UnityEngine::SceneManagement::SceneManager::GetSceneAt(i);
        }

        app::Scene get_active_scene() {
            return UnityEngine::SceneManagement::SceneManager::GetActiveScene();
        }

        app::Scene get_scene(app::GameObject* game_object) {
            return UnityEngine::GameObject::get_scene(game_object);
        }

        std::vector<app::GameObject*> get_root_game_objects(app::Scene& scene) {
            std::vector<app::GameObject*> output;
            auto boxed = types::Scene::box(scene);
            if (UnityEngine::SceneManagement::Scene::get_isLoaded(boxed)) {
                auto game_objects = UnityEngine::SceneManagement::Scene::GetRootGameObjects_1(boxed);
                for (auto i = 0; i < game_objects->max_length; ++i)
                    output.push_back(game_objects->vector[i]);
            }

            return output;
        }

        std::string get_scene_name(app::Scene& scene) {
            auto boxed = types::Scene::box(scene);
            auto csstring = UnityEngine::SceneManagement::Scene::get_name(boxed);
            return convert_csstring(csstring);
        }

        std::string get_scene_path(app::Scene& scene) {
            auto boxed = box_value<app::Scene__Boxed>(get_class("UnityEngine.SceneManagement", "Scene"), scene);
            auto csstring = UnityEngine::SceneManagement::Scene::get_path(boxed);
            return convert_csstring(csstring);
        }
    } // namespace unity

    namespace untyped {
        Il2CppObject* create_object(std::string_view namezpace, std::string_view klass, std::string_view nested) {
            auto actual_klass = get_nested_class(namezpace, klass, nested);
            if (actual_klass == nullptr)
                return nullptr;

            return create_object(actual_klass);
        }

        Il2CppObject* create_object(std::string_view namezpace, std::string_view name) {
            auto klass = get_class(namezpace, name);
            if (klass == nullptr)
                return nullptr;

            return create_object(klass);
        }

        Il2CppObject* create_object(Il2CppClass* klass) {
            return il2cpp_object_new(klass);
        }

        Il2CppObject* box_value(Il2CppClass* klass, void* value) {
            return il2cpp_value_box(klass, value);
        }

        Il2CppClass* get_class(std::string_view namezpace, std::string_view name) {
            auto const& full_name = get_full_name(namezpace, name);
            auto it = resolved_classes.find(full_name);
            if (it != resolved_classes.end())
                return it->second;

            Il2CppClass* klass = nullptr;
            size_t i = 0;
            size_t size = 0;
            auto domain = il2cpp_domain_get();
            auto assemblies = il2cpp_domain_get_assemblies(domain, &size);
            while (klass == nullptr && i < size) {
                auto image = il2cpp_assembly_get_image(assemblies[i]);
                klass = il2cpp_class_from_name(image, namezpace.data(), name.data());
                ++i;
            }

            if (klass == nullptr)
                trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("Failed to find klass {}", full_name));

            // Add it to resolved classes anyway to prevent trace spam and future lookups.
            resolved_classes[full_name] = klass;

            return klass;
        }

        Il2CppClass* get_nested_class(std::string_view namezpace, std::string_view name, std::string_view nested) {
            {
                auto const& full_name = get_full_name(namezpace, name, nested);
                auto it = resolved_classes.find(full_name);
                if (it != resolved_classes.end())
                    return it->second;
            }

            Il2CppClass* output = nullptr;
            auto klass = get_class(namezpace, name);
            if (klass != nullptr) {
                void* iter = nullptr;
                il2cpp_class_get_nested_types(klass, &iter);
                auto typed_iter = reinterpret_cast<Il2CppClass**>(iter);
                for (auto i = 0; i < klass->nested_type_count && output == nullptr; ++i) {
                    if (typed_iter[i]->name == nested)
                        output = typed_iter[i];
                }
            }

            auto const& full_name = get_full_name(namezpace, name, nested);
            resolved_classes[full_name] = output;
            if (output == nullptr)
                trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("Failed to find klass {}", full_name));

            return output;
        }

        Il2CppArraySize* array_new(Il2CppClass* element, il2cpp_array_size_t length) {
            return il2cpp_array_new(element, length);
        }

        Il2CppArraySize* array_new_specific(Il2CppClass* array_klass, il2cpp_array_size_t length) {
            return il2cpp_array_new_specific(array_klass, length);
        }

        Il2CppArraySize* array_new_full(Il2CppClass* array_klass, il2cpp_array_size_t* lengths, il2cpp_array_size_t* lower_bounds) {
            return il2cpp_array_new_full(array_klass, lengths, lower_bounds);
        }
    } // namespace untyped

    void load_all_types() {
        // size_t size = 0;
        // auto domain = il2cpp_domain_get();
        // trace(modloader::MessageType::Info, 4, "il2cpp", "loading classes");
        // for (auto i = 0; i < size; ++i) {
        //     auto types = Assembly::GetTypes(assemblies[i]);
        //     for (auto j = 0; j < types->max_length; ++j)
        //     {
        //          auto klass = il2cpp_class_from_type(reinterpret_cast<Il2CppType*>(types->vector[j]));
        //          auto full_name = std::string(fmt::format("{}.{}", klass->namespaze, klass->name));
        //          resolved_classes[full_name] = klass;
        //          trace(modloader::MessageType::Info, 4, "il2cpp", fmt::format(" - {}", full_name));
        //      }
        // }
    }

    void free_obj(void* obj) {
        il2cpp_free(obj);
    }

    gchandle gchandle_new(void* obj, bool pinned) {
        return il2cpp_gchandle_new(reinterpret_cast<Il2CppObject*>(obj), pinned);
    }

    gchandle gchandle_new_weak(void* obj, bool track_ressurection) {
        return il2cpp_gchandle_new_weakref(reinterpret_cast<Il2CppObject*>(obj), track_ressurection);
    }

    Il2CppObject* gchandle_target(gchandle handle) {
        return il2cpp_gchandle_get_target(handle);
    }

    void gchandle_free(gchandle handle) {
        il2cpp_gchandle_free(handle);
    }

    app::String* string_new(std::string_view str) {
        return reinterpret_cast<app::String*>(il2cpp_string_new_len(str.data(), str.size()));
    }

    app::String* string_new(std::string_view str, uint32_t len) {
        return reinterpret_cast<app::String*>(il2cpp_string_new_len(str.data(), len));
    }

    app::String* string_new(std::wstring_view str) {
        return reinterpret_cast<app::String*>(il2cpp_string_new_utf16(reinterpret_cast<const Il2CppChar*>(str.data()), str.length()));
    }

    void trace_overloads(Il2CppClass* klass) {
        if (klass->parent != nullptr)
            trace_overloads(klass->parent);

        auto method_overloads = resolved_klass_overloads.find(klass);
        for (const auto& info : method_overloads->second)
            trace(modloader::MessageType::Error, 5, "il2cpp", fmt::format(" - {}.{}:{}", klass->name, info.name.data(), info.param_count));
    }

    MethodOverloadInfo const* get_method_info_internal(Il2CppClass* klass, std::string_view method, int param_count) {
        auto method_overloads = resolved_klass_overloads.find(klass);
        if (method_overloads == resolved_klass_overloads.end()) {
            resolve_overloads(klass);
            method_overloads = resolved_klass_overloads.find(klass);
        }

        std::vector<MethodOverloadInfo> const& methods = method_overloads->second;
        auto method_overload_info = std::find_if(methods.begin(), methods.end(), [&method, &param_count](MethodOverloadInfo const& info) -> bool {
            return info.name == method && info.param_count == param_count;
        });

        if (method_overload_info == methods.end()) {
            if (klass->parent != nullptr) {
                auto info = get_method_info_internal(klass->parent, method, param_count);
                if (info != nullptr)
                    return info;
            }

            trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("Could not find method '{}:{}' in klass '{}'", method.data(), param_count, klass->name));
            trace_overloads(klass);
            return nullptr;
        }

        return (&*method_overload_info);
    }

    std::vector<MethodOverloadInfo> const& get_all_methods(void* klass) {
        auto cast_klass = reinterpret_cast<Il2CppClass*>(klass);
        auto it = resolved_klass_overloads.find(cast_klass);
        if (it == resolved_klass_overloads.end()) {
            resolve_overloads(cast_klass);
            it = resolved_klass_overloads.find(cast_klass);
        }

        return it->second;
    }

    int get_method_overload_count(Il2CppClass* klass, std::string_view method, int param_count) {
        auto method_overloads = resolved_klass_overloads.find(klass);
        if (method_overloads == resolved_klass_overloads.end()) {
            resolve_overloads(klass);
            method_overloads = resolved_klass_overloads.find(klass);
        }

        std::vector<MethodOverloadInfo> const& methods = method_overloads->second;
        auto method_overload_info = std::find_if(methods.begin(), methods.end(), [&method, &param_count](MethodOverloadInfo const& info) -> bool {
            return info.name == method && info.param_count == param_count;
        });

        if (method_overload_info == methods.end()) {
            trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("Method '{}' with params count {} in klass '{}.{}' does not exist", method.data(), param_count, klass->namespaze, klass->name));
            for (auto const& method_info : methods)
                trace(modloader::MessageType::Info, 3, "il2cpp", fmt::format("- {}({})", method_info.name, method_info.param_count));

            return 0;
        }

        return method_overload_info->methods.size();
    }

    MethodInfo const* get_method_from_name_overloaded(Il2CppClass* klass, std::string_view method, int param_count, int overload) {
        auto info = get_method_info_internal(klass, method, param_count);
        if (info == nullptr)
            return nullptr;

        if (info->methods.size() <= overload) {
            trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("Overload '{}' for '{}:{}' in klass '{}' does not exist", overload, method.data(), param_count, klass->name));
        }

        auto method_data = info->methods.at(overload);
        if (method == "Matches") {
            auto g = method_data->genericMethod->methodDefinition;
            trace(modloader::MessageType::Info, 1, "il2cpp", fmt::format("Method is generic {}.{}({}): {}({})", klass->name, method.data(), param_count, g->name, g->parameters_count));
        }
        return method_data;
    }

    MethodInfo const* get_method_from_name_params(Il2CppClass* klass, std::string_view method, std::vector<void*> const& params) {
        auto info = get_method_info_internal(klass, method, params.size());
        if (info == nullptr)
            return nullptr;

        if (info->methods.size() == 1)
            return info->methods.front();
        else {
            for (auto method_info : info->methods) {
                auto valid = true;
                for (auto i = 0; valid && i < method_info->parameters_count; ++i) {
                    auto& param = method_info->parameters[i];
                    switch (param.parameter_type->type) {
                        case Il2CppTypeEnum::IL2CPP_TYPE_BOOLEAN:
                        case Il2CppTypeEnum::IL2CPP_TYPE_U1:
                        case Il2CppTypeEnum::IL2CPP_TYPE_I1:
                        case Il2CppTypeEnum::IL2CPP_TYPE_U2:
                        case Il2CppTypeEnum::IL2CPP_TYPE_I2:
                        case Il2CppTypeEnum::IL2CPP_TYPE_CHAR:
                        case Il2CppTypeEnum::IL2CPP_TYPE_U4:
                        case Il2CppTypeEnum::IL2CPP_TYPE_I4:
                        case Il2CppTypeEnum::IL2CPP_TYPE_U8:
                        case Il2CppTypeEnum::IL2CPP_TYPE_I8:
                        case Il2CppTypeEnum::IL2CPP_TYPE_R4:
                        case Il2CppTypeEnum::IL2CPP_TYPE_R8:
                            break;
                        case Il2CppTypeEnum::IL2CPP_TYPE_VALUETYPE: {
                            auto param_klass = il2cpp_class_from_type(param.parameter_type);
                            if (il2cpp_class_is_enum(param_klass))
                                continue;
                            break;
                        }
                        case Il2CppTypeEnum::IL2CPP_TYPE_STRING:
                        case Il2CppTypeEnum::IL2CPP_TYPE_PTR:
                        case Il2CppTypeEnum::IL2CPP_TYPE_U:
                        case Il2CppTypeEnum::IL2CPP_TYPE_I:
                        case Il2CppTypeEnum::IL2CPP_TYPE_SZARRAY:
                        case Il2CppTypeEnum::IL2CPP_TYPE_ARRAY:
                        case Il2CppTypeEnum::IL2CPP_TYPE_OBJECT:
                        case Il2CppTypeEnum::IL2CPP_TYPE_VAR:
                        case Il2CppTypeEnum::IL2CPP_TYPE_MVAR:
                        case Il2CppTypeEnum::IL2CPP_TYPE_TYPEDBYREF:
                        case Il2CppTypeEnum::IL2CPP_TYPE_VOID:
                        case Il2CppTypeEnum::IL2CPP_TYPE_CLASS:
                        case Il2CppTypeEnum::IL2CPP_TYPE_GENERICINST: {
                            auto value = reinterpret_cast<Il2CppObject*>(params.at(param.position));
                            auto klass_1 = il2cpp_class_from_type(param.parameter_type);
                            auto klass_2 = value->Il2CppClass.klass;
                            if (!is_assignable(klass_2, klass_1))
                                valid = false;
                            break;
                        }
                        default:
                            break;
                    }
                }

                if (valid)
                    return method_info;
            }
        }

        trace(modloader::MessageType::Error, 3, "il2cpp", fmt::format("could not find a method overload for '{}:{}'in klass '{}' that matched parameters", method.data(), params.size(), klass->name));
        return nullptr;
    }

    MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<Il2CppClass*> const& params) {
        auto info = get_method_info_internal(klass, method, static_cast<int>(params.size()));
        if (info == nullptr) {
            return nullptr;
        }

        if (info->methods.size() == 1) {
            return info->methods.front();
        } else {
            for (auto method_info : info->methods) {
                auto valid = true;
                for (auto i = 0; valid && i < method_info->parameters_count; ++i) {
                    auto& param = method_info->parameters[i];
                    auto klass_1 = il2cpp_class_from_type(param.parameter_type);
                    auto klass_2 = params.at(param.position);
                    if (klass_1 != klass_2) {
                        valid = false;
                    }
                }

                if (valid) {
                    return method_info;
                }
            }
        }

        trace(modloader::MessageType::Error, 3, "il2cpp", fmt::format("could not find a method overload for '{}:{}'in klass '{}' that matched parameters", method.data(), params.size(), klass->name));

        trace(modloader::MessageType::Info, 3, "il2cpp", "valid parameters are:");
        for (auto method_info : info->methods) {
            std::string params = " - ";
            for (auto i = 0; i < method_info->parameters_count; ++i) {
                auto& param = method_info->parameters[i];
                auto klass = il2cpp_class_from_type(param.parameter_type);
                params += get_full_name(klass->namespaze, klass->name);
                params += ", ";
            }

            trace(modloader::MessageType::Info, 3, "il2cpp", params);
        }

        return nullptr;
    }

    MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<KlassDescriptor> const& params) {
        auto info = get_method_info_internal(klass, method, params.size());
        if (info == nullptr) {
            return nullptr;
        }

        if (info->methods.size() == 1) {
            return info->methods.front();
        } else {
            for (auto method_info : info->methods) {
                auto valid = true;
                for (auto i = 0; valid && i < method_info->parameters_count; ++i) {
                    auto& param = method_info->parameters[i];
                    auto klass_1 = il2cpp_class_from_type(param.parameter_type);
                    auto& klass_2 = params.at(param.position);
                    if (klass_2.klass == nullptr) {
                        if (klass_1->namespaze != klass_2.namezpace || klass_1->name != klass_2.name) {
                            valid = false;
                        }
                    } else if (klass_1 != klass_2.klass) {
                        valid = false;
                    }
                }

                if (valid) {
                    return method_info;
                }
            }
        }

        trace(modloader::MessageType::Error, 3, "il2cpp", fmt::format("could not find a method overload for '{}:{}'in klass '{}' that matched parameters", method.data(), params.size(), klass->name));

        trace(modloader::MessageType::Info, 3, "il2cpp", "valid parameters are:");
        for (auto method_info : info->methods) {
            std::string str_params = " - ";
            for (auto i = 0; i < method_info->parameters_count; ++i) {
                auto& param = method_info->parameters[i];
                auto param_klass = il2cpp_class_from_type(param.parameter_type);
                str_params += get_full_name(param_klass->namespaze, param_klass->name);
                str_params += ", ";
            }

            trace(modloader::MessageType::Info, 3, "il2cpp", str_params);
        }

        return nullptr;
    }

    Il2CppObject* invoke_v(void* obj, std::string_view method, std::vector<void*> params) {
        auto cast_obj = reinterpret_cast<Il2CppObject*>(obj);
        if (cast_obj == nullptr) {
            trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("invoked '{}' with nullptr", method.data()));
            return nullptr;
        }

        Il2CppException* exc = nullptr;
        auto method_info = get_method_from_name_params(cast_obj->Il2CppClass.klass, method.data(), params);
        if (method_info == nullptr) {
            trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("failed to find method '{}'", method.data()));
            return nullptr;
        }

        void** start = params.data();
        return il2cpp_runtime_invoke(method_info, cast_obj, start, &exc);
    }

    Il2CppObject* invoke_virtual_v(void* obj, Il2CppClass* base, std::string_view method, std::vector<void*> params) {
        auto cast_obj = reinterpret_cast<Il2CppObject*>(obj);
        if (cast_obj == nullptr) {
            trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("invoked '{}' with nullptr", method.data()));
            return nullptr;
        }

        Il2CppException* exc = nullptr;
        auto method_info = get_method_from_name_params(base, method.data(), params);
        if (method_info == nullptr) {
            trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("failed to find method '{}'", method.data()));
            return nullptr;
        }

        auto virtual_method_info = il2cpp_object_get_virtual_method(cast_obj, method_info);
        if (virtual_method_info == nullptr) {
            trace(modloader::MessageType::Error, 1, "il2cpp", fmt::format("failed to find virtual method '{}'", method.data()));
            return nullptr;
        }

        void** start = params.data();
        return il2cpp_runtime_invoke(virtual_method_info, cast_obj, start, &exc);
    }

    bool is_assignable(Il2CppClass* klass, std::string_view namezpace, std::string_view name) {
        return is_assignable(klass, get_class(namezpace, name));
    }

    bool is_assignable(Il2CppClass* klass, Il2CppClass* iklass) {
        if (klass == nullptr || iklass == nullptr)
            return false;

        return il2cpp_class_is_assignable_from(iklass, klass);
    }

    bool is_assignable(void* obj, std::string_view namezpace, std::string_view name) {
        return is_assignable(reinterpret_cast<Il2CppObject*>(obj)->Il2CppClass.klass, namezpace, name);
    }

    bool is_assignable(void* obj, Il2CppClass* iklass) {
        return is_assignable(reinterpret_cast<Il2CppObject*>(obj)->Il2CppClass.klass, iklass);
    }

    bool is_assignable(void* obj, void* iklass) {
        return is_assignable(reinterpret_cast<Il2CppObject*>(obj)->Il2CppClass.klass, reinterpret_cast<Il2CppClass*>(iklass));
    }

    MethodInfo* resolve_generic_method(uint64_t address) {
        return *reinterpret_cast<MethodInfo**>(memory::resolve_rva(address));
    }

    /**
     * Converts a C# string to std::string by truncating characters.
     * May lose special characters.
     * @param il2cpp_string
     * @return
     */
    std::string convert_csstring(Il2CppString* il2cpp_string) {
        std::string str(il2cpp_string->length, 0);

        for (auto i = 0; i < il2cpp_string->length; i++) {
            str[i] = (char)il2cpp_string->chars[i];
        }

        return str;
    }

    std::string convert_csstring(app::String* str) {
        return convert_csstring(reinterpret_cast<Il2CppString*>(str));
    }

    const Il2CppType* get_type(Il2CppClass* klass) {
        return il2cpp_class_get_type(klass);
    }

    const Il2CppType* get_type(void* klass) {
        return get_type(reinterpret_cast<Il2CppClass*>(klass));
    }

    app::Type* get_runtime_type(const Il2CppType* type) {
        return System::Type::internal_from_handle((void*)type);
    }

    app::Type* get_runtime_type(Il2CppClass* klass) {
        return get_runtime_type(get_type(klass));
    }

    app::Type* get_runtime_type(void* klass) {
        return get_runtime_type(get_type(klass));
    }
} // namespace il2cpp