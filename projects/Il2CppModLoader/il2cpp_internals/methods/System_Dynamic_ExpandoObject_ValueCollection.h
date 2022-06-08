using namespace app;

namespace app::methods::System::Dynamic::ExpandoObject_ValueCollection {
IL2CPP_REGISTER_METHOD(0x01F92B00, void, __ctor, (ExpandoObject_ValueCollection * __this, ExpandoObject * expando));
IL2CPP_REGISTER_METHOD(0x01F92C10, void, CheckVersion, (ExpandoObject_ValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04720640, ExpandoObject_ValueCollection_CheckVersion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F92CD0, void, Add, (ExpandoObject_ValueCollection * __this, Object * item));
IL2CPP_REGISTER_METHODINFO(0x04717908, ExpandoObject_ValueCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F92D10, void, Clear, (ExpandoObject_ValueCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B038, ExpandoObject_ValueCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F92D50, bool, Contains, (ExpandoObject_ValueCollection * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x01F92F30, void, CopyTo, (ExpandoObject_ValueCollection * __this, Object__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x01F93220, int32_t, get_Count, (ExpandoObject_ValueCollection * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (ExpandoObject_ValueCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F93240, bool, Remove, (ExpandoObject_ValueCollection * __this, Object * item));
IL2CPP_REGISTER_METHODINFO(0x0473BDD0, ExpandoObject_ValueCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F93280, IEnumerator_1_System_Object_ *, GetEnumerator, (ExpandoObject_ValueCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F93280, IEnumerator *, IEnumerable_GetEnumerator, (ExpandoObject_ValueCollection * __this));
}
