#include <interception_macros.h>

namespace app::methods::OptionalInstantiationHandler {
IL2CPP_REGISTER_METHOD(0x006178F0, void, Awake, (OptionalInstantiationHandler * __this));
IL2CPP_REGISTER_METHOD(0x00617980, void, RegisterInstantiation, (OptionalInstantiationHandler * __this, Object_1 * obj, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x00617A60, bool, CanInstantiate, (OptionalInstantiationHandler * __this, Object_1 * obj, Vector3 position, int32_t framesToTestAgainst, int32_t allowedInstanceCount, float distanceThreshold));
IL2CPP_REGISTER_METHOD(0x00617CB0, void, __ctor, (OptionalInstantiationHandler * __this));
}
