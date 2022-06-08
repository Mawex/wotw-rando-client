#include <interception_macros.h>

namespace app::methods::CCFont {
IL2CPP_REGISTER_METHOD(0x0315ACC0, CCFont_Char *, get_Item, (CCFont * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x02581530, bool, get_IsValid, (CCFont * __this));
IL2CPP_REGISTER_METHOD(0x0315AF20, void, UpdateAllCCText, (CCFont * __this));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (CCFont * __this));
}
