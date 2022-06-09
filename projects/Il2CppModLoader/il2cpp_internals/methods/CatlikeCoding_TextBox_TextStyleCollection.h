#include <interception_macros.h>

namespace app::methods::CatlikeCoding_TextBox::TextStyleCollection {
IL2CPP_REGISTER_METHOD(0x01038AA0, void, ComputeRendererCount, (app::TextStyleCollection * this_ptr));
IL2CPP_REGISTER_METHOD(0x01038CE0, void, ClearRenderers_1, (app::TextStyleCollection * this_ptr, app::Text_1 * box));
IL2CPP_REGISTER_METHOD(0x01038F80, void, ClearRenderers_2, (app::TextStyleCollection * this_ptr, app::TextBox * box));
IL2CPP_REGISTER_METHOD(0x010391D0, TextRenderer__Array *, CreateRenderers_1, (app::TextStyleCollection * this_ptr, app::TextBox * box));
IL2CPP_REGISTER_METHOD(0x010395C0, TextRenderer__Array *, CreateRenderers_2, (app::TextStyleCollection * this_ptr, app::Text_1 * box));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (app::TextStyleCollection * this_ptr));
}
