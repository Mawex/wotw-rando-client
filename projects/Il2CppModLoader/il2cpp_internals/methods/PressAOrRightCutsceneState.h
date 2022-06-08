#include <interception_macros.h>

namespace app::methods::PressAOrRightCutsceneState {
IL2CPP_REGISTER_METHOD(0x00C6FEC0, CharacterAnimationSystem *, get_Animation, (PressAOrRightCutsceneState * __this));
IL2CPP_REGISTER_METHOD(0x00C6FF90, SeinCutsceneBlocked *, get_CutsceneBlocked, (PressAOrRightCutsceneState * __this));
IL2CPP_REGISTER_METHOD(0x00C70030, void, OnEnter, (PressAOrRightCutsceneState * __this));
IL2CPP_REGISTER_METHOD(0x00C70080, void, OnUpdate, (PressAOrRightCutsceneState * __this));
IL2CPP_REGISTER_METHOD(0x00C70490, void, __ctor, (PressAOrRightCutsceneState * __this));
}
