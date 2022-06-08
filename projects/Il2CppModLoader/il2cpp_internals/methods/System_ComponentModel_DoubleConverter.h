#include <interception_macros.h>

namespace app::methods::System::ComponentModel::DoubleConverter {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHex, (DoubleConverter * __this));
IL2CPP_REGISTER_METHOD(0x01FE78C0, Type *, get_TargetType, (DoubleConverter * __this));
IL2CPP_REGISTER_METHOD(0x01FE7960, Object *, FromString, (DoubleConverter * __this, String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x01FE7A60, Object *, FromString, (DoubleConverter * __this, String * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE7B30, Object *, FromString, (DoubleConverter * __this, String * value, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01FE7C00, String *, ToString, (DoubleConverter * __this, Object * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (DoubleConverter * __this));
}
