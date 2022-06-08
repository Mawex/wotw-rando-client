using namespace app;

namespace app::methods::Moon::SimpleSwayAnimPostprocess {
IL2CPP_REGISTER_METHOD(0x0211F5E0, bool, get_UseSimpleSway, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0211F680, void, set_UseSimpleSway, (bool value));
IL2CPP_REGISTER_METHOD(0x0211F730, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0211F7C0, void, SetSimpleSway, (bool setSimple));
IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_Order, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresOnUpdate, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate, (SimpleSwayAnimPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0211F930, void, Awake, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0211F940, void, OnDestroy, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0211F9E0, void, OnAddedToAnimator, (SimpleSwayAnimPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0118CF80, void, OnRemovedFromAnimator, (SimpleSwayAnimPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0211FB00, void, OnActivated, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0211FB10, void, Process, (SimpleSwayAnimPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0211FC30, void, OnPostEnable, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0211FD70, void, SwitchWeights, (SimpleSwayAnimPostprocess * __this, bool useSimpleSway));
IL2CPP_REGISTER_METHOD(0x0211FDC0, void, OnPostDisable, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0211FEC0, void, AllocateSway, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02120220, void, InitSway, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x0211F940, void, DisposeSway, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02120340, void, GetJointTransforms, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02120550, void, ScheduleJobs, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02120650, void, CompleteJobs, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02120710, void, UpdateSway, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (SimpleSwayAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02120940, void, __cctor, (MethodInfo * method));
}
