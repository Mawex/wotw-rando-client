using namespace app;

namespace app::methods::Moon::Timeline::ActivateAnimator {
IL2CPP_REGISTER_METHOD(0x01BAF670, GameObject *, get_ExternalTarget, (ActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BAF700, void, OnStartPlayback, (ActivateAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (ActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BAF7B0, void, OnUpdateEntity, (ActivateAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MoonReference_1_UnityEngine_GameObject_ *, GetGameObjectTarget, (ActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BAF910, bool, get_ShouldUpdateWhileDisabled, (ActivateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01BAFA10, void, SynchronizePad, (ActivateAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x01BAFAF0, void, GetManagedEarlyZDynamicGraphicTargets, (ActivateAnimator * __this, List_1_UnityEngine_GameObject_ * targets));
IL2CPP_REGISTER_METHOD(0x01BAFBF0, void, __ctor, (ActivateAnimator * __this));
}
