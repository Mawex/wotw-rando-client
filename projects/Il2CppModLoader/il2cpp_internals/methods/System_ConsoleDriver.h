#include <interception_macros.h>

namespace app::methods::System::ConsoleDriver {
IL2CPP_REGISTER_METHOD(0x020349F0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02034A90, IConsoleDriver *, CreateNullConsoleDriver, ());
IL2CPP_REGISTER_METHOD(0x02034BD0, IConsoleDriver *, CreateWindowsConsoleDriver, ());
IL2CPP_REGISTER_METHOD(0x02034E10, IConsoleDriver *, CreateTermInfoDriver, (String * term));
IL2CPP_REGISTER_METHOD(0x02034F60, ConsoleKeyInfo, ReadKey, (bool intercept));
IL2CPP_REGISTER_METHOD(0x020350B0, bool, get_IsConsole, ());
IL2CPP_REGISTER_METHOD(0x020352A0, bool, Isatty, (void * handle));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, InternalKeyAvailable, (int32_t ms_timeout));
IL2CPP_REGISTER_METHOD(0x020352C0, bool, TtySetup, (String * keypadXmit, String * teardown, Byte__Array * * control_characters, int32_t * * address));
IL2CPP_REGISTER_METHOD(0x00417870, bool, SetEcho, (bool wantEcho));
}
