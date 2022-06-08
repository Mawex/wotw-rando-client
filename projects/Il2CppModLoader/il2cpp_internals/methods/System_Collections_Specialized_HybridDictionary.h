#include <interception_macros.h>

namespace app::methods::System::Collections::Specialized::HybridDictionary {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, __ctor, (HybridDictionary * __this, bool caseInsensitive));
IL2CPP_REGISTER_METHOD(0x02493270, Object *, get_Item, (HybridDictionary * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04781700, HybridDictionary_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02493390, void, set_Item, (HybridDictionary * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x02493590, ListDictionary *, get_List, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02493710, void, ChangeOver, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02493B50, int32_t, get_Count, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02493B80, ICollection *, get_Keys, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02493D20, ICollection *, get_Values, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02493EC0, void, Add, (HybridDictionary * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x024940C0, void, Clear, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02494110, bool, Contains, (HybridDictionary * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04793278, HybridDictionary_Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02494340, void, CopyTo, (HybridDictionary * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x024943B0, IDictionaryEnumerator *, GetEnumerator, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02494570, IEnumerator *, IEnumerable_GetEnumerator, (HybridDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02494730, void, Remove, (HybridDictionary * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x0476E838, HybridDictionary_Remove__MethodInfo);
}
