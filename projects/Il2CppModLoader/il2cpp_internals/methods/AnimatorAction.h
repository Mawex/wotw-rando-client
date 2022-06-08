#include <interception_macros.h>

namespace app::methods::AnimatorAction {
IL2CPP_REGISTER_METHOD(0x00503F60, void, Start, (AnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x005041A0, void, OnDestroy, (AnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x005041C0, void, TryInitialize, (AnimatorAction * __this));
IL2CPP_REGISTER_METHODINFO(0x04755EE0, AnimatorAction_TryInitialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00504420, void, Perform, (AnimatorAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005046D0, String *, get_TargetName, (AnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x00504860, String *, GetNiceName, (AnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (AnimatorAction * __this));
}
