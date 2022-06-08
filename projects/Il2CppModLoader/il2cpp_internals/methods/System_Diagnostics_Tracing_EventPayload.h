using namespace app;

namespace app::methods::System::Diagnostics::Tracing::EventPayload {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (EventPayload * __this, List_1_System_String_ * payloadNames, List_1_System_Object_ * payloadValues));
IL2CPP_REGISTER_METHOD(0x002FA280, ICollection_1_System_String_ *, get_Keys, (EventPayload * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ICollection_1_System_Object_ *, get_Values, (EventPayload * __this));
IL2CPP_REGISTER_METHOD(0x0174C6A0, Object *, get_Item, (EventPayload * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x0474B1E0, EventPayload_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174C8F0, void, set_Item, (EventPayload * __this, String * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04707200, EventPayload_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174C940, void, Add, (EventPayload * __this, String * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04796B10, EventPayload_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174C990, void, Add, (EventPayload * __this, KeyValuePair_2_System_String_System_Object_ payloadEntry));
IL2CPP_REGISTER_METHODINFO(0x04744BF8, EventPayload_Add_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174C9E0, void, Clear, (EventPayload * __this));
IL2CPP_REGISTER_METHODINFO(0x04715258, EventPayload_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174CA30, bool, Contains, (EventPayload * __this, KeyValuePair_2_System_String_System_Object_ entry));
IL2CPP_REGISTER_METHOD(0x0174CAC0, bool, ContainsKey, (EventPayload * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x04716520, EventPayload_ContainsKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174CCA0, int32_t, get_Count, (EventPayload * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (EventPayload * __this));
IL2CPP_REGISTER_METHOD(0x0174CD30, IEnumerator_1_KeyValuePair_2_System_String_System_Object_ *, GetEnumerator, (EventPayload * __this));
IL2CPP_REGISTER_METHOD(0x0174CE80, IEnumerator *, IEnumerable_GetEnumerator, (EventPayload * __this));
IL2CPP_REGISTER_METHOD(0x0174CF10, void, CopyTo, (EventPayload * __this, KeyValuePair_2_System_String_System_Object___Array * payloadEntries, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0476F4C8, EventPayload_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174CF60, bool, Remove, (EventPayload * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x04705990, EventPayload_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174CFB0, bool, Remove, (EventPayload * __this, KeyValuePair_2_System_String_System_Object_ entry));
IL2CPP_REGISTER_METHODINFO(0x04799698, EventPayload_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0174D000, bool, TryGetValue, (EventPayload * __this, String * key, Object * * value));
IL2CPP_REGISTER_METHODINFO(0x047310D0, EventPayload_TryGetValue__MethodInfo);
}
