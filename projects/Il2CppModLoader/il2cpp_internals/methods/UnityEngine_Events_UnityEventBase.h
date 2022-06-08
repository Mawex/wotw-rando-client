using namespace app;

namespace app::methods::UnityEngine::Events::UnityEventBase {
IL2CPP_REGISTER_METHOD(0x02431080, void, __ctor, (UnityEventBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (UnityEventBase * __this));
IL2CPP_REGISTER_METHOD(0x024313C0, void, ISerializationCallbackReceiver_OnAfterDeserialize, (UnityEventBase * __this));
IL2CPP_REGISTER_METHOD(0x02431490, MethodInfo_1 *, FindMethod, (UnityEventBase * __this, PersistentCall * call));
IL2CPP_REGISTER_METHOD(0x02431640, MethodInfo_1 *, FindMethod, (UnityEventBase * __this, String * name, Object * listener, PersistentListenerMode__Enum mode, Type * argumentType));
IL2CPP_REGISTER_METHOD(0x024313C0, void, DirtyPersistentCalls, (UnityEventBase * __this));
IL2CPP_REGISTER_METHOD(0x024319E0, void, RebuildPersistentCallsIfNeeded, (UnityEventBase * __this));
IL2CPP_REGISTER_METHOD(0x02431A20, void, AddCall, (UnityEventBase * __this, BaseInvokableCall * call));
IL2CPP_REGISTER_METHOD(0x02431AD0, void, RemoveListener, (UnityEventBase * __this, Object * targetObj, MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x02431AF0, List_1_UnityEngine_Events_BaseInvokableCall_ *, PrepareInvoke, (UnityEventBase * __this));
IL2CPP_REGISTER_METHOD(0x02431C60, String *, ToString, (UnityEventBase * __this));
IL2CPP_REGISTER_METHOD(0x02431D50, MethodInfo_1 *, GetValidMethodInfo, (Object * obj, String * functionName, Type__Array * argumentTypes));
}
