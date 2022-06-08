using namespace app;

namespace app::methods::Moon::TentacleAnimationPostprocess {
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (TentacleAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, (TentacleAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010ABA70, void, OnAddedToAnimator, (TentacleAnimationPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x010ABA80, void, SaveAnimatedData, (TentacleAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010ABFA0, void, Process, (TentacleAnimationPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010AC8E0, Quaternion, HeadAnimatedRotation, (TentacleAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010ACB70, Vector3, HeadAnimatedDirection, (TentacleAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (TentacleAnimationPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010ACBF0, void, __cctor, (MethodInfo * method));
}
