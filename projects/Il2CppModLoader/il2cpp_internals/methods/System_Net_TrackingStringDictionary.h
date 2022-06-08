using namespace app;

namespace app::methods::System::Net::TrackingStringDictionary {
IL2CPP_REGISTER_METHOD(0x020A9E30, void, __ctor, (TrackingStringDictionary * __this));
IL2CPP_REGISTER_METHOD(0x020A9E50, void, __ctor, (TrackingStringDictionary * __this, bool isReadOnly));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsChanged, (TrackingStringDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsChanged, (TrackingStringDictionary * __this, bool value));
IL2CPP_REGISTER_METHOD(0x020A9E80, void, Add, (TrackingStringDictionary * __this, String * key, String * value));
IL2CPP_REGISTER_METHODINFO(0x047704F8, TrackingStringDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A9F60, void, Clear, (TrackingStringDictionary * __this));
IL2CPP_REGISTER_METHODINFO(0x04737BD0, TrackingStringDictionary_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AA050, void, Remove, (TrackingStringDictionary * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x0474AD28, TrackingStringDictionary_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AA130, String *, get_Item, (TrackingStringDictionary * __this, String * key));
IL2CPP_REGISTER_METHOD(0x020AA140, void, set_Item, (TrackingStringDictionary * __this, String * key, String * value));
IL2CPP_REGISTER_METHODINFO(0x047100D8, TrackingStringDictionary_set_Item__MethodInfo);
}
