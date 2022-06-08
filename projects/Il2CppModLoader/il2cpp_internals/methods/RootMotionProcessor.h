using namespace app;

namespace app::methods::RootMotionProcessor {
IL2CPP_REGISTER_METHOD(0x013673F0, void, Start, (RootMotionProcessor * __this, RootMotionProcessorData * rootMotionConfigData, MoonAnimator * animator, CharacterPlatformMovement * platformMovement, float gravity, Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ * motionModifier));
IL2CPP_REGISTER_METHOD(0x013676A0, void, End, (RootMotionProcessor * __this));
IL2CPP_REGISTER_METHOD(0x01367890, void, OnProcessRootMotion, (RootMotionProcessor * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x0474AC18, RootMotionProcessor_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RootMotionProcessor * __this));
}
