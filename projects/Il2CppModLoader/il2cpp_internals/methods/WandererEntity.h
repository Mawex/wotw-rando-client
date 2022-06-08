#include <interception_macros.h>

namespace app::methods::WandererEntity {
IL2CPP_REGISTER_METHOD(0x008C6F10, WandererEntity *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x008C6F90, void, set_Instance, (WandererEntity * value));
IL2CPP_REGISTER_METHOD(0x008C7020, void, Awake, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7040, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x008C7050, void, Start, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7160, WandererEntity_WandererAnimationState__Enum, get_CurrentAnimState, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7170, MoonAnimation *, get_IdleBreakupAnimation, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7200, MoonAnimation *, get_PresentInAnimation, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7270, MoonAnimation *, get_PresentIdleAnimation, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C72E0, MoonAnimation *, get_PresentOutAnimation, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7350, MoonAnimation *, get_IdleAnimation, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C73C0, WandererNPC *, get_WandererNPC, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7480, WandererNPC_State__Enum, get_CurrentState, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7580, String *, get_DialogActorName, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7600, String *, get_InteractionActorName, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7680, bool, get_CanEffectivelyStartInteraction, (WandererEntity * __this));
IL2CPP_REGISTER_METHOD(0x008C7750, bool, CanInteractWithCharacter, (WandererEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x008C79B0, void, __ctor, (WandererEntity * __this));
}
