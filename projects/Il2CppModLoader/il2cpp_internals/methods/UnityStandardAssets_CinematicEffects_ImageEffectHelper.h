#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::ImageEffectHelper {
IL2CPP_REGISTER_METHOD(0x02506A60, bool, IsSupported, (Shader * s, bool needDepth, bool needHdr, MonoBehaviour * effect));
IL2CPP_REGISTER_METHOD(0x02506E40, Material *, CheckShaderAndCreateMaterial, (Shader * s));
IL2CPP_REGISTER_METHOD(0x02507050, bool, get_supportsDX11, ());
}
