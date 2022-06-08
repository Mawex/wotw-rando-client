#include <interception_macros.h>

namespace app::methods::UberPoolGroupWarmer {
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Progress, (UberPoolGroupWarmer * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Progress, (UberPoolGroupWarmer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00FD4FC0, bool, get_IsDone, (UberPoolGroupWarmer * __this));
IL2CPP_REGISTER_METHOD(0x00FD4FF0, void, PrewarmAll, (UberPoolGroupWarmer * __this));
IL2CPP_REGISTER_METHOD(0x00FD5160, void, ResetPrewarm, (UberPoolGroupWarmer * __this));
IL2CPP_REGISTER_METHOD(0x00FD52D0, void, PrewarmNextPrefab, (UberPoolGroupWarmer * __this));
IL2CPP_REGISTER_METHOD(0x00FD5740, void, DoUpdate, (UberPoolGroupWarmer * __this, float timeBudget));
IL2CPP_REGISTER_METHOD(0x00FD5970, void, Awake, (UberPoolGroupWarmer * __this));
IL2CPP_REGISTER_METHOD(0x00FD5B00, void, __ctor, (UberPoolGroupWarmer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
