#include <interception_macros.h>

namespace app::methods::System::Collections::ListDictionaryInternal {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02028E50, Object *, get_Item, (ListDictionaryInternal * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x0472C078, ListDictionaryInternal_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02028F70, void, set_Item, (ListDictionaryInternal * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04725760, ListDictionaryInternal_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Count, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02029290, ICollection *, get_Keys, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x020293E0, Object *, get_SyncRoot, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02029540, ICollection *, get_Values, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02029690, void, Add, (ListDictionaryInternal * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472E688, ListDictionaryInternal_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02029A50, void, Clear, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02029A60, bool, Contains, (ListDictionaryInternal * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x0472D658, ListDictionaryInternal_Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02029B70, void, CopyTo, (ListDictionaryInternal * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0472AA90, ListDictionaryInternal_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02029D80, IDictionaryEnumerator *, GetEnumerator, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x02029EE0, IEnumerator *, IEnumerable_GetEnumerator, (ListDictionaryInternal * __this));
IL2CPP_REGISTER_METHOD(0x0202A040, void, Remove, (ListDictionaryInternal * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04761CC0, ListDictionaryInternal_Remove__MethodInfo);
}
