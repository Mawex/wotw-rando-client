using namespace app;

namespace app::methods::EnergyDoor {
IL2CPP_REGISTER_METHOD(0x00C878F0, void, OnValidate, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C87960, void, Highlight, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C87F20, void, Unhighlight, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C88250, void, RestoreOrbs, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C88470, void, OnDisable, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C884A0, void, Serialize, (EnergyDoor * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00C885A0, float, get_DistanceToSein, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C88750, bool, get_OriHasTargets, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C88870, bool, get_SeinInRange, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C888B0, void, RegisterSlot, (EnergyDoor * __this, EnergyDoorSlot * slot));
IL2CPP_REGISTER_METHOD(0x00C88950, void, UpdateSlots, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C88A90, void, FixedUpdate, (EnergyDoor * __this));
IL2CPP_REGISTER_METHOD(0x00C89120, void, __ctor, (EnergyDoor * __this));
}
