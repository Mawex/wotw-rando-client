using namespace app;

namespace app::methods::System::Collections::EmptyReadOnlyDictionaryInternal {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x020210F0, IEnumerator *, IEnumerable_GetEnumerator, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02021230, void, CopyTo, (EmptyReadOnlyDictionaryInternal * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04746020, EmptyReadOnlyDictionaryInternal_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Count, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x020213D0, Object *, get_Item, (EmptyReadOnlyDictionaryInternal * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04745DE0, EmptyReadOnlyDictionaryInternal_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020214A0, void, set_Item, (EmptyReadOnlyDictionaryInternal * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04728740, EmptyReadOnlyDictionaryInternal_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020216A0, ICollection *, get_Keys, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02021740, ICollection *, get_Values, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, Contains, (EmptyReadOnlyDictionaryInternal * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x020217E0, void, Add, (EmptyReadOnlyDictionaryInternal * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047203A8, EmptyReadOnlyDictionaryInternal_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020219E0, void, Clear, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ABD0, EmptyReadOnlyDictionaryInternal_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02021A50, IDictionaryEnumerator *, GetEnumerator, (EmptyReadOnlyDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02021B90, void, Remove, (EmptyReadOnlyDictionaryInternal * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04765778, EmptyReadOnlyDictionaryInternal_Remove__MethodInfo);
}
