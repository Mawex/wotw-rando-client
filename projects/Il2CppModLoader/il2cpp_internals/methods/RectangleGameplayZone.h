using namespace app;

namespace app::methods::RectangleGameplayZone {
IL2CPP_REGISTER_METHOD(0x008FB270, bool, ContainsPoint, (RectangleGameplayZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x008FB2B0, Rect, get_EditorBounds, (RectangleGameplayZone * __this));
IL2CPP_REGISTER_METHOD(0x008FB520, void, set_EditorBounds, (RectangleGameplayZone * __this, Rect value));
IL2CPP_REGISTER_METHOD(0x008FB720, void, OnZoneChange, (RectangleGameplayZone * __this));
IL2CPP_REGISTER_METHOD(0x008FB810, void, RefreshBounds, (RectangleGameplayZone * __this));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (RectangleGameplayZone * __this));
}
