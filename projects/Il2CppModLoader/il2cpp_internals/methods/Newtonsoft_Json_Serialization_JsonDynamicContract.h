#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonDynamicContract {
IL2CPP_REGISTER_METHOD(0x002FBD00, JsonPropertyCollection *, get_Properties, (JsonDynamicContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBD20, Func_2_String_String_ *, get_PropertyNameResolver, (JsonDynamicContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_PropertyNameResolver, (JsonDynamicContract * __this, Func_2_String_String_ * value));
IL2CPP_REGISTER_METHOD(0x01870D40, CallSite_1_System_Func_3_ *, CreateCallSiteGetter, (String * name));
IL2CPP_REGISTER_METHODINFO(0x04766300, JsonDynamicContract_CreateCallSiteGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01870FC0, CallSite_1_System_Func_4_ *, CreateCallSiteSetter, (String * name));
IL2CPP_REGISTER_METHODINFO(0x04745E78, JsonDynamicContract_CreateCallSiteSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01871240, void, __ctor, (JsonDynamicContract * __this, Type * underlyingType));
IL2CPP_REGISTER_METHOD(0x01871710, bool, TryGetMember, (JsonDynamicContract * __this, IDynamicMetaObjectProvider * dynamicProvider, String * name, Object * * value));
IL2CPP_REGISTER_METHOD(0x01871880, bool, TrySetMember, (JsonDynamicContract * __this, IDynamicMetaObjectProvider * dynamicProvider, String * name, Object * value));
}
