#include <interception_macros.h>

namespace app::methods::UberShader::LightDirectionMapProperty {
IL2CPP_REGISTER_METHOD(0x002FB9B0, CompressedLightDirectionMap *, get_CompressedMap, (LightDirectionMapProperty * __this));
IL2CPP_REGISTER_METHOD(0x018FAE90, void, set_CompressedMap, (LightDirectionMapProperty * __this, CompressedLightDirectionMap * value));
IL2CPP_REGISTER_METHOD(0x018FAEB0, bool, get_IsInitialized, (LightDirectionMapProperty * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BindProperties, (LightDirectionMapProperty * __this));
IL2CPP_REGISTER_METHOD(0x018FAFA0, void, __ctor, (LightDirectionMapProperty * __this));
IL2CPP_REGISTER_METHOD(0x018FB0F0, void, __cctor, ());
}
