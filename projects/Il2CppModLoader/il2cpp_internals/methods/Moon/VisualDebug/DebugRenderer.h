#include <interception_macros.h>

namespace app::methods::Moon::VisualDebug::DebugRenderer {
    IL2CPP_REGISTER_METHOD(0x0118D920, void, Register, (app::IDebugRendererSubscriber * subscriber));
    IL2CPP_REGISTER_METHOD(0x0118DA40, void, Unregister, (app::IDebugRendererSubscriber * subscriber));
    IL2CPP_REGISTER_METHOD(0x0118DB60, void, RenderLine, (app::Vector3 start, app::Vector3 end, app::Color color, bool render_now));
    IL2CPP_REGISTER_METHOD(0x0118DF80, void, RenderRect, (app::Rect rect, app::Color color, float z_position, bool render_now));
    IL2CPP_REGISTER_METHODINFO(0x04752F30, DebugRenderer_RenderRect__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0118E210, void, RenderFilledRect, (app::Rect rect, app::Color color, float z_position, bool render_now));
    IL2CPP_REGISTER_METHODINFO(0x047480D8, DebugRenderer_RenderFilledRect__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0118E440, void, RenderBorder, (app::Rect rect, float border, app::Color fill_color, app::Color border_color, float z_position, bool render_now));
    IL2CPP_REGISTER_METHODINFO(0x047797D0, DebugRenderer_RenderBorder__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0118E9B0, void, RenderBounds_1, (app::Bounds bounds, app::Color color, bool render_now));
    IL2CPP_REGISTER_METHOD(0x0118EAF0, void, RenderBounds_2, (app::Bounds bounds, app::Vector3 root_position, app::Color color, bool render_now));
    IL2CPP_REGISTER_METHODINFO(0x04724690, DebugRenderer_RenderBounds_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0118EEA0, void, RenderQuad, (app::Vector3 p0, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3, app::Color color, bool render_now));
    IL2CPP_REGISTER_METHODINFO(0x0472D7C8, DebugRenderer_RenderQuad__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0118F0D0, void, RenderMeshCollider, (app::MeshCollider * mesh_collider, app::Color color, bool render_now));
    IL2CPP_REGISTER_METHOD(0x0118F2F0, void, RenderCapsuleCollider, (app::CapsuleCollider * capsule_collider, app::Color color, bool render_now));
    IL2CPP_REGISTER_METHODINFO(0x04797DB0, DebugRenderer_RenderCapsuleCollider__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0118FD10, void, RenderMesh, (app::Mesh * mesh, app::Matrix4x4 transformation_matrix, app::Color color, bool render_now));
    IL2CPP_REGISTER_METHODINFO(0x04759B58, DebugRenderer_RenderMesh__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01190030, void, RenderSolidMesh, (app::Mesh * mesh, app::Matrix4x4 transformation_matrix, app::Color color, bool render_now));
    IL2CPP_REGISTER_METHODINFO(0x04741770, DebugRenderer_RenderSolidMesh__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01190350, void, Render, (app::MoonRenderContext * context, app::Camera * camera));
    IL2CPP_REGISTER_METHOD(0x011905C0, void, render, (app::DebugRenderer * this_ptr, app::RenderingType__Enum rendering_type, app::Camera * camera));
    IL2CPP_REGISTER_METHOD(0x01190CC0, void, PrepareRendering, (app::RenderingType__Enum rendering_type, app::Camera * camera));
    IL2CPP_REGISTER_METHOD(0x01190FA0, void, FinishRendering, (app::RenderingType__Enum rendering_type, app::Camera * camera));
    IL2CPP_REGISTER_METHOD(0x01191100, void, SetGLMode, (int32_t mode));
    IL2CPP_REGISTER_METHOD(0x01191310, app::Material *, get_GLMaterial, ());
    IL2CPP_REGISTER_METHOD(0x01191570, void, set_GLMaterial, (app::Material * value));
    IL2CPP_REGISTER_METHOD(0x01191620, app::Material *, get_WireframeMaterial, ());
    IL2CPP_REGISTER_METHOD(0x01191880, void, set_WireframeMaterial, (app::Material * value));
    IL2CPP_REGISTER_METHOD(0x01191930, app::Material *, get_TransparentColorMaterial, ());
    IL2CPP_REGISTER_METHOD(0x01191B90, void, set_TransparentColorMaterial, (app::Material * value));
    IL2CPP_REGISTER_METHOD(0x01191C40, app::DebugRenderer *, get_Instance, ());
    IL2CPP_REGISTER_METHOD(0x01191E30, bool, get_Enabled, ());
    IL2CPP_REGISTER_METHOD(0x01191ED0, void, set_Enabled, (bool value));
    IL2CPP_REGISTER_METHOD(0x01191F80, void, __ctor, (app::DebugRenderer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011923F0, void, __cctor, ());
}
