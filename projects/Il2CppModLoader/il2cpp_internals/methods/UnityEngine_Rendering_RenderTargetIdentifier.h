using namespace app;

namespace app::methods::UnityEngine::Rendering::RenderTargetIdentifier {
IL2CPP_REGISTER_METHOD(0x00218440, void, __ctor, (RenderTargetIdentifier__Boxed * __this, BuiltinRenderTextureType__Enum type));
IL2CPP_REGISTER_METHOD(0x00218450, void, __ctor, (RenderTargetIdentifier__Boxed * __this, int32_t nameID));
IL2CPP_REGISTER_METHOD(0x00218460, void, __ctor, (RenderTargetIdentifier__Boxed * __this, RenderTargetIdentifier renderTargetIdentifier, int32_t mipLevel, CubemapFace__Enum cubeFace, int32_t depthSlice));
IL2CPP_REGISTER_METHOD(0x002184A0, void, __ctor, (RenderTargetIdentifier__Boxed * __this, Texture * tex));
IL2CPP_REGISTER_METHOD(0x02978090, RenderTargetIdentifier, operator_, (BuiltinRenderTextureType__Enum type));
IL2CPP_REGISTER_METHOD(0x02978170, RenderTargetIdentifier, operator_, (int32_t nameID));
IL2CPP_REGISTER_METHOD(0x02978250, RenderTargetIdentifier, operator_, (Texture * tex));
IL2CPP_REGISTER_METHOD(0x002184B0, String *, ToString, (RenderTargetIdentifier__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002184C0, int32_t, GetHashCode, (RenderTargetIdentifier__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002184D0, bool, Equals, (RenderTargetIdentifier__Boxed * __this, RenderTargetIdentifier rhs));
IL2CPP_REGISTER_METHOD(0x00218550, bool, Equals, (RenderTargetIdentifier__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02978630, bool, operator___, (RenderTargetIdentifier lhs, RenderTargetIdentifier rhs));
}
