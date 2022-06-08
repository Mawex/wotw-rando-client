using namespace app;

namespace app::methods::Moon::Rendering::EarlyZGrid {
IL2CPP_REGISTER_METHOD(0x00118FE0, void, __ctor, (EarlyZGrid__Boxed * __this, Bounds bounds, Vector3 cellSize));
IL2CPP_REGISTER_METHOD(0x00119030, Bounds, getCellBounds, (EarlyZGrid__Boxed * __this, Vector3 cell));
IL2CPP_REGISTER_METHOD(0x00119290, Vector3Int, getCellCoord, (EarlyZGrid__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x001192E0, int32_t, getCellIndex, (EarlyZGrid__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00119340, int32_t, getCellCount, (EarlyZGrid__Boxed * __this, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x001194E0, int32_t, getCellCountXY, (EarlyZGrid__Boxed * __this, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x0078A070, Vector3, mad, (Vector3 m, Vector3 a, Vector3 b));
}
