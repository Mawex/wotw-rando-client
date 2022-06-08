using namespace app;

namespace app::methods::System::Collections::ArrayList_IListWrapper {
IL2CPP_REGISTER_METHOD(0x0201AA60, void, __ctor, (ArrayList_IListWrapper * __this, IList * list));
IL2CPP_REGISTER_METHOD(0x0201AB20, void, set_Capacity, (ArrayList_IListWrapper * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047176C0, ArrayList_IListWrapper_set_Capacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201AC00, int32_t, get_Count, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0201AC90, bool, get_IsReadOnly, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0201AD20, bool, get_IsFixedSize, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0201ADB0, bool, get_IsSynchronized, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0201AE40, Object *, get_Item, (ArrayList_IListWrapper * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201AEE0, void, set_Item, (ArrayList_IListWrapper * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x0201AFA0, Object *, get_SyncRoot, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0201B030, int32_t, Add, (ArrayList_IListWrapper * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0201B0E0, void, AddRange, (ArrayList_IListWrapper * __this, ICollection * c));
IL2CPP_REGISTER_METHOD(0x0201B130, void, Clear, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHODINFO(0x04759B68, ArrayList_IListWrapper_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201B230, Object *, Clone, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0201B380, bool, Contains, (ArrayList_IListWrapper * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0201B430, void, CopyTo, (ArrayList_IListWrapper * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201B4E0, void, CopyTo, (ArrayList_IListWrapper * __this, int32_t index, Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04777118, ArrayList_IListWrapper_CopyTo_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201B7C0, IEnumerator *, GetEnumerator, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0201B850, int32_t, IndexOf, (ArrayList_IListWrapper * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0201B900, void, Insert, (ArrayList_IListWrapper * __this, int32_t index, Object * obj));
IL2CPP_REGISTER_METHOD(0x0201B9C0, void, InsertRange, (ArrayList_IListWrapper * __this, int32_t index, ICollection * c));
IL2CPP_REGISTER_METHODINFO(0x047013A0, ArrayList_IListWrapper_InsertRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201BCE0, void, Remove, (ArrayList_IListWrapper * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0201BD20, void, RemoveAt, (ArrayList_IListWrapper * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201BDD0, void, RemoveRange, (ArrayList_IListWrapper * __this, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04761CD0, ArrayList_IListWrapper_RemoveRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201BFD0, void, Sort, (ArrayList_IListWrapper * __this, int32_t index, int32_t count, IComparer * comparer));
IL2CPP_REGISTER_METHODINFO(0x04776498, ArrayList_IListWrapper_Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201C280, Object__Array *, ToArray, (ArrayList_IListWrapper * __this));
IL2CPP_REGISTER_METHOD(0x0201C350, Array *, ToArray, (ArrayList_IListWrapper * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x0473DB38, ArrayList_IListWrapper_ToArray_1__MethodInfo);
}
