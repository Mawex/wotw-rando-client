using namespace app;

namespace app::methods::UnityEngine::Events::InvokableCallList {
IL2CPP_REGISTER_METHOD(0x0242EF00, void, __ctor, (InvokableCallList * __this));
IL2CPP_REGISTER_METHOD(0x0242F1F0, void, AddPersistentInvokableCall, (InvokableCallList * __this, BaseInvokableCall * call));
IL2CPP_REGISTER_METHOD(0x0242F2A0, void, AddListener, (InvokableCallList * __this, BaseInvokableCall * call));
IL2CPP_REGISTER_METHOD(0x0242F350, void, RemoveListener, (InvokableCallList * __this, Object * targetObj, MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x0242F6D0, void, ClearPersistent, (InvokableCallList * __this));
IL2CPP_REGISTER_METHOD(0x0242F780, List_1_UnityEngine_Events_BaseInvokableCall_ *, PrepareInvoke, (InvokableCallList * __this));
}
