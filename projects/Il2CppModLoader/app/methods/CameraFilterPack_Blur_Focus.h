#pragma once
#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Focus {
    IL2CPP_REGISTER_METHOD(0x024D0E20, app::Material *, get_material, (app::CameraFilterPack_Blur_Focus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D1000, void, Start, (app::CameraFilterPack_Blur_Focus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D1180, void, OnRenderImage, (app::CameraFilterPack_Blur_Focus * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024D1600, void, OnValidate, (app::CameraFilterPack_Blur_Focus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D16A0, void, Update, (app::CameraFilterPack_Blur_Focus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D1740, void, OnDisable, (app::CameraFilterPack_Blur_Focus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D1820, void, ctor, (app::CameraFilterPack_Blur_Focus * this_ptr))
}
