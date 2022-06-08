using namespace app;

namespace app::methods::Moon::HitStopManager {
IL2CPP_REGISTER_METHOD(0x010FA1D0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x010FA550, void, OnPreRestore, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04700AF8, HitStopManager_OnPreRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010FA680, void, FixedUpdate, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04772080, HitStopManager_FixedUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010FA7B0, void, RegisterHitStop, (HitStop * hitStop));
IL2CPP_REGISTER_METHOD(0x010FA870, void, UnregisterHitStop, (HitStop * hitStop));
}
