#include <interception_macros.h>

namespace app::methods::AttackTokens {
IL2CPP_REGISTER_METHOD(0x00852AE0, bool, TryClaimToken, (AttackTokens_Request request));
IL2CPP_REGISTER_METHOD(0x008535E0, bool, HasToken, (IAttackTokenHolder * holder));
IL2CPP_REGISTER_METHOD(0x00853720, void, ReleaseToken, (IAttackTokenHolder * holder));
IL2CPP_REGISTER_METHOD(0x00853A00, int32_t, TokensAvaible, (AttackTokenPriority__Enum priority));
IL2CPP_REGISTER_METHOD(0x00853C30, void, ClaimAttackToken, (AttackTokens_Request request));
IL2CPP_REGISTER_METHOD(0x00853DE0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00854030, void, InitializeStatics, ());
IL2CPP_REGISTER_METHOD(0x008540F0, void, __cctor, ());
}
