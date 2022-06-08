#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::PointerUIMesh {
IL2CPP_REGISTER_METHOD(0x01662960, void, Awake, (PointerUIMesh * __this));
IL2CPP_REGISTER_METHOD(0x01662A00, Vector2, MapPointerToBrowser, (PointerUIMesh * __this, Vector2 screenPosition, int32_t pointerId));
IL2CPP_REGISTER_METHOD(0x01662B90, Vector2, MapRayToBrowser, (PointerUIMesh * __this, Ray worldRay, int32_t pointerId));
IL2CPP_REGISTER_METHOD(0x01662E30, void, GetCurrentHitLocation, (PointerUIMesh * __this, Vector3 * pos, Quaternion * rot));
IL2CPP_REGISTER_METHOD(0x01663200, void, __ctor, (PointerUIMesh * __this));
}
