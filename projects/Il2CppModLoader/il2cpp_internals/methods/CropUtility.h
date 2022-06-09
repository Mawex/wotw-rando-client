#include <interception_macros.h>

namespace app::methods::CropUtility {
    IL2CPP_REGISTER_METHOD(0x00DB8610, void, CropMaterial, (app::Material * material));
    IL2CPP_REGISTER_METHOD(0x00DB8820, Rect, GetOccupiedRectNormalized, (app::Texture2D * tex));
    IL2CPP_REGISTER_METHOD(0x00DB8950, Rect, GetOccupiedRect, (app::Texture2D * tex));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CropUtility * this_ptr));
} // namespace app::methods::CropUtility
