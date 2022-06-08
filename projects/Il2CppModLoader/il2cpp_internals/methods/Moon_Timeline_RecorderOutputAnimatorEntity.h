using namespace app;

namespace app::methods::Moon::Timeline::RecorderOutputAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x0077EA90, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0077EB30, bool, get_IsShotToBeRecorded, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateCategory__Enum, get_UpdateCategory, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077EBF0, void, EnterSampling, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitSampling, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Heartbeat, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077ECD0, void, OnStartPlayback, (RecorderOutputAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077F280, void, OnUpdateEntity, (RecorderOutputAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0077F360, void, OnRecordingFinished, (RecorderOutputAnimatorEntity * __this, int32_t capturedFrames));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_ShotName, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077F730, int32_t, get_InstanceId, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x00653F90, bool, get_SpawnEnemies, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077F7B0, void, __ctor, (RecorderOutputAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077F870, void, __cctor, (MethodInfo * method));
}
