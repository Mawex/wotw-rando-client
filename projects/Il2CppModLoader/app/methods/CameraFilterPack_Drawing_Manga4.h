#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Drawing_Manga4 {
    IL2CPP_REGISTER_METHOD(0x024F4DA0, app::Material *, get_material, (app::CameraFilterPack_Drawing_Manga4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F4F80, void, Start, (app::CameraFilterPack_Drawing_Manga4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F50F0, void, OnRenderImage, (app::CameraFilterPack_Drawing_Manga4 * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F5330, void, OnValidate, (app::CameraFilterPack_Drawing_Manga4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F53C0, void, Update, (app::CameraFilterPack_Drawing_Manga4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F5450, void, OnDisable, (app::CameraFilterPack_Drawing_Manga4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F3E60, void, ctor, (app::CameraFilterPack_Drawing_Manga4 * this_ptr))
}
