#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::SessionMask {
IL2CPP_REGISTER_METHOD(0x00154CB0, void, __ctor, (SessionMask__Boxed * __this, uint32_t mask));
IL2CPP_REGISTER_METHOD(0x00154CC0, bool, IsEqualOrSupersetOf, (SessionMask__Boxed * __this, SessionMask m));
IL2CPP_REGISTER_METHOD(0x00D51450, SessionMask, get_All, ());
IL2CPP_REGISTER_METHOD(0x01A076D0, SessionMask, FromId, (int32_t perEventSourceSessionId));
IL2CPP_REGISTER_METHOD(0x00154CD0, uint64_t, ToEventKeywords, (SessionMask__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01A076E0, SessionMask, FromEventKeywords, (uint64_t m));
IL2CPP_REGISTER_METHOD(0x00154CE0, bool, get_Item, (SessionMask__Boxed * __this, int32_t perEventSourceSessionId));
IL2CPP_REGISTER_METHOD(0x00154D00, void, set_Item, (SessionMask__Boxed * __this, int32_t perEventSourceSessionId, bool value));
IL2CPP_REGISTER_METHOD(0x006CE970, uint64_t, operator_, (SessionMask m));
IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, operator_, (SessionMask m));
}
