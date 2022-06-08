using namespace app;

namespace app::methods::System::Data::Listeners_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02FAEDD0, bool, get_HasListeners, (Listeners_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAEC80, void, __ctor, (Listeners_1_System_Object_ * __this, int32_t ObjectID, Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_ * notifyFilter));
IL2CPP_REGISTER_METHOD(0x01A72D00, void, Add, (Listeners_1_System_Object_ * __this, Object * listener));
IL2CPP_REGISTER_METHOD(0x02FAEE10, int32_t, IndexOfReference, (Listeners_1_System_Object_ * __this, Object * listener));
IL2CPP_REGISTER_METHOD(0x02FAEE30, void, Remove, (Listeners_1_System_Object_ * __this, Object * listener));
IL2CPP_REGISTER_METHOD(0x01AEEE50, void, Notify, (Listeners_1_System_Object_ * __this, Object * arg1, Object * arg2, Object * arg3, Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object_ * action));
IL2CPP_REGISTER_METHOD(0x02FAEF00, void, RemoveNullListeners, (Listeners_1_System_Object_ * __this, int32_t nullIndex));
IL2CPP_REGISTER_METHOD(0x01AEEA30, void, Notify, (Listeners_1_System_Object_ * __this, Int32Enum__Enum arg1, Object * arg2, bool arg3, Listeners_1_TElem_Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_ * action));
IL2CPP_REGISTER_METHOD(0x01AEEC40, void, Notify, (Listeners_1_System_Object_ * __this, Object * arg1, bool arg2, bool arg3, Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Boolean_System_Boolean_ * action));
}
