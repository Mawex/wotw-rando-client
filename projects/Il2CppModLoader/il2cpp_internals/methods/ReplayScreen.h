using namespace app;

namespace app::methods::ReplayScreen {
IL2CPP_REGISTER_METHOD(0x008FE400, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x008FE480, void, Awake, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FE550, void, OnDestroy, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FE700, void, Hide, (ReplayScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x008FE8E0, void, ShowImmediate, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FE930, void, HideImmediate, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FE960, void, Show, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FEA10, void, OnBackPressed, (ReplayScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0478C470, ReplayScreen_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008FEBE0, void, PopulateItems, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FEC40, void, PopulateItems, (ReplayScreen * __this, CleverMenuItemGroup * group, ReplaySetting__Array * replaySettings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, (ReplayScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x007007F0, SuspendableMask__Enum, get_Mask, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FF170, void, set_Mask, (ReplayScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x008FF230, void, OnPostTimeSlicedEnable, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FF340, void, OnInstantiate, (ReplayScreen * __this));
IL2CPP_REGISTER_METHOD(0x008FF670, void, __ctor, (ReplayScreen * __this));
}
