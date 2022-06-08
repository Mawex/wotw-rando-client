#include <interception_macros.h>

namespace app::methods::RetaliateShriek {
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (RetaliateShriek * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (RetaliateShriek * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0090E420, void, Awake, (RetaliateShriek * __this));
IL2CPP_REGISTER_METHOD(0x0090E440, void, FixedUpdate, (RetaliateShriek * __this));
IL2CPP_REGISTER_METHOD(0x0090E680, void, OnTriggerStay, (RetaliateShriek * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x0090EA60, void, OverrideOriginPosition, (RetaliateShriek * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0090EA80, void, StartTimeline, (RetaliateShriek * __this));
IL2CPP_REGISTER_METHOD(0x0090EC50, void, OnTimelineSequenceStopEvent, (RetaliateShriek * __this));
IL2CPP_REGISTER_METHODINFO(0x04754F80, RetaliateShriek_OnTimelineSequenceStopEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (RetaliateShriek * __this));
}
