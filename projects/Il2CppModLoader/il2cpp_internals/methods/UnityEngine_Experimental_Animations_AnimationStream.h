using namespace app;

namespace app::methods::UnityEngine::Experimental::Animations::AnimationStream {
IL2CPP_REGISTER_METHOD(0x001EBC90, uint32_t, get_animatorBindingsVersion, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242880, bool, get_isValid, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242890, void, CheckIsValid, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04704A78, AnimationStream_CheckIsValid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002428A0, float, get_deltaTime, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242900, Vector3, get_velocity, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242990, Vector3, get_angularVelocity, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242A20, Vector3, get_rootMotionPosition, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242AB0, Quaternion, get_rootMotionRotation, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242B40, bool, get_isHumanStream, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242BA0, AnimationHumanStream, AsHuman, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E1C0, AnimationStream_AsHuman__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00242CA0, int32_t, get_inputStreamCount, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242D00, void, ReadSceneTransforms, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242D60, void, WriteSceneTransforms, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242DC0, float, GetDeltaTime, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242E20, bool, GetIsHumanStream, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242E80, Vector3, GetVelocity, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242F10, Vector3, GetAngularVelocity, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00242FA0, Vector3, GetRootMotionPosition, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243030, Quaternion, GetRootMotionRotation, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002430B0, int32_t, GetInputStreamCount, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243110, AnimationHumanStream, GetHumanStream, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243120, void, InternalReadSceneTransforms, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243180, void, InternalWriteSceneTransforms, (AnimationStream__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x03086AC0, float, GetDeltaTime_Injected, (AnimationStream * _unity_self));
IL2CPP_REGISTER_METHOD(0x03086B10, bool, GetIsHumanStream_Injected, (AnimationStream * _unity_self));
IL2CPP_REGISTER_METHOD(0x03086B60, void, GetVelocity_Injected, (AnimationStream * _unity_self, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x03086BC0, void, GetAngularVelocity_Injected, (AnimationStream * _unity_self, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x03086C20, void, GetRootMotionPosition_Injected, (AnimationStream * _unity_self, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x03086C80, void, GetRootMotionRotation_Injected, (AnimationStream * _unity_self, Quaternion * ret));
IL2CPP_REGISTER_METHOD(0x03086CE0, int32_t, GetInputStreamCount_Injected, (AnimationStream * _unity_self));
IL2CPP_REGISTER_METHOD(0x03086D30, void, GetHumanStream_Injected, (AnimationStream * _unity_self, AnimationHumanStream * ret));
IL2CPP_REGISTER_METHOD(0x03086D90, void, InternalReadSceneTransforms_Injected, (AnimationStream * _unity_self));
IL2CPP_REGISTER_METHOD(0x03086DE0, void, InternalWriteSceneTransforms_Injected, (AnimationStream * _unity_self));
}
