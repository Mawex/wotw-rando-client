#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::CookieCollection {
    IL2CPP_REGISTER_METHOD(0x01EA0EE0, void, ctor_1, (app::CookieCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA1070, void, ctor_2, (app::CookieCollection * this_ptr, bool is_read_only))
    IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_IsReadOnly, (app::CookieCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA1200, app::Cookie *, get_Item_1, (app::CookieCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04727698, CookieCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EA1320, app::Cookie *, get_Item_2, (app::CookieCollection * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x01EA1600, void, Add_1, (app::CookieCollection * this_ptr, app::Cookie * cookie))
    IL2CPP_REGISTER_METHODINFO(0x0473D760, CookieCollection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EA1720, void, Add_2, (app::CookieCollection * this_ptr, app::CookieCollection * cookies))
    IL2CPP_REGISTER_METHODINFO(0x04708D90, CookieCollection_Add_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E1A180, int32_t, get_Count, (app::CookieCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::CookieCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object *, get_SyncRoot, (app::CookieCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA1950, void, CopyTo_1, (app::CookieCollection * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01EA1950, void, CopyTo_2, (app::CookieCollection * this_ptr, app::Cookie__Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01EA1980, app::DateTime, TimeStamp, (app::CookieCollection * this_ptr, app::CookieCollection_Stamp__Enum how))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsOtherVersionSeen, (app::CookieCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA1AE0, int32_t, InternalAdd, (app::CookieCollection * this_ptr, app::Cookie * cookie, bool is_strict))
    IL2CPP_REGISTER_METHOD(0x01EA1E20, int32_t, IndexOf, (app::CookieCollection * this_ptr, app::Cookie * cookie))
    IL2CPP_REGISTER_METHOD(0x01EA2060, void, RemoveAt, (app::CookieCollection * this_ptr, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x01EA2090, app::IEnumerator *, GetEnumerator, (app::CookieCollection * this_ptr))
}
