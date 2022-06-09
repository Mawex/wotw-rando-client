#include <interception_macros.h>

namespace app::methods::StaticEntityLookBehaviour {
IL2CPP_REGISTER_METHOD(0x009B6EB0, StaticEntityLocomotion *, get_Locomotion, (app::StaticEntityLookBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x009B6FE0, void, OnEnter, (app::StaticEntityLookBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x009B70C0, BehaviourStatus__Enum, OnExecute, (app::StaticEntityLookBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::StaticEntityLookBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::StaticEntityLookBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (app::StaticEntityLookBehaviour * this_ptr));
}
