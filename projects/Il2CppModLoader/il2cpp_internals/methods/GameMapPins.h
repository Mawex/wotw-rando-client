using namespace app;

namespace app::methods::GameMapPins {
IL2CPP_REGISTER_METHOD(0x0069E090, GameObject *, GetPinObject, (GameMapPins * __this, GameMapPins_PinColour__Enum pin));
IL2CPP_REGISTER_METHOD(0x0069E290, void, AddPinObject, (GameMapPins * __this, GameMapPins_PinColour__Enum color, GameObject * go));
IL2CPP_REGISTER_METHOD(0x0069E350, List_1_GameMapPins_Pin_ *, get_SavedPins, (GameMapPins * __this));
IL2CPP_REGISTER_METHOD(0x0069E410, void, set_SavedPins, (GameMapPins * __this, List_1_GameMapPins_Pin_ * value));
IL2CPP_REGISTER_METHOD(0x0069E4E0, void, Awake, (GameMapPins * __this));
IL2CPP_REGISTER_METHOD(0x0069E590, void, UpdatePinsOnMap, (GameMapPins * __this, bool visible));
IL2CPP_REGISTER_METHOD(0x0069EBE0, void, AddPin, (GameMapPins * __this, GameMapPins_PinColour__Enum p, Vector3 position));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, (GameMapPins * __this));
IL2CPP_REGISTER_METHOD(0x0069EF90, void, RemovePin, (GameMapPins * __this, GameMapPins_Pin * pin));
IL2CPP_REGISTER_METHOD(0x0069F160, Vector2, DoCursorSelectionSnap, (GameMapPins * __this, Vector2 cursorMapCoords));
IL2CPP_REGISTER_METHOD(0x0069F380, GameMapPins_Pin *, GetPinUnderCursor, (GameMapPins * __this, Vector2 cursorPosition));
IL2CPP_REGISTER_METHOD(0x0069F540, GameMapPins_Pin *, GetFirstPinMatchingColor, (GameMapPins * __this, GameMapPins_PinColour__Enum colour));
IL2CPP_REGISTER_METHOD(0x0069F790, GameMapPins_Pin *, GetNearestPin, (GameMapPins * __this, Vector2 cursorPosition));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (GameMapPins * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_ApplyOnEditor, (GameMapPins * __this));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_ApplyOnEditor, (GameMapPins * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0069FA50, IUberState__Array *, get_AffectingUberStates, (GameMapPins * __this));
IL2CPP_REGISTER_METHOD(0x0069FB40, List_1_UnityEngine_GameObject_ *, get_AllTargets, (GameMapPins * __this));
IL2CPP_REGISTER_METHOD(0x0069FD00, void, __ctor, (GameMapPins * __this));
}
