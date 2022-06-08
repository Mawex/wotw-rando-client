using namespace app;

namespace app::methods::UberSwarm {
IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_IsSuspended, (UberSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00A1A3C0, void, set_IsSuspended, (UberSwarm * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057AAC0, SuspendableMask__Enum, get_Mask, (UberSwarm * __this));
IL2CPP_REGISTER_METHOD(0x0128BD10, void, set_Mask, (UberSwarm * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00866A10, void, __ctor, (UberSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00F948A0, void, Awake, (UberSwarm * __this));
IL2CPP_REGISTER_METHOD(0x0128BDC0, void, OnDestroy, (UberSwarm * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (UberSwarm * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSwarmerEvent, (UberSwarm * __this, UberSwarm_SwarmerEvent__Enum e, UberSwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x0128BE60, void, Add, (UberSwarm * __this, UberSwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x0128BF00, void, Remove, (UberSwarm * __this, UberSwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x0128BFA0, Vector2, SwarmCenter, (UberSwarm * __this));
}
