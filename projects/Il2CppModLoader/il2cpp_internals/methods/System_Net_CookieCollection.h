using namespace app;

namespace app::methods::System::Net::CookieCollection {
IL2CPP_REGISTER_METHOD(0x01EA0EE0, void, __ctor, (CookieCollection * __this));
IL2CPP_REGISTER_METHOD(0x01EA1070, void, __ctor, (CookieCollection * __this, bool IsReadOnly));
IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_IsReadOnly, (CookieCollection * __this));
IL2CPP_REGISTER_METHOD(0x01EA1200, Cookie *, get_Item, (CookieCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04727698, CookieCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA1320, Cookie *, get_Item, (CookieCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01EA1600, void, Add, (CookieCollection * __this, Cookie * cookie));
IL2CPP_REGISTER_METHODINFO(0x0473D760, CookieCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EA1720, void, Add, (CookieCollection * __this, CookieCollection * cookies));
IL2CPP_REGISTER_METHODINFO(0x04708D90, CookieCollection_Add_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1A180, int32_t, get_Count, (CookieCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (CookieCollection * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (CookieCollection * __this));
IL2CPP_REGISTER_METHOD(0x01EA1950, void, CopyTo, (CookieCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x01EA1950, void, CopyTo, (CookieCollection * __this, Cookie__Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x01EA1980, DateTime, TimeStamp, (CookieCollection * __this, CookieCollection_Stamp__Enum how));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsOtherVersionSeen, (CookieCollection * __this));
IL2CPP_REGISTER_METHOD(0x01EA1AE0, int32_t, InternalAdd, (CookieCollection * __this, Cookie * cookie, bool isStrict));
IL2CPP_REGISTER_METHOD(0x01EA1E20, int32_t, IndexOf, (CookieCollection * __this, Cookie * cookie));
IL2CPP_REGISTER_METHOD(0x01EA2060, void, RemoveAt, (CookieCollection * __this, int32_t idx));
IL2CPP_REGISTER_METHOD(0x01EA2090, IEnumerator *, GetEnumerator, (CookieCollection * __this));
}
