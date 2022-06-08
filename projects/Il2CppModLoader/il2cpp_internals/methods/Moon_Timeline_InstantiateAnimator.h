using namespace app;

namespace app::methods::Moon::Timeline::InstantiateAnimator {
IL2CPP_REGISTER_METHOD(0x0076FFC0, Transform *, get_EffectiveLocation, (InstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DynamicPrefabProviderEmpty, (InstantiateAnimator * __this, List_1_DynamicInstantiationDescriptor_ * descriptors));
IL2CPP_REGISTER_METHOD(0x00770090, void, DynamicPrefabProvider, (InstantiateAnimator * __this, List_1_DynamicInstantiationDescriptor_ * descriptors));
IL2CPP_REGISTER_METHOD(0x007705D0, void, OnStartPlayback, (InstantiateAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007705E0, GameObject *, InstantiatePrefab, (InstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00770A10, void, MakeInstanceFollowTarget, (InstantiateAnimator * __this, GameObject * instance, Transform * target));
IL2CPP_REGISTER_METHOD(0x00770B50, void, ClearFollowTarget, (InstantiateAnimator * __this, GameObject * instance));
IL2CPP_REGISTER_METHOD(0x00770C30, void, ComputePositionAndRotation, (InstantiateAnimator * __this, Vector3 * pos, Quaternion * rot));
IL2CPP_REGISTER_METHOD(0x00771330, void, AdjustPositionAndRotation, (InstantiateAnimator * __this, GameObject * instance));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (InstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00771500, float, GetDuration, (InstantiateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007717D0, void, __ctor, (InstantiateAnimator * __this));
}
