#include <interception_macros.h>

namespace app::methods::System::Net::Authorization {
IL2CPP_REGISTER_METHOD(0x02010AA0, void, __ctor, (Authorization * __this, String * token));
IL2CPP_REGISTER_METHOD(0x02010B60, void, __ctor, (Authorization * __this, String * token, bool finished));
IL2CPP_REGISTER_METHOD(0x02010C30, void, __ctor, (Authorization * __this, String * token, bool finished, String * connectionGroupId));
IL2CPP_REGISTER_METHOD(0x02010D20, void, __ctor, (Authorization * __this, String * token, bool finished, String * connectionGroupId, bool mutualAuth));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Message, (Authorization * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_ConnectionGroupId, (Authorization * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Complete, (Authorization * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, SetComplete, (Authorization * __this, bool complete));
IL2CPP_REGISTER_METHOD(0x002FB950, String__Array *, get_ProtectionRealm, (Authorization * __this));
IL2CPP_REGISTER_METHOD(0x02010E10, void, set_ProtectionRealm, (Authorization * __this, String__Array * value));
IL2CPP_REGISTER_METHOD(0x02010EE0, bool, get_MutuallyAuthenticated, (Authorization * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_MutuallyAuthenticated, (Authorization * __this, bool value));
}
