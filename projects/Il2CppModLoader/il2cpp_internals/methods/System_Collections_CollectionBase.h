#include <interception_macros.h>

namespace app::methods::System::Collections::CollectionBase {
IL2CPP_REGISTER_METHOD(0x0201F3C0, void, __ctor, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0201F510, ArrayList *, get_InnerList, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, IList *, get_List, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0201F670, int32_t, get_Count, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0201F690, void, Clear, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0201F6F0, void, RemoveAt, (CollectionBase * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0472D1C8, CollectionBase_RemoveAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201F8E0, bool, IList_get_IsReadOnly, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0201F910, bool, IList_get_IsFixedSize, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0201F940, bool, ICollection_get_IsSynchronized, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0201F970, Object *, ICollection_get_SyncRoot, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0201F9A0, void, ICollection_CopyTo, (CollectionBase * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201F9F0, Object *, IList_get_Item, (CollectionBase * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0476E008, CollectionBase_System_Collections_IList_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201FB10, void, IList_set_Item, (CollectionBase * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04738C58, CollectionBase_System_Collections_IList_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201FD20, bool, IList_Contains, (CollectionBase * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0201FD60, int32_t, IList_Add, (CollectionBase * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0477B350, CollectionBase_System_Collections_IList_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201FEE0, void, IList_Remove, (CollectionBase * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04711920, CollectionBase_System_Collections_IList_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020200A0, int32_t, IList_IndexOf, (CollectionBase * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x020200E0, void, IList_Insert, (CollectionBase * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04792598, CollectionBase_System_Collections_IList_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020202A0, IEnumerator *, GetEnumerator, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSet, (CollectionBase * __this, int32_t index, Object * oldValue, Object * newValue));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInsert, (CollectionBase * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnClear, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemove, (CollectionBase * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x020202D0, void, OnValidate, (CollectionBase * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047324A8, CollectionBase_OnValidate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetComplete, (CollectionBase * __this, int32_t index, Object * oldValue, Object * newValue));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInsertComplete, (CollectionBase * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnClearComplete, (CollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemoveComplete, (CollectionBase * __this, int32_t index, Object * value));
}
