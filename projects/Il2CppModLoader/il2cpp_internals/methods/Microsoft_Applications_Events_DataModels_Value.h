#include <interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::Value {
IL2CPP_REGISTER_METHOD(0x002FC6D0, ValueKind__Enum, get_type, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_type, (Value * __this, ValueKind__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_Microsoft_Applications_Events_DataModels_Attributes_ *, get_attributes, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_attributes, (Value * __this, List_1_Microsoft_Applications_Events_DataModels_Attributes_ * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_stringValue, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_stringValue, (Value * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_longValue, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_longValue, (Value * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FD520, double, get_doubleValue, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FD530, void, set_doubleValue, (Value * __this, double value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, List_1_List_1_System_Byte_ *, get_guidValue, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_guidValue, (Value * __this, List_1_List_1_System_Byte_ * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, List_1_List_1_System_String_ *, get_stringArray, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_stringArray, (Value * __this, List_1_List_1_System_String_ * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_List_1_System_Int64_ *, get_longArray, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_longArray, (Value * __this, List_1_List_1_System_Int64_ * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, List_1_List_1_System_Double_ *, get_doubleArray, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_doubleArray, (Value * __this, List_1_List_1_System_Double_ * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_List_1_List_1_System_Int64_ *, get_guidArray, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_guidArray, (Value * __this, List_1_List_1_List_1_System_Int64_ * value));
IL2CPP_REGISTER_METHOD(0x002FD540, void, __ctor, (Value * __this));
IL2CPP_REGISTER_METHOD(0x002FD5D0, void, __ctor, (Value * __this, String * fullName, String * name));
IL2CPP_REGISTER_METHOD(0x002FD5E0, void, Release, (Value * __this));
}
