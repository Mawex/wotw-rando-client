#include <interception_macros.h>

namespace app::methods::Moon::Rendering::RenderTarget {
IL2CPP_REGISTER_METHOD(0x00EB1BB0, void, __ctor, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x00EB1C10, void, __ctor, (RenderTarget * __this, String * name));
IL2CPP_REGISTER_METHOD(0x002FC6D0, RenderTargetType__Enum, get_type, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_name, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x00EB1C70, int32_t, get_width, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x00EB1C80, int32_t, get_height, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x00EB1C90, Int2, get_size, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x00EB1CB0, int64_t, get_vramSize, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x00EB1D20, RenderTargetDescriptor, get_currentDesc, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x00EB1D60, RenderTargetIdentifier, operator_, (RenderTarget * rt));
IL2CPP_REGISTER_METHOD(0x00EB1DA0, void, Set, (RenderTarget * __this, RenderTargetType__Enum _type, String * _name, RenderTextureDescriptor _desc, FilterMode__Enum _filterMode));
IL2CPP_REGISTER_METHOD(0x00EB1DE0, void, SetExternal, (RenderTarget * __this, Camera * _camera));
IL2CPP_REGISTER_METHOD(0x002FBD00, RenderTexture *, get_tex, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_tex, (RenderTarget * __this, RenderTexture * value));
IL2CPP_REGISTER_METHOD(0x008468B0, int32_t, get_nameID, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x008468C0, void, set_nameID, (RenderTarget * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00EB2190, RenderTargetIdentifier, get_id, (RenderTarget * __this));
IL2CPP_REGISTER_METHOD(0x00EB21C0, void, set_id, (RenderTarget * __this, RenderTargetIdentifier value));
IL2CPP_REGISTER_METHOD(0x00EB21F0, bool, Acquire, (RenderTarget * __this, MoonRenderContext * context));
IL2CPP_REGISTER_METHOD(0x00EB22B0, void, Release, (RenderTarget * __this, MoonRenderContext * context));
IL2CPP_REGISTER_METHOD(0x00EB22E0, void, Release, (RenderTarget * __this, CommandBuffer * cmd));
IL2CPP_REGISTER_METHOD(0x00EB22F0, void, AcquireInternal, (RenderTarget * __this, CommandBuffer * cmd));
IL2CPP_REGISTER_METHODINFO(0x04760B08, RenderTarget_AcquireInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EB2880, void, ReleaseInternal, (RenderTarget * __this, CommandBuffer * cmd));
IL2CPP_REGISTER_METHODINFO(0x047504A8, RenderTarget_ReleaseInternal__MethodInfo);
}
