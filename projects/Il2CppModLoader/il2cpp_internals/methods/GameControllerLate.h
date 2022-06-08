#include <interception_macros.h>

namespace app::methods::GameControllerLate {
IL2CPP_REGISTER_METHOD(0x0069C710, IEnumerator *, Start, (GameControllerLate * __this));
IL2CPP_REGISTER_METHOD(0x0069C860, void, OnDestroy, (GameControllerLate * __this));
IL2CPP_REGISTER_METHOD(0x0069C890, IEnumerator *, OnEndOfFrame, (GameControllerLate * __this));
IL2CPP_REGISTER_METHOD(0x0069C9E0, void, FixedUpdate, (GameControllerLate * __this));
IL2CPP_REGISTER_METHOD(0x0069CB10, void, InjectToPlayerLoopLate, (PlayerLoopSystem * loop));
IL2CPP_REGISTER_METHOD(0x0069CD40, void, UpdateAfterParticlesUpdateCallback, ());
IL2CPP_REGISTER_METHODINFO(0x04797C18, GameControllerLate_UpdateAfterParticlesUpdateCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0069CEC0, void, __ctor, (GameControllerLate * __this));
IL2CPP_REGISTER_METHOD(0x0069D0D0, void, __cctor, ());
}
