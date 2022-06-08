#include <interception_macros.h>

namespace app::methods::Moon::WandererPatrolBehaviour {
IL2CPP_REGISTER_METHOD(0x011A3AB0, void, OnEntityInitialized, (WandererPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011A3C20, BehaviourStatus__Enum, OnExecute, (WandererPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (WandererPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (WandererPatrolBehaviour * __this));
}
