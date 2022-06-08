#include <interception_macros.h>

namespace app::methods::UberShaderRuntimeRenderOrder {
IL2CPP_REGISTER_METHOD(0x01284B10, bool, get_IsInScene, (UberShaderRuntimeRenderOrder * __this));
IL2CPP_REGISTER_METHOD(0x01284B20, void, set_IsInScene, (UberShaderRuntimeRenderOrder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (UberShaderRuntimeRenderOrder * __this));
IL2CPP_REGISTER_METHOD(0x01284B30, void, LateUpdate, (UberShaderRuntimeRenderOrder * __this));
IL2CPP_REGISTER_METHOD(0x01285130, void, SetRenderQueueOnFast, (UberShaderRuntimeRenderOrder * __this, Transform * trans, Renderer * rend, float z));
IL2CPP_REGISTER_METHOD(0x01285340, void, SetRenderQueueOn, (UberShaderRuntimeRenderOrder * __this, Transform * trans));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (UberShaderRuntimeRenderOrder * __this));
IL2CPP_REGISTER_METHOD(0x012855D0, void, __cctor, ());
}
