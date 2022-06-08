#include <interception_macros.h>

namespace app::methods::System::ComponentModel::SByteConverter {
IL2CPP_REGISTER_METHOD(0x029AC600, Type *, get_TargetType, (SByteConverter * __this));
IL2CPP_REGISTER_METHOD(0x029AC6A0, Object *, FromString, (SByteConverter * __this, String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x029AC870, Object *, FromString, (SByteConverter * __this, String * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x029AC930, Object *, FromString, (SByteConverter * __this, String * value, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x029AC9E0, String *, ToString, (SByteConverter * __this, Object * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (SByteConverter * __this));
}
