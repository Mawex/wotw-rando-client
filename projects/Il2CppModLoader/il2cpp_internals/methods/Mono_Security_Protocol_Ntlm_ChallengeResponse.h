#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Ntlm::ChallengeResponse {
IL2CPP_REGISTER_METHOD(0x02A48350, void, __ctor, (ChallengeResponse * __this));
IL2CPP_REGISTER_METHOD(0x02A483F0, void, __ctor, (ChallengeResponse * __this, String * password, Byte__Array * challenge));
IL2CPP_REGISTER_METHOD(0x02A484C0, void, Finalize, (ChallengeResponse * __this));
IL2CPP_REGISTER_METHOD(0x02A48620, void, set_Password, (ChallengeResponse * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04743990, ChallengeResponse_set_Password__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A48A30, void, set_Challenge, (ChallengeResponse * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x04757750, ChallengeResponse_set_Challenge__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A48BF0, Byte__Array *, get_LM, (ChallengeResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x0472FCC0, ChallengeResponse_get_LM__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A48CB0, Byte__Array *, get_NT, (ChallengeResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x0477FC40, ChallengeResponse_get_NT__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A48D70, void, Dispose, (ChallengeResponse * __this));
IL2CPP_REGISTER_METHOD(0x02A48E70, void, Dispose, (ChallengeResponse * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02A48EE0, Byte__Array *, GetResponse, (ChallengeResponse * __this, Byte__Array * pwd));
IL2CPP_REGISTER_METHOD(0x02A49130, Byte__Array *, PrepareDESKey, (ChallengeResponse * __this, Byte__Array * key56bits, int32_t position));
IL2CPP_REGISTER_METHOD(0x02A49510, Byte__Array *, PasswordToKey, (ChallengeResponse * __this, String * password, int32_t position));
IL2CPP_REGISTER_METHOD(0x02A496D0, void, __cctor, ());
}
