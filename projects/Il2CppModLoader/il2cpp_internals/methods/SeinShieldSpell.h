#include <interception_macros.h>

namespace app::methods::SeinShieldSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005DA1D0, void, OnSetReferenceToSein, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005DA200, void, OnDestroy, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsStatePerforming, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, KeepPlayingAimAnimation, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x047920F8, SeinShieldSpell_KeepPlayingAimAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005DA250, void, BeginCasting, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005DA500, void, EndCasting, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005DA570, void, UpdateCharacterState, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005DA620, void, UpdateNotCasting, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005DA6C0, void, UpdateCasting, (SeinShieldSpell * __this));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinShieldSpell * __this));
}
