#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::TiltShift {
    IL2CPP_REGISTER_METHOD(0x02D688A0, bool, CheckResources, (app::TiltShift * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02D688F0, void, OnRenderImage, (app::TiltShift * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
    IL2CPP_REGISTER_METHOD(0x02D68D90, void, __ctor, (app::TiltShift * this_ptr));
}
