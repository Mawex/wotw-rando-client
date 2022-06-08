#include <interception_macros.h>

namespace app::methods::Moon::loading::LoadingClassInitialization {
IL2CPP_REGISTER_METHOD(0x00F2CE80, void, __ctor, (LoadingClassInitialization * __this, bool prewarmAllTypes, bool shouldGc));
IL2CPP_REGISTER_METHOD(0x00F2D0E0, void, InitThread, (LoadingClassInitialization * __this));
IL2CPP_REGISTER_METHODINFO(0x0471AAB8, LoadingClassInitialization_InitThread__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F2D840, bool, TryGetProgress, (int32_t * progress));
IL2CPP_REGISTER_METHOD(0x00F2D8F0, void, Run, (bool prewarmAllTypes, bool shouldGc));
}
