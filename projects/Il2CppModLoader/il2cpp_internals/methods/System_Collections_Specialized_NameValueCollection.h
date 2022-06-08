#include <interception_macros.h>

namespace app::methods::System::Collections::Specialized::NameValueCollection {
IL2CPP_REGISTER_METHOD(0x024997A0, void, __ctor, (NameValueCollection * __this));
IL2CPP_REGISTER_METHOD(0x024998E0, void, __ctor, (NameValueCollection * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02499A10, void, __ctor, (NameValueCollection * __this, int32_t capacity, IEqualityComparer * equalityComparer));
IL2CPP_REGISTER_METHOD(0x02499AD0, void, __ctor, (NameValueCollection * __this, DBNull * dummy));
IL2CPP_REGISTER_METHOD(0x02499B60, void, __ctor, (NameValueCollection * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02499C10, void, InvalidateCachedArrays, (NameValueCollection * __this));
IL2CPP_REGISTER_METHOD(0x02499C20, String *, GetAsOneString, (ArrayList * list));
IL2CPP_REGISTER_METHOD(0x0249A000, String__Array *, GetAsStringArray, (ArrayList * list));
IL2CPP_REGISTER_METHOD(0x0249A0F0, void, Add, (NameValueCollection * __this, NameValueCollection * c));
IL2CPP_REGISTER_METHODINFO(0x0472F010, NameValueCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249A290, void, Clear, (NameValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047597E0, NameValueCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249A400, bool, HasKeys, (NameValueCollection * __this));
IL2CPP_REGISTER_METHOD(0x02497B80, bool, InternalHasKeys, (NameValueCollection * __this));
IL2CPP_REGISTER_METHOD(0x0249A420, void, Add, (NameValueCollection * __this, String * name, String * value));
IL2CPP_REGISTER_METHODINFO(0x0474B2F0, NameValueCollection_Add_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249A6E0, String *, Get, (NameValueCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0249A7E0, String__Array *, GetValues, (NameValueCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0249A8E0, void, Set, (NameValueCollection * __this, String * name, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472FF00, NameValueCollection_Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249ABD0, void, Remove, (NameValueCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0249ABF0, String *, get_Item, (NameValueCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0249AC10, void, set_Item, (NameValueCollection * __this, String * name, String * value));
IL2CPP_REGISTER_METHOD(0x0249AC30, String *, Get, (NameValueCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0249AD20, String__Array *, GetValues, (NameValueCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0249AE10, String *, GetKey, (NameValueCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x018687B0, String *, get_Item, (NameValueCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0249AE20, String__Array *, get_AllKeys, (NameValueCollection * __this));
}
