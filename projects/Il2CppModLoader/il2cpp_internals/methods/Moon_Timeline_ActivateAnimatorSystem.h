using namespace app;

namespace app::methods::Moon::Timeline::ActivateAnimatorSystem {
IL2CPP_REGISTER_METHOD(0x0311AC10, ActivateAnimatorSystem *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (ActivateAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0311AF40, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0311B0A0, void, OnDestroy, (ActivateAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0311B0B0, void, SubmitDynamicGameObjectState, (ActivateAnimatorSystem * __this, GameObject * go, bool state));
IL2CPP_REGISTER_METHOD(0x0311B2E0, void, SubmitStaticGameObjectState, (ActivateAnimatorSystem * __this, GameObject * go, bool state));
IL2CPP_REGISTER_METHOD(0x0311B520, void, ClearState, (ActivateAnimatorSystem * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x0311B560, void, ClearState, (ActivateAnimatorSystem * __this, int32_t objectId));
IL2CPP_REGISTER_METHOD(0x0311B6F0, void, ClearAllStates, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0311B810, void, BeforeSaving, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0311BA30, void, AfterSaving, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0311BBE0, void, ClearAll, (ActivateAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0311BCC0, void, OnUpdate, (ActivateAnimatorSystem * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0311C0C0, bool, GetBaselineValueFor, (ActivateAnimatorSystem * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x0311C1F0, void, __ctor, (ActivateAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0311C4F0, void, __cctor, (MethodInfo * method));
}
