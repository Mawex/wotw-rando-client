#include <interception_macros.h>

namespace app::methods::System::Net::PathList {
IL2CPP_REGISTER_METHOD(0x01BCB300, void, __ctor, (PathList * __this));
IL2CPP_REGISTER_METHOD(0x01BCB4B0, int32_t, get_Count, (PathList * __this));
IL2CPP_REGISTER_METHOD(0x01BCB4E0, int32_t, GetCookiesCount, (PathList * __this));
IL2CPP_REGISTER_METHOD(0x01BCB830, ICollection *, get_Values, (PathList * __this));
IL2CPP_REGISTER_METHOD(0x01BCB860, Object *, get_Item, (PathList * __this, String * s));
IL2CPP_REGISTER_METHOD(0x01BCB890, void, set_Item, (PathList * __this, String * s, Object * value));
IL2CPP_REGISTER_METHOD(0x01717520, IEnumerator *, GetEnumerator, (PathList * __this));
IL2CPP_REGISTER_METHOD(0x017173F0, Object *, get_SyncRoot, (PathList * __this));
}
