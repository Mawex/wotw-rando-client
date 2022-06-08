#include <interception_macros.h>

namespace app::methods::LockPlayerInputAction {
IL2CPP_REGISTER_METHOD(0x00FC2E10, void, Perform, (LockPlayerInputAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC2EA0, void, Stop, (LockPlayerInputAction * __this));
IL2CPP_REGISTER_METHOD(0x00FC2FB0, bool, get_IsPerforming, (LockPlayerInputAction * __this));
IL2CPP_REGISTER_METHOD(0x00FC3080, IEnumerator *, PerformActionCoroutine, (LockPlayerInputAction * __this));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, (LockPlayerInputAction * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, (LockPlayerInputAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (LockPlayerInputAction * __this));
}
