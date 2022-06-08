using namespace app;

namespace app::methods::System::Collections::SortedList_ValueList {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SortedList_ValueList * __this, SortedList * sortedList));
IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, (SortedList_ValueList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (SortedList_ValueList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (SortedList_ValueList * __this));
IL2CPP_REGISTER_METHOD(0x017173C0, bool, get_IsSynchronized, (SortedList_ValueList * __this));
IL2CPP_REGISTER_METHOD(0x017173F0, Object *, get_SyncRoot, (SortedList_ValueList * __this));
IL2CPP_REGISTER_METHOD(0x02031590, int32_t, Add, (SortedList_ValueList * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04773A90, SortedList_ValueList_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02031600, void, Clear, (SortedList_ValueList * __this));
IL2CPP_REGISTER_METHODINFO(0x047626F8, SortedList_ValueList_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02031670, bool, Contains, (SortedList_ValueList * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x020316A0, void, CopyTo, (SortedList_ValueList * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x04703AB0, SortedList_ValueList_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020317C0, void, Insert, (SortedList_ValueList * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04739E20, SortedList_ValueList_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02031830, Object *, get_Item, (SortedList_ValueList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02031860, void, set_Item, (SortedList_ValueList * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04713998, SortedList_ValueList_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020318D0, IEnumerator *, GetEnumerator, (SortedList_ValueList * __this));
IL2CPP_REGISTER_METHOD(0x02031A70, int32_t, IndexOf, (SortedList_ValueList * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02031B30, void, Remove, (SortedList_ValueList * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04786C10, SortedList_ValueList_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02031BA0, void, RemoveAt, (SortedList_ValueList * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04743B10, SortedList_ValueList_RemoveAt__MethodInfo);
}
