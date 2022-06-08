using namespace app;

namespace app::methods::CageMath {
IL2CPP_REGISTER_METHOD(0x00823240, bool, IsPointInsideCage, (Vector2 point, CageStructureTool * cage));
IL2CPP_REGISTER_METHOD(0x00823620, float, GetAngle, (Vector2 A, Vector2 B, Vector2 C));
IL2CPP_REGISTER_METHOD(0x00823730, float, DotProduct, (Vector2 A, Vector2 B, Vector2 C));
IL2CPP_REGISTER_METHOD(0x00823780, float, CrossProductLength, (Vector2 A, Vector2 B, Vector2 C));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CageMath * __this));
}
