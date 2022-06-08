using namespace app;

namespace app::methods::JumpGridEntry {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_EntryName, (JumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValid, (JumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x00E4C680, Vector2, get_CellLocalCenter, (JumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x00E4C6B0, void, set_CellLocalCenter, (JumpGridEntry * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00E4C6F0, Color, get_CellColor, (JumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x00E4C7D0, Rect, GridCell, (JumpGridEntry * __this, bool facingLeft));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (JumpGridEntry * __this));
IL2CPP_REGISTER_METHOD(0x00E4C830, void, __cctor, (MethodInfo * method));
}
