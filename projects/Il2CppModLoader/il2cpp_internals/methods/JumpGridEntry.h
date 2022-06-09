#include <interception_macros.h>

namespace app::methods::JumpGridEntry {
    IL2CPP_REGISTER_METHOD(0x002FA280, String*, get_EntryName, (app::JumpGridEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValid, (app::JumpGridEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E4C680, Vector2, get_CellLocalCenter, (app::JumpGridEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E4C6B0, void, set_CellLocalCenter, (app::JumpGridEntry * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x00E4C6F0, Color, get_CellColor, (app::JumpGridEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E4C7D0, Rect, GridCell, (app::JumpGridEntry * this_ptr, bool facing_left));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::JumpGridEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E4C830, void, __cctor, ());
} // namespace app::methods::JumpGridEntry
