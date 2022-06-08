#include <interception_macros.h>

namespace app::methods::WandererInteractionBehaviour {
IL2CPP_REGISTER_METHOD(0x008C8600, void, OnEntityInitialized, (WandererInteractionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008C6BC0, void, OnEnter, (WandererInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C8790, BehaviourStatus__Enum, OnExecute, (WandererInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C6EF0, void, OnExit, (WandererInteractionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C8AA0, void, __ctor, (WandererInteractionBehaviour * __this));
}
