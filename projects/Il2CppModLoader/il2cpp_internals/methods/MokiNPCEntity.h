#include <interception_macros.h>

namespace app::methods::MokiNPCEntity {
IL2CPP_REGISTER_METHOD(0x01331490, String *, get_DialogActorName, (MokiNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x01331510, String *, get_InteractionActorName, (MokiNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x01331590, MoonAnimation *, get_IdleAnimation, (MokiNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x013316E0, void, set_IdleAnimation, (MokiNPCEntity * __this, MoonAnimation * value));
IL2CPP_REGISTER_METHOD(0x013316F0, bool, get_CanEffectivelyStartInteraction, (MokiNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (MokiNPCEntity * __this));
}
