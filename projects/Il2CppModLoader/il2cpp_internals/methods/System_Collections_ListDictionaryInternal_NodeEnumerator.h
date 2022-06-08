#include <interception_macros.h>

namespace app::methods::System::Collections::ListDictionaryInternal_NodeEnumerator {
IL2CPP_REGISTER_METHOD(0x0202A190, void, __ctor, (ListDictionaryInternal_NodeEnumerator * __this, ListDictionaryInternal * list));
IL2CPP_REGISTER_METHOD(0x0202A1C0, Object *, get_Current, (ListDictionaryInternal_NodeEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x0202A310, DictionaryEntry, get_Entry, (ListDictionaryInternal_NodeEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x0472B848, ListDictionaryInternal_NodeEnumerator_get_Entry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202A3F0, Object *, get_Key, (ListDictionaryInternal_NodeEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04722A88, ListDictionaryInternal_NodeEnumerator_get_Key__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202A4C0, Object *, get_Value, (ListDictionaryInternal_NodeEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04729D68, ListDictionaryInternal_NodeEnumerator_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202A590, bool, MoveNext, (ListDictionaryInternal_NodeEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x047130C0, ListDictionaryInternal_NodeEnumerator_MoveNext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0202A6A0, void, Reset, (ListDictionaryInternal_NodeEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x047531F8, ListDictionaryInternal_NodeEnumerator_Reset__MethodInfo);
}
