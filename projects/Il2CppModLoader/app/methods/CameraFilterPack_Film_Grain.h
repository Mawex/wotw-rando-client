#pragma once
#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Film_Grain {
    IL2CPP_REGISTER_METHOD(0x02476A10, app::Material *, get_material, (app::CameraFilterPack_Film_Grain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02476BF0, void, Start, (app::CameraFilterPack_Film_Grain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02476D60, void, OnRenderImage, (app::CameraFilterPack_Film_Grain * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02477080, void, OnValidate, (app::CameraFilterPack_Film_Grain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477110, void, Update, (app::CameraFilterPack_Film_Grain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024771A0, void, OnDisable, (app::CameraFilterPack_Film_Grain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02477280, void, ctor, (app::CameraFilterPack_Film_Grain * this_ptr))
}
