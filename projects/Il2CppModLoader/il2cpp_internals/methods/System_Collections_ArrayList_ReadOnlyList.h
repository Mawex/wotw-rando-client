#include <interception_macros.h>

namespace app::methods::System::Collections::ArrayList_ReadOnlyList {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ArrayList_ReadOnlyList * __this, IList * l));
IL2CPP_REGISTER_METHOD(0x0201CE10, int32_t, get_Count, (ArrayList_ReadOnlyList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (ArrayList_ReadOnlyList * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (ArrayList_ReadOnlyList * __this));
IL2CPP_REGISTER_METHOD(0x0201CEA0, bool, get_IsSynchronized, (ArrayList_ReadOnlyList * __this));
IL2CPP_REGISTER_METHOD(0x0201CF30, Object *, get_Item, (ArrayList_ReadOnlyList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201CFD0, void, set_Item, (ArrayList_ReadOnlyList * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047992B8, ArrayList_ReadOnlyList_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D040, Object *, get_SyncRoot, (ArrayList_ReadOnlyList * __this));
IL2CPP_REGISTER_METHOD(0x0201D0D0, int32_t, Add, (ArrayList_ReadOnlyList * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047915B8, ArrayList_ReadOnlyList_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D140, void, Clear, (ArrayList_ReadOnlyList * __this));
IL2CPP_REGISTER_METHODINFO(0x04774DF8, ArrayList_ReadOnlyList_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D1B0, bool, Contains, (ArrayList_ReadOnlyList * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0201D260, void, CopyTo, (ArrayList_ReadOnlyList * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201D310, IEnumerator *, GetEnumerator, (ArrayList_ReadOnlyList * __this));
IL2CPP_REGISTER_METHOD(0x0201D3A0, int32_t, IndexOf, (ArrayList_ReadOnlyList * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0201D450, void, Insert, (ArrayList_ReadOnlyList * __this, int32_t index, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0475AD08, ArrayList_ReadOnlyList_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D4C0, void, Remove, (ArrayList_ReadOnlyList * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0475E630, ArrayList_ReadOnlyList_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D530, void, RemoveAt, (ArrayList_ReadOnlyList * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0478E4E0, ArrayList_ReadOnlyList_RemoveAt__MethodInfo);
}
