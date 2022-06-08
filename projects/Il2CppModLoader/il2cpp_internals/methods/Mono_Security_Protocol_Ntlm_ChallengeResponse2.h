#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Ntlm::ChallengeResponse2 {
IL2CPP_REGISTER_METHOD(0x02A497B0, Byte__Array *, Compute_LM, (String * password, Byte__Array * challenge));
IL2CPP_REGISTER_METHOD(0x02A49AD0, Byte__Array *, Compute_NTLM_Password, (String * password));
IL2CPP_REGISTER_METHOD(0x02A49C30, Byte__Array *, Compute_NTLM, (String * password, Byte__Array * challenge));
IL2CPP_REGISTER_METHOD(0x02A49CF0, void, Compute_NTLMv2_Session, (String * password, Byte__Array * challenge, Byte__Array * * lm, Byte__Array * * ntlm));
IL2CPP_REGISTER_METHOD(0x02A49F30, Byte__Array *, Compute_NTLMv2, (Type2Message * type2, String * username, String * password, String * domain));
IL2CPP_REGISTER_METHOD(0x02A4A5B0, void, Compute, (Type2Message * type2, NtlmAuthLevel__Enum level, String * username, String * password, String * domain, Byte__Array * * lm, Byte__Array * * ntlm));
IL2CPP_REGISTER_METHODINFO(0x04787428, ChallengeResponse2_Compute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A4A840, Byte__Array *, GetResponse, (Byte__Array * challenge, Byte__Array * pwd));
IL2CPP_REGISTER_METHOD(0x02A4AAA0, Byte__Array *, PrepareDESKey, (Byte__Array * key56bits, int32_t position));
IL2CPP_REGISTER_METHOD(0x02A4AE80, Byte__Array *, PasswordToKey, (String * password, int32_t position));
IL2CPP_REGISTER_METHOD(0x02A4B050, void, __cctor, ());
}
