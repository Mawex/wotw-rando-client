#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::FormatterConverter {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (FormatterConverter * __this));
IL2CPP_REGISTER_METHOD(0x01D88010, Object *, Convert, (FormatterConverter * __this, Object * value, Type * type));
IL2CPP_REGISTER_METHODINFO(0x04724C88, FormatterConverter_Convert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D88120, bool, ToBoolean, (FormatterConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0473B588, FormatterConverter_ToBoolean__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D88230, int32_t, ToInt32, (FormatterConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04798148, FormatterConverter_ToInt32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D88340, int64_t, ToInt64, (FormatterConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047814E8, FormatterConverter_ToInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D88450, float, ToSingle, (FormatterConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04743180, FormatterConverter_ToSingle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D88560, String *, ToString, (FormatterConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04718448, FormatterConverter_ToString__MethodInfo);
}
