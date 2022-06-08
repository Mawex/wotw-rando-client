#include <interception_macros.h>

namespace app::methods::LizardScreamBehaviour {
IL2CPP_REGISTER_METHOD(0x00FB2330, void, OnEnter, (LizardScreamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009555D0, void, OnExit, (LizardScreamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB24C0, void, ScreamFinished, (LizardScreamBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04770D18, LizardScreamBehaviour_ScreamFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FB24D0, BehaviourStatus__Enum, OnExecute, (LizardScreamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F155A0, void, __ctor, (LizardScreamBehaviour * __this));
}
