#include <interception_macros.h>

namespace app::methods::UnityEngine_Rendering::RenderTargetIdentifier {
IL2CPP_REGISTER_METHOD(0x00218440, void, __ctor_1, (app::RenderTargetIdentifier__Boxed * this_ptr, app::BuiltinRenderTextureType__Enum type));
IL2CPP_REGISTER_METHOD(0x00218450, void, __ctor_2, (app::RenderTargetIdentifier__Boxed * this_ptr, int32_t name_i_d));
IL2CPP_REGISTER_METHOD(0x00218460, void, __ctor_3, (app::RenderTargetIdentifier__Boxed * this_ptr, app::RenderTargetIdentifier render_target_identifier, int32_t mip_level, app::CubemapFace__Enum cube_face, int32_t depth_slice));
IL2CPP_REGISTER_METHOD(0x002184A0, void, __ctor_4, (app::RenderTargetIdentifier__Boxed * this_ptr, app::Texture * tex));
IL2CPP_REGISTER_METHOD(0x02978090, RenderTargetIdentifier, operator__1, (app::BuiltinRenderTextureType__Enum type));
IL2CPP_REGISTER_METHOD(0x02978170, RenderTargetIdentifier, operator__2, (int32_t name_i_d));
IL2CPP_REGISTER_METHOD(0x02978250, RenderTargetIdentifier, operator__3, (app::Texture * tex));
IL2CPP_REGISTER_METHOD(0x002184B0, String *, ToString, (app::RenderTargetIdentifier__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x002184C0, int32_t, GetHashCode, (app::RenderTargetIdentifier__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x002184D0, bool, Equals_1, (app::RenderTargetIdentifier__Boxed * this_ptr, app::RenderTargetIdentifier rhs));
IL2CPP_REGISTER_METHOD(0x00218550, bool, Equals_2, (app::RenderTargetIdentifier__Boxed * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x02978630, bool, operator___, (app::RenderTargetIdentifier lhs, app::RenderTargetIdentifier rhs));
}
