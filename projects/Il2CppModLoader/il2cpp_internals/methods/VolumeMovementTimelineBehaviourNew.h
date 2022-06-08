using namespace app;

namespace app::methods::VolumeMovementTimelineBehaviourNew {
IL2CPP_REGISTER_METHOD(0x00877D80, void, OnEntityInitialized, (VolumeMovementTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x008C4180, void, OnEnter, (VolumeMovementTimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C4330, BehaviourStatus__Enum, OnExecute, (VolumeMovementTimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C4410, void, OnExit, (VolumeMovementTimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C4520, Vector3, RootMotionModifier, (VolumeMovementTimelineBehaviourNew * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x04789070, VolumeMovementTimelineBehaviourNew_RootMotionModifier__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420FE0, void, __ctor, (VolumeMovementTimelineBehaviourNew * __this));
}
