using namespace app;

namespace app::methods::ObjectInsideZoneChecker {
IL2CPP_REGISTER_METHOD(0x005C3FE0, Rect, get_Bounds, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsInside, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060E860, bool, IsPositionInside, (ObjectInsideZoneChecker * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0060E8B0, void, FixedUpdate, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060E8C0, void, UpdateBounds, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060E8B0, void, Awake, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060EB80, Vector3, GetSize, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060EEC0, bool, Validate, (ObjectInsideZoneChecker * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_VirtualTimelineTarget, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x00417920, VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x004C65D0, String *, get_NameDisplayedOnClip, (ObjectInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x0060EEE0, void, __ctor, (ObjectInsideZoneChecker * __this));
}
