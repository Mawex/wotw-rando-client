using namespace app;

namespace app::methods::System::Reflection::EventInfo {
IL2CPP_REGISTER_METHOD(0x02689DF0, Type *, get_EventHandlerType, (EventInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, MemberTypes__Enum, get_MemberType, (EventInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EventInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x00F4E290, MethodInfo_1 *, GetAddMethod, (EventInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02689E80, MethodInfo_1 *, GetRemoveMethod, (EventInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (EventInfo_1 * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (EventInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02283820, bool, operator___, (EventInfo_1 * left, EventInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x02283870, bool, operator___, (EventInfo_1 * left, EventInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x02689EA0, EventInfo_1 *, internal_from_handle_type, (void * event_handle, void * type_handle));
IL2CPP_REGISTER_METHOD(0x02689F00, EventInfo_1 *, GetEventFromHandle, (RuntimeEventHandle handle, RuntimeTypeHandle reflectedType));
IL2CPP_REGISTER_METHODINFO(0x0470CA88, EventInfo_1_GetEventFromHandle__MethodInfo);
}
