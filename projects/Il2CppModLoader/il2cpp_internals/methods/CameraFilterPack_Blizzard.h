#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blizzard {
IL2CPP_REGISTER_METHOD(0x02763440, Material *, get_material, (CameraFilterPack_Blizzard * __this));
IL2CPP_REGISTER_METHOD(0x02763620, void, Start, (CameraFilterPack_Blizzard * __this));
IL2CPP_REGISTER_METHOD(0x027637A0, void, OnRenderImage, (CameraFilterPack_Blizzard * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (CameraFilterPack_Blizzard * __this));
IL2CPP_REGISTER_METHOD(0x02763A90, void, OnDisable, (CameraFilterPack_Blizzard * __this));
IL2CPP_REGISTER_METHOD(0x020E5E50, void, __ctor, (CameraFilterPack_Blizzard * __this));
}
