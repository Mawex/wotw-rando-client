using namespace app;

namespace app::methods::SeinPlayAnimationController {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SeinPlayAnimationController * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x005C7E90, void, OnAnimationEndEvent, (SeinPlayAnimationController * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A7A8, SeinPlayAnimationController_OnAnimationEndEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005C7EE0, void, PlayAnimation, (SeinPlayAnimationController * __this, TextureAnimationWithTransitions * animation));
IL2CPP_REGISTER_METHOD(0x005C8350, void, PlayAnimation, (SeinPlayAnimationController * __this, MoonAnimation * animation));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, ShouldAnimationKeepPlaying, (SeinPlayAnimationController * __this));
IL2CPP_REGISTER_METHODINFO(0x0474F860, SeinPlayAnimationController_ShouldAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005C8740, void, StopAnimation, (SeinPlayAnimationController * __this));
IL2CPP_REGISTER_METHOD(0x005C8750, void, UpdateState, (SeinPlayAnimationController * __this));
}
