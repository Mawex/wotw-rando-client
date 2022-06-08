using namespace app;

namespace app::methods::MoonSwarm {
IL2CPP_REGISTER_METHOD(0x00CA25B0, bool, get_IsSuspended, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x00CA25C0, void, set_IsSuspended, (MoonSwarm * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00989BF0, SuspendableMask__Enum, get_Mask, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x01461CD0, void, set_Mask, (MoonSwarm * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01461D90, Rect, get_LimitRect, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_IsLimitValid, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x008663D0, float, get_LimitBorder, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x01461DA0, void, Awake, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x014624C0, void, OnDestroy, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x01462560, void, Update, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x01462980, void, Add, (MoonSwarm * __this, MoonSwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x01462A20, void, Remove, (MoonSwarm * __this, MoonSwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x01462AC0, Vector2, SwarmCenter, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x01462D90, bool, GetSwarmerPosition, (MoonSwarm * __this, int32_t index, Vector2 * position));
IL2CPP_REGISTER_METHOD(0x01462ED0, void, UpdateLimitRect, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x01463080, void, OnDrawGizmos, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x01463190, void, OnDrawGizmosSelected, (MoonSwarm * __this));
IL2CPP_REGISTER_METHOD(0x01463260, void, DrawGizmosForSwarmer, (MoonSwarm * __this, MoonSwarmer * current));
IL2CPP_REGISTER_METHOD(0x01463D10, void, __ctor, (MoonSwarm * __this));
}
