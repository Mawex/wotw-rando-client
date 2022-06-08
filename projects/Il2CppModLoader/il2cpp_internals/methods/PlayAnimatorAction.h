#include <interception_macros.h>

namespace app::methods::PlayAnimatorAction {
IL2CPP_REGISTER_METHOD(0x01175E40, LegacyAnimator__Array *, get_Animators, (PlayAnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x01175F60, void, Update, (PlayAnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x01175FE0, void, Perform, (PlayAnimatorAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011760C0, void, Stop, (PlayAnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsPerforming, (PlayAnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x011761E0, IEnumerator *, PerformActionCoroutine, (PlayAnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x01050D20, float, get_Duration, (PlayAnimatorAction * __this));
IL2CPP_REGISTER_METHOD(0x01176330, void, set_Duration, (PlayAnimatorAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x01176340, void, __ctor, (PlayAnimatorAction * __this));
}
