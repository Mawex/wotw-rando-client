using namespace app;

namespace app::methods::PolygonJumpGrid {
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, Init, (PolygonJumpGrid * __this, ILocomotionTurningHandler * turningHandler));
IL2CPP_REGISTER_METHOD(0x00C5D1D0, PolygonJumpGridEntry *, GetEntryForPoint, (PolygonJumpGrid * __this, Vector3 point, bool canBeNull));
IL2CPP_REGISTER_METHOD(0x00C5D4A0, PolygonJumpGridEntry *, GetEntryForPointDescendingOrder, (PolygonJumpGrid * __this, Vector3 point, bool canBeNull));
IL2CPP_REGISTER_METHOD(0x00C5D720, void, OnDrawGizmos, (PolygonJumpGrid * __this));
IL2CPP_REGISTER_METHOD(0x00C5D950, void, __ctor, (PolygonJumpGrid * __this));
}
