#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::BypassElementCollection {
IL2CPP_REGISTER_METHOD(0x020185F0, void, __ctor, (BypassElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x047674B8, BypassElementCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018620, BypassElement *, get_Item, (BypassElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047782F0, BypassElementCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018650, void, set_Item, (BypassElementCollection * __this, int32_t index, BypassElement * value));
IL2CPP_REGISTER_METHODINFO(0x04758798, BypassElementCollection_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018680, BypassElement *, get_Item, (BypassElementCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x047849E8, BypassElementCollection_get_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020186B0, void, set_Item, (BypassElementCollection * __this, String * name, BypassElement * value));
IL2CPP_REGISTER_METHODINFO(0x047205E0, BypassElementCollection_set_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020186E0, bool, get_ThrowOnDuplicate, (BypassElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C1A8, BypassElementCollection_get_ThrowOnDuplicate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018710, void, Add, (BypassElementCollection * __this, BypassElement * element));
IL2CPP_REGISTER_METHODINFO(0x047692B0, BypassElementCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018740, void, Clear, (BypassElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04773DA8, BypassElementCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018770, ConfigurationElement *, CreateNewElement, (BypassElementCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04767F48, BypassElementCollection_CreateNewElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020187A0, Object *, GetElementKey, (BypassElementCollection * __this, ConfigurationElement * element));
IL2CPP_REGISTER_METHODINFO(0x04758148, BypassElementCollection_GetElementKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020187D0, int32_t, IndexOf, (BypassElementCollection * __this, BypassElement * element));
IL2CPP_REGISTER_METHODINFO(0x04756B90, BypassElementCollection_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018800, void, Remove, (BypassElementCollection * __this, BypassElement * element));
IL2CPP_REGISTER_METHODINFO(0x0474AA98, BypassElementCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018830, void, Remove, (BypassElementCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0478DA00, BypassElementCollection_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02018860, void, RemoveAt, (BypassElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0477FCF0, BypassElementCollection_RemoveAt__MethodInfo);
}
