using namespace app;

namespace app::methods::SceneComponentTracker {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SceneComponentTracker * __this));
IL2CPP_REGISTER_METHOD(0x031C3BD0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01555900, void, Register, (Object * component));
IL2CPP_REGISTER_METHOD(0x01555A00, void, Unregister, (Object * component));
IL2CPP_REGISTER_METHOD(0x01EB9E40, List_1_System_Object_ *, GetAll, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x018EC750, GenericComponentTracker_1_System_Object_ *, GetTracker, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01555660, void, EnsureTrackerTypeExistence, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01555900, void, Register, (NewSetupStateController * component));
IL2CPP_REGISTER_METHODINFO(0x0471CE08, SceneComponentTracker_Register_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01555A00, void, Unregister, (NewSetupStateController * component));
IL2CPP_REGISTER_METHODINFO(0x0473F648, SceneComponentTracker_Unregister_1__MethodInfo);
}
