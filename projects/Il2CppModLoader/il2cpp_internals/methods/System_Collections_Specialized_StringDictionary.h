using namespace app;

namespace app::methods::System::Collections::Specialized::StringDictionary {
IL2CPP_REGISTER_METHOD(0x0249E610, void, __ctor, (StringDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249E770, String *, get_Item, (StringDictionary * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x04780090, StringDictionary_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249E8B0, void, set_Item, (StringDictionary * __this, String * key, String * value));
IL2CPP_REGISTER_METHODINFO(0x0476B940, StringDictionary_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249E9D0, void, Add, (StringDictionary * __this, String * key, String * value));
IL2CPP_REGISTER_METHODINFO(0x0470FEB8, StringDictionary_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCB4B0, void, Clear, (StringDictionary * __this));
IL2CPP_REGISTER_METHOD(0x01717450, IEnumerator *, GetEnumerator, (StringDictionary * __this));
IL2CPP_REGISTER_METHOD(0x0249EAF0, void, Remove, (StringDictionary * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x0470C520, StringDictionary_Remove__MethodInfo);
}
