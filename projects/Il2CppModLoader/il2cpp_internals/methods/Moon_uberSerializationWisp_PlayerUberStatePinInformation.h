using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStatePinInformation {
IL2CPP_REGISTER_METHOD(0x00F3ED30, void, SetPinActiveState, (PlayerUberStatePinInformation * __this, GameMapPins_PinColour__Enum color, bool state));
IL2CPP_REGISTER_METHOD(0x00F3EDF0, bool, GetPinActiveState, (PlayerUberStatePinInformation * __this, GameMapPins_PinColour__Enum color));
IL2CPP_REGISTER_METHOD(0x00F3EEA0, void, SetPinLocation, (PlayerUberStatePinInformation * __this, GameMapPins_PinColour__Enum color, Vector2 location));
IL2CPP_REGISTER_METHOD(0x00F3EF70, Vector2, GetPinLocation, (PlayerUberStatePinInformation * __this, GameMapPins_PinColour__Enum color));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_GameMapPins_Pin_ *, GetPins, (PlayerUberStatePinInformation * __this));
IL2CPP_REGISTER_METHOD(0x00F3F030, void, SetPins, (PlayerUberStatePinInformation * __this, List_1_GameMapPins_Pin_ * pins));
IL2CPP_REGISTER_METHOD(0x00F3F200, void, Save, (PlayerUberStatePinInformation * __this, UberStateArchive * archive, PlayerUberStatePinInformation * pinInfo));
IL2CPP_REGISTER_METHOD(0x00F3F460, void, Load, (PlayerUberStatePinInformation * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F3F6F0, void, __ctor, (PlayerUberStatePinInformation * __this, Action * dirtyCallBack));
IL2CPP_REGISTER_METHOD(0x00F3FDB0, void, OnGui, (PlayerUberStatePinInformation * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00F400E0, int64_t, get_Size, (PlayerUberStatePinInformation * __this));
IL2CPP_REGISTER_METHOD(0x00F402C0, void, RunSetDirtyCallback, (PlayerUberStatePinInformation * __this));
IL2CPP_REGISTER_METHOD(0x00F40450, GameMapPins_Pin *, GetPin, (PlayerUberStatePinInformation * __this, GameMapPins_PinColour__Enum color));
IL2CPP_REGISTER_METHOD(0x00F404F0, void, __cctor, (MethodInfo * method));
}
