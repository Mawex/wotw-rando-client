#include <interception_macros.h>

namespace app::methods::CatlikeCoding::TextBox::TextStyleCollection {
IL2CPP_REGISTER_METHOD(0x01038AA0, void, ComputeRendererCount, (TextStyleCollection * __this));
IL2CPP_REGISTER_METHOD(0x01038CE0, void, ClearRenderers, (TextStyleCollection * __this, Text_1 * box));
IL2CPP_REGISTER_METHOD(0x01038F80, void, ClearRenderers, (TextStyleCollection * __this, TextBox * box));
IL2CPP_REGISTER_METHOD(0x010391D0, TextRenderer__Array *, CreateRenderers, (TextStyleCollection * __this, TextBox * box));
IL2CPP_REGISTER_METHOD(0x010395C0, TextRenderer__Array *, CreateRenderers, (TextStyleCollection * __this, Text_1 * box));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (TextStyleCollection * __this));
}
