#include <interception_macros.h>

namespace app::methods::UnityEngine::CullingGroup {
IL2CPP_REGISTER_METHOD(0x0242B7C0, void, Finalize, (CullingGroup * __this));
IL2CPP_REGISTER_METHOD(0x0242B8E0, void, DisposeInternal, (CullingGroup * __this));
IL2CPP_REGISTER_METHOD(0x0242B930, void, Dispose, (CullingGroup * __this));
IL2CPP_REGISTER_METHOD(0x0242B9F0, void, SendEvents, (CullingGroup * cullingGroup, void * eventsPtr, int32_t count));
IL2CPP_REGISTER_METHOD(0x0242BA60, void, FinalizerFailure, (CullingGroup * __this));
}
