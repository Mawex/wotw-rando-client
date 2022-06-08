using namespace app;

namespace app::methods::System::ConsoleKeyInfo {
IL2CPP_REGISTER_METHOD(0x001DBE50, void, __ctor, (ConsoleKeyInfo__Boxed * __this, uint16_t keyChar, ConsoleKey__Enum key, bool shift, bool alt, bool control));
IL2CPP_REGISTER_METHODINFO(0x04796820, ConsoleKeyInfo__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00113CC0, uint16_t, get_KeyChar, (ConsoleKeyInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CE0, ConsoleKey__Enum, get_Key, (ConsoleKeyInfo__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DBE70, bool, Equals, (ConsoleKeyInfo__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001DBF70, bool, Equals, (ConsoleKeyInfo__Boxed * __this, ConsoleKeyInfo obj));
IL2CPP_REGISTER_METHOD(0x001DBFC0, int32_t, GetHashCode, (ConsoleKeyInfo__Boxed * __this));
}
