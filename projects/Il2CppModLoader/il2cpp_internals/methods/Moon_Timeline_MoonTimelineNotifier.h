using namespace app;

namespace app::methods::Moon::Timeline::MoonTimelineNotifier {
IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyTimelineEvent, (ITimelineEntity * timeline, IContext * context, MoonTimelineNotifier_Action__Enum action));
IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyBranching, (BrainEntity * brain, int32_t branch));
IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyScalableAnimationTime, (ScalableAnimationPlayer * animationPlayer, float normalizedTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonTimelineNotifier * __this));
IL2CPP_REGISTER_METHOD(0x01E77DC0, void, __cctor, (MethodInfo * method));
}
