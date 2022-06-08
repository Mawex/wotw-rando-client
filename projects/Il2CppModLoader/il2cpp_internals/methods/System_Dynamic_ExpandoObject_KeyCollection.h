using namespace app;

namespace app::methods::System::Dynamic::ExpandoObject_KeyCollection {
IL2CPP_REGISTER_METHOD(0x01F8FDB0, void, __ctor, (ExpandoObject_KeyCollection * __this, ExpandoObject * expando));
IL2CPP_REGISTER_METHOD(0x01F8FEC0, void, CheckVersion, (ExpandoObject_KeyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047423B0, ExpandoObject_KeyCollection_CheckVersion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8FF80, void, Add, (ExpandoObject_KeyCollection * __this, String * item));
IL2CPP_REGISTER_METHODINFO(0x047075D8, ExpandoObject_KeyCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8FFC0, void, Clear, (ExpandoObject_KeyCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04797CE8, ExpandoObject_KeyCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F90000, bool, Contains, (ExpandoObject_KeyCollection * __this, String * item));
IL2CPP_REGISTER_METHOD(0x01F90150, void, CopyTo, (ExpandoObject_KeyCollection * __this, String__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x01F90480, int32_t, get_Count, (ExpandoObject_KeyCollection * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (ExpandoObject_KeyCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F904A0, bool, Remove, (ExpandoObject_KeyCollection * __this, String * item));
IL2CPP_REGISTER_METHODINFO(0x04712A98, ExpandoObject_KeyCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F904E0, IEnumerator_1_System_String_ *, GetEnumerator, (ExpandoObject_KeyCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F904E0, IEnumerator *, IEnumerable_GetEnumerator, (ExpandoObject_KeyCollection * __this));
}
