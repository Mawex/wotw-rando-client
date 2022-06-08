using namespace app;

namespace app::methods::GameWorldArea {
IL2CPP_REGISTER_METHOD(0x0040A2E0, Bounds, get_Bounds, (GameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x0040A500, Bounds, CreateBoundsFromTransform, (GameWorldArea * __this, Transform * transformSource));
IL2CPP_REGISTER_METHOD(0x0040A620, Rect, get_BoundingRect, (GameWorldArea * __this));
IL2CPP_REGISTER_METHOD(0x0040A870, bool, InsideFace, (GameWorldArea * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x0040A9C0, void, __ctor, (GameWorldArea * __this));
}
