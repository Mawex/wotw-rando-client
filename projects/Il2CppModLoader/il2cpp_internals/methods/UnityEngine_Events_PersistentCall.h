using namespace app;

namespace app::methods::UnityEngine::Events::PersistentCall {
IL2CPP_REGISTER_METHOD(0x0242F8B0, void, __ctor, (PersistentCall * __this));
IL2CPP_REGISTER_METHOD(0x01F2AB40, Object_1 *, get_target, (PersistentCall * __this));
IL2CPP_REGISTER_METHOD(0x01F25880, String *, get_methodName, (PersistentCall * __this));
IL2CPP_REGISTER_METHOD(0x00EB1C70, PersistentListenerMode__Enum, get_mode, (PersistentCall * __this));
IL2CPP_REGISTER_METHOD(0x01F234C0, ArgumentCache *, get_arguments, (PersistentCall * __this));
IL2CPP_REGISTER_METHOD(0x0242FA00, bool, IsValid, (PersistentCall * __this));
IL2CPP_REGISTER_METHOD(0x0242FAD0, BaseInvokableCall *, GetRuntimeCall, (PersistentCall * __this, UnityEventBase * theEvent));
IL2CPP_REGISTER_METHOD(0x02430120, BaseInvokableCall *, GetObjectCall, (Object_1 * target, MethodInfo_1 * method_1, ArgumentCache * arguments));
}
