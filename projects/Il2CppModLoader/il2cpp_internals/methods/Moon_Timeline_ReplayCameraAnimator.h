#include <interception_macros.h>

namespace app::methods::Moon_Timeline::ReplayCameraAnimator {
IL2CPP_REGISTER_METHOD(0x0077FA40, bool, get_IsControllingCamera, ());
IL2CPP_REGISTER_METHOD(0x0077FAC0, void, set_IsControllingCamera, (bool value));
IL2CPP_REGISTER_METHOD(0x0077FB50, Vector3, get_CurrentCameraTargetPosition, ());
IL2CPP_REGISTER_METHOD(0x0077FBF0, void, set_CurrentCameraTargetPosition, (app::Vector3 value));
IL2CPP_REGISTER_METHOD(0x0077FC80, Vector3, get_CurrentCameraTargetVelocity, ());
IL2CPP_REGISTER_METHOD(0x0077FD20, void, set_CurrentCameraTargetVelocity, (app::Vector3 value));
IL2CPP_REGISTER_METHOD(0x0076C7B0, bool, GetCurrentValueAssociatedWithCurve, (app::ReplayCameraAnimator * this_ptr, app::String * curve, app::float * value));
IL2CPP_REGISTER_METHOD(0x0077FDB0, Vector3, GetValueAt, (app::ReplayCameraAnimator * this_ptr, app::AnimationCurve3D * curve, float value));
IL2CPP_REGISTER_METHOD(0x00780150, Vector3, GetVelocityAtValue, (app::ReplayCameraAnimator * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00780190, Vector3, GetPuppetPositionAtValue, (app::ReplayCameraAnimator * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x007801D0, Vector3, GetBasePositionAtValue, (app::ReplayCameraAnimator * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00780210, void, DebugDrawCurve, (app::ReplayCameraAnimator * this_ptr, app::AnimationCurve3D * curve, app::Color color));
IL2CPP_REGISTER_METHOD(0x00780570, void, OnDrawGizmosSelected, (app::ReplayCameraAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x007805D0, void, __ctor, (app::ReplayCameraAnimator * this_ptr));
}
