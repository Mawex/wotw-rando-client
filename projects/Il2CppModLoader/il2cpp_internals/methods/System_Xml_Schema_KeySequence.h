#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::KeySequence {
IL2CPP_REGISTER_METHOD(0x016CC620, void, __ctor, (KeySequence * __this, int32_t dim, int32_t line, int32_t col));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PosLine, (KeySequence * __this));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_PosCol, (KeySequence * __this));
IL2CPP_REGISTER_METHOD(0x016CC6E0, Object *, get_Item, (KeySequence * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x016CC720, void, set_Item, (KeySequence * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x016CC8A0, bool, IsQualified, (KeySequence * __this));
IL2CPP_REGISTER_METHOD(0x016CC900, int32_t, GetHashCode, (KeySequence * __this));
IL2CPP_REGISTER_METHOD(0x016CCE00, bool, Equals, (KeySequence * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x016CCF90, String *, ToString, (KeySequence * __this));
}
