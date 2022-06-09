#include <interception_macros.h>

namespace app::methods::Colorful::ComicBook {
IL2CPP_REGISTER_METHOD(0x03041040, void, OnRenderImage, (app::ComicBook * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03041660, String *, GetShaderName, (app::ComicBook * this_ptr));
IL2CPP_REGISTER_METHOD(0x030416E0, void, __ctor, (app::ComicBook * this_ptr));
}
