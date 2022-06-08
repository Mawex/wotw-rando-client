using namespace app;

namespace app::methods::PolygonJumpGridEntry {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_EntryName, (PolygonJumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x00C5DAB0, Color, get_CellColor, (PolygonJumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x00C5DB90, bool, Contains, (PolygonJumpGridEntry * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00C5DCC0, void, CalculateBoundingBox, (PolygonJumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x00C5DFF0, void, __ctor, (PolygonJumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x00C5E1F0, void, __cctor, (MethodInfo * method));
}
