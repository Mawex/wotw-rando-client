using namespace app;

namespace app::methods::Moon::ClipAnimation_RootMotionData {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsDirty, (ClipAnimation_RootMotionData * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsDirty, (ClipAnimation_RootMotionData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01B0D2A0, Vector3, SampleRootMotionData, (ClipAnimation_RootMotionData * __this, float time));
IL2CPP_REGISTER_METHOD(0x01B0D3F0, Quaternion, SampleRootMotionRotationData, (ClipAnimation_RootMotionData * __this, float time));
IL2CPP_REGISTER_METHOD(0x01B0D560, bool, CurvesEquals, (ClipAnimation_RootMotionData * __this, AnimationCurve * curveA, AnimationCurve * curveB));
IL2CPP_REGISTER_METHOD(0x01B0D730, bool, KeyEqualsNonAlloc, (ClipAnimation_RootMotionData * __this, Keyframe keyA, Keyframe keyB));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ClipAnimation_RootMotionData * __this));
}
