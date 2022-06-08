using namespace app;

namespace app::methods::RiseSinkSwitch {
IL2CPP_REGISTER_METHOD(0x01355AA0, void, Awake, (RiseSinkSwitch * __this));
IL2CPP_REGISTER_METHOD(0x01355B50, void, OnDestroy, (RiseSinkSwitch * __this));
IL2CPP_REGISTER_METHOD(0x01355BF0, void, Start, (RiseSinkSwitch * __this));
IL2CPP_REGISTER_METHOD(0x01355C80, void, ChangeState, (RiseSinkSwitch * __this, RiseSinkSwitch_RiseSinkState__Enum state));
IL2CPP_REGISTER_METHOD(0x01355CA0, float, GetCurrentlyAppliedMass, (RiseSinkSwitch * __this));
IL2CPP_REGISTER_METHOD(0x01355E70, void, FixedUpdate, (RiseSinkSwitch * __this));
IL2CPP_REGISTER_METHOD(0x013563E0, void, Serialize, (RiseSinkSwitch * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (RiseSinkSwitch * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (RiseSinkSwitch * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006DC050, SuspendableMask__Enum, get_Mask, (RiseSinkSwitch * __this));
IL2CPP_REGISTER_METHOD(0x013565C0, void, set_Mask, (RiseSinkSwitch * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01356670, void, __ctor, (RiseSinkSwitch * __this));
}
