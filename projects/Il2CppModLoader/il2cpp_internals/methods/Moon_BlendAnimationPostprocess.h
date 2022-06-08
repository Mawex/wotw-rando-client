using namespace app;

namespace app::methods::Moon::BlendAnimationPostprocess {
IL2CPP_REGISTER_METHOD(0x01B0B210, Transform *, DuplicateHierarchy, (Transform * transform, Transform * maskTransform, Transform * parent));
IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, get_Order, (BlendAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B0B9C0, bool, get_HasFinished, (BlendAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B0BA10, void, OnAddedToAnimator, (BlendAnimationPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x01B0BD90, void, OnRemovedFromAnimator, (BlendAnimationPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x01B0BE60, void, Process, (BlendAnimationPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01B0BFF0, void, ProcessRecursive, (BlendAnimationPostprocess * __this, Transform * targetTransform, Transform * sourceTransform));
IL2CPP_REGISTER_METHOD(0x01B0C8F0, void, __ctor, (BlendAnimationPostprocess * __this));
}
