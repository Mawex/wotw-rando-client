using namespace app;

namespace app::methods::Moon::Animation::DelayJointPostprocessJob {
IL2CPP_REGISTER_METHOD(0x001B4CD0, void, ProcessAnimation, (DelayJointPostprocessJob__Boxed * __this, AnimationStream stream));
IL2CPP_REGISTER_METHOD(0x00002890, void, ProcessRootMotion, (DelayJointPostprocessJob__Boxed * __this, AnimationStream stream));
IL2CPP_REGISTER_METHOD(0x001B4D10, Quaternion, SmoothDamp, (DelayJointPostprocessJob__Boxed * __this, Quaternion rot, Quaternion target, Quaternion * derivative, float time, float deltaTime));
}
