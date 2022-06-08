#include <interception_macros.h>

namespace app::methods::SnapTrapHookLogic {
IL2CPP_REGISTER_METHOD(0x007008C0, IMoonSetupAnimator *, get_MoonSetupAnimator, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x00ED25D0, void, set_MoonSetupAnimator, (SnapTrapHookLogic * __this, IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x00ED26A0, void, Awake, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x00ED2CF0, void, OnEnable, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x00E21060, void, InitSnapTrapHook, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x00ED2E10, void, AssignReferences, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x00ED30F0, void, FixedUpdate, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x00ED33C0, void, DisableLeash, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E0F0, SnapTrapHookLogic_DisableLeash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ED3430, void, EnableLeash, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A4A8, SnapTrapHookLogic_EnableLeash__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Suspend, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (SnapTrapHookLogic * __this));
IL2CPP_REGISTER_METHOD(0x00ED34A0, void, __ctor, (SnapTrapHookLogic * __this));
}
