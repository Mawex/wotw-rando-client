#include <interception_macros.h>

namespace app::methods::InstantiationRecycleHelper {
IL2CPP_REGISTER_METHOD(0x006366B0, void, __ctor, (InstantiationRecycleHelper * __this, int32_t prewarmAmount, bool limitAmountOfActiveInstances));
IL2CPP_REGISTER_METHOD(0x00636820, GameObject *, InstantiateImmediate, (InstantiationRecycleHelper * __this, GameObject * original, Vector3 position, Quaternion rotation, Object_1 * owner, bool record));
IL2CPP_REGISTER_METHOD(0x00636C20, GameObject *, InstantiateImmediateOptional, (InstantiationRecycleHelper * __this, GameObject * original, Vector3 position, Quaternion rotation, Object_1 * owner, bool record, int32_t framesToTestAgainst, int32_t allowedInstanceCount, float distanceThreshold));
}
