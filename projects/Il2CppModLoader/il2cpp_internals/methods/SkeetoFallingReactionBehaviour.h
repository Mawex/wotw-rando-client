#include <interception_macros.h>

namespace app::methods::SkeetoFallingReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00756A30, SkeetoDeathReaction *, get_DeathReaction, (SkeetoFallingReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00756A40, void, set_DeathReaction, (SkeetoFallingReactionBehaviour * __this, SkeetoDeathReaction * value));
IL2CPP_REGISTER_METHOD(0x00756A50, void, OnInitializeTask, (SkeetoFallingReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00756B90, void, OnEnterFalling, (SkeetoFallingReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00756BD0, void, LandUpdate, (SkeetoFallingReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00756D90, void, OnEndLand, (SkeetoFallingReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00756F90, void, __ctor, (SkeetoFallingReactionBehaviour * __this));
}
