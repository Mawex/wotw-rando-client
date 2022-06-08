using namespace app;

namespace app::methods::Moon::Animation::NativeVerletAnimationPostprocess {
IL2CPP_REGISTER_METHOD(0x01B026D0, bool, get_IsAllowed, (NativeVerletAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B02770, bool, get_IsActive, (NativeVerletAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00ABE2D0, AnimationVerletPlayable, get_Playable, (NativeVerletAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B02810, Playable, ConstructPlayable, (NativeVerletAnimationPostprocess * __this, PlayableGraph playableGraph));
IL2CPP_REGISTER_METHOD(0x019FBAE0, void, AddToAnimator, (NativeVerletAnimationPostprocess * __this, MoonAnimator * animator, float blendInDuration));
IL2CPP_REGISTER_METHOD(0x01B02BE0, void, RemoveFromAnimator, (NativeVerletAnimationPostprocess * __this, float blendOutDuration));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, OnAddedToAnimator, (NativeVerletAnimationPostprocess * __this, MoonAnimator * animator, Playable playable));
IL2CPP_REGISTER_METHOD(0x00405E70, void, OnRemovedFromAnimator, (NativeVerletAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B02C10, void, UpdateAnimatorPostprocessData, (NativeVerletAnimationPostprocess * __this, Playable playable, AnimatorPostprocessUpdateData updateData));
IL2CPP_REGISTER_METHOD(0x01B03160, void, __ctor, (NativeVerletAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B031F0, void, __cctor, (MethodInfo * method));
}
