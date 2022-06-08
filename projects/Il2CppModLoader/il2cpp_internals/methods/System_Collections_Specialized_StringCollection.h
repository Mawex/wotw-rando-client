#include <interception_macros.h>

namespace app::methods::System::Collections::Specialized::StringCollection {
IL2CPP_REGISTER_METHOD(0x0249DE30, String *, get_Item, (StringCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0249DF00, void, set_Item, (StringCollection * __this, int32_t index, String * value));
IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (StringCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, (StringCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, (StringCollection * __this));
IL2CPP_REGISTER_METHOD(0x021C0B60, int32_t, Add, (StringCollection * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01717420, void, Clear, (StringCollection * __this));
IL2CPP_REGISTER_METHOD(0x01DFFCE0, bool, Contains, (StringCollection * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01FF5420, void, CopyTo, (StringCollection * __this, String__Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02031830, int32_t, IndexOf, (StringCollection * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0249DF30, void, Insert, (StringCollection * __this, int32_t index, String * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (StringCollection * __this));
IL2CPP_REGISTER_METHOD(0x0249DF60, void, Remove, (StringCollection * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0249DF90, void, RemoveAt, (StringCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01BCB830, Object *, get_SyncRoot, (StringCollection * __this));
IL2CPP_REGISTER_METHOD(0x0249DE30, Object *, IList_get_Item, (StringCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0249DFC0, void, IList_set_Item, (StringCollection * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x0249E0A0, int32_t, IList_Add, (StringCollection * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0249E170, bool, IList_Contains, (StringCollection * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0249E240, int32_t, IList_IndexOf, (StringCollection * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0249E310, void, IList_Insert, (StringCollection * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x0249E3F0, void, IList_Remove, (StringCollection * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01FF5420, void, ICollection_CopyTo, (StringCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x01BDD500, IEnumerator *, IEnumerable_GetEnumerator, (StringCollection * __this));
IL2CPP_REGISTER_METHOD(0x0249E4C0, void, __ctor, (StringCollection * __this));
}
