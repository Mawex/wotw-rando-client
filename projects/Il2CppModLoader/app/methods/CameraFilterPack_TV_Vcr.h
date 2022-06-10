#pragma once
#include <interception_macros.h>

namespace app::methods::CameraFilterPack_TV_Vcr {
    IL2CPP_REGISTER_METHOD(0x020EF760, app::Material *, get_material, (app::CameraFilterPack_TV_Vcr * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EF940, void, Start, (app::CameraFilterPack_TV_Vcr * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EFAB0, void, OnRenderImage, (app::CameraFilterPack_TV_Vcr * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020EFCF0, void, OnValidate, (app::CameraFilterPack_TV_Vcr * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EFD80, void, Update, (app::CameraFilterPack_TV_Vcr * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EFE10, void, OnDisable, (app::CameraFilterPack_TV_Vcr * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, (app::CameraFilterPack_TV_Vcr * this_ptr))
}
