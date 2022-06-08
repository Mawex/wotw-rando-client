using namespace app;

namespace app::methods::System::Collections::Specialized::ListDictionary {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, __ctor, (ListDictionary * __this, IComparer * comparer));
IL2CPP_REGISTER_METHOD(0x02494840, Object *, get_Item, (ListDictionary * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04711898, ListDictionary_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024949A0, void, set_Item, (ListDictionary * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04770840, ListDictionary_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Count, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02494BF0, ICollection *, get_Keys, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02494D40, Object *, get_SyncRoot, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02494EA0, ICollection *, get_Values, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02494FF0, void, Add, (ListDictionary * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0476FCB0, ListDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02029A50, void, Clear, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02495270, bool, Contains, (ListDictionary * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04742D48, ListDictionary_Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024953C0, void, CopyTo, (ListDictionary * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047850C8, ListDictionary_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02495570, IDictionaryEnumerator *, GetEnumerator, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x024956D0, IEnumerator *, IEnumerable_GetEnumerator, (ListDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02495830, void, Remove, (ListDictionary * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04779028, ListDictionary_Remove__MethodInfo);
}
