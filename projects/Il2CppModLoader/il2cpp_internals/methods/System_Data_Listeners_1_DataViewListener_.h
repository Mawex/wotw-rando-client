using namespace app;

namespace app::methods::System::Data::Listeners_1_DataViewListener_ {
IL2CPP_REGISTER_METHOD(0x02FAEC80, void, __ctor, (Listeners_1_DataViewListener_ * __this, int32_t ObjectID, Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean_ * notifyFilter));
IL2CPP_REGISTER_METHODINFO(0x0475C550, Listeners_1_DataViewListener___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A72D00, void, Add, (Listeners_1_DataViewListener_ * __this, DataViewListener * listener));
IL2CPP_REGISTER_METHODINFO(0x04784110, Listeners_1_DataViewListener__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FAEE30, void, Remove, (Listeners_1_DataViewListener_ * __this, DataViewListener * listener));
IL2CPP_REGISTER_METHODINFO(0x04772C40, Listeners_1_DataViewListener__Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FAEDD0, bool, get_HasListeners, (Listeners_1_DataViewListener_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04736E18, Listeners_1_DataViewListener__get_HasListeners__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AEEC40, void, Notify, (Listeners_1_DataViewListener_ * __this, ListChangedEventArgs * arg1, bool arg2, bool arg3, Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean_ * action));
IL2CPP_REGISTER_METHODINFO(0x0473A9C0, Listeners_1_DataViewListener__Notify__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AEEA30, void, Notify, (Listeners_1_DataViewListener_ * __this, ListChangedType__Enum arg1, DataRow * arg2, bool arg3, Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedType_DataRow_System_Boolean_ * action));
IL2CPP_REGISTER_METHODINFO(0x0472D620, Listeners_1_DataViewListener__Notify_1__MethodInfo);
}
