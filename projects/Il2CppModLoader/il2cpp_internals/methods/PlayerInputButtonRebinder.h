using namespace app;

namespace app::methods::PlayerInputButtonRebinder {
IL2CPP_REGISTER_METHOD(0x0141CC70, bool, IsAbilityBlocked, (PlayerInputButtonRebinder * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x0141CDB0, void, Awake, (PlayerInputButtonRebinder * __this));
IL2CPP_REGISTER_METHOD(0x0141CE40, void, OnDestory, (PlayerInputButtonRebinder * __this));
IL2CPP_REGISTER_METHOD(0x0141CF20, void, Serialize, (PlayerInputButtonRebinder * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0141D240, void, BeginButtonBlocking, (PlayerInputButtonRebinder * __this, Input_Command__Enum button));
IL2CPP_REGISTER_METHOD(0x0141D3A0, void, EndButtonBlocking, (PlayerInputButtonRebinder * __this, Input_Command__Enum button));
IL2CPP_REGISTER_METHOD(0x0141D490, void, BeginButtonOverride, (PlayerInputButtonRebinder * __this, Input_Command__Enum button, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x0141D600, void, EndButtonOverride, (PlayerInputButtonRebinder * __this, Input_Command__Enum button));
IL2CPP_REGISTER_METHOD(0x0141D800, void, BindButton, (PlayerInputButtonRebinder * __this, AbilityType__Enum ability, Input_Command__Enum button));
IL2CPP_REGISTER_METHOD(0x0141DA70, Input_Command__Enum, GetCommand, (PlayerInputButtonRebinder * __this, AbilityType__Enum ability, PlayerInputButtonRebinder_Request__Enum request));
IL2CPP_REGISTER_METHOD(0x0141DDB0, AbilityType__Enum, GetAbility, (PlayerInputButtonRebinder * __this, Input_Command__Enum button, PlayerInputButtonRebinder_Request__Enum request));
IL2CPP_REGISTER_METHOD(0x0141DFA0, bool, IsAbilityAssigned, (PlayerInputButtonRebinder * __this, AbilityType__Enum abilityType));
IL2CPP_REGISTER_METHOD(0x0141DFC0, void, OnEnable, (PlayerInputButtonRebinder * __this));
IL2CPP_REGISTER_METHOD(0x0141E150, void, OnDisable, (PlayerInputButtonRebinder * __this));
IL2CPP_REGISTER_METHOD(0x0141E2E0, void, OnGameReset, (PlayerInputButtonRebinder * __this));
IL2CPP_REGISTER_METHODINFO(0x047697E8, PlayerInputButtonRebinder_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0141E6B0, void, __ctor, (PlayerInputButtonRebinder * __this));
}
