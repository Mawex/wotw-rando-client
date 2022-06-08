#include <interception_macros.h>

namespace app::methods::Moon::AnimationPostprocess {
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresOnUpdate, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B042D0, bool, get_IsActive, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B04300, GameObject *, get_AnimatedObject, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate, (AnimationPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01B04320, float, get_TotalWeight, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B04540, bool, get_IsPlaying, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasFinished, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B045E0, void, OnEnable, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostEnable, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B047B0, void, OnDisable, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostDisable, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, OnAddedToAnimator, (AnimationPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0118CF80, void, OnRemovedFromAnimator, (AnimationPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnActivated, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeactivated, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneGui, (AnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (AnimationPostprocess * __this));
}
