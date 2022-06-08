#include <interception_macros.h>

namespace app::methods::UberShaderRange {
IL2CPP_REGISTER_METHOD(0x0191AFB0, void, __ctor, (UberShaderRange * __this, float minValue, float maxValue));
IL2CPP_REGISTER_METHOD(0x0191AFD0, void, __ctor, (UberShaderRange * __this));
IL2CPP_REGISTER_METHOD(0x0191B080, void, BindProperties, (UberShaderRange * __this));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_MinValue, (UberShaderRange * __this));
IL2CPP_REGISTER_METHOD(0x0190CF30, void, set_MinValue, (UberShaderRange * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_MaxValue, (UberShaderRange * __this));
IL2CPP_REGISTER_METHOD(0x01289F00, void, set_MaxValue, (UberShaderRange * __this, float value));
}
