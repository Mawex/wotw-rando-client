#include <interception_macros.h>

namespace app::methods::CropUtility {
IL2CPP_REGISTER_METHOD(0x00DB8610, void, CropMaterial, (Material * material));
IL2CPP_REGISTER_METHOD(0x00DB8820, Rect, GetOccupiedRectNormalized, (Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x00DB8950, Rect, GetOccupiedRect, (Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CropUtility * __this));
}
