using namespace app;

namespace app::methods::TriggerColliderCallback_OnTrigger_Callback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (TriggerColliderCallback_OnTrigger_Callback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (TriggerColliderCallback_OnTrigger_Callback * __this, Collider * c));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (TriggerColliderCallback_OnTrigger_Callback * __this, Collider * c, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (TriggerColliderCallback_OnTrigger_Callback * __this, IAsyncResult * result));
}
