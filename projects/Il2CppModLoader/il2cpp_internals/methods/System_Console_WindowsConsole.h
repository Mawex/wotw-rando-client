using namespace app;

namespace app::methods::System::Console_WindowsConsole {
IL2CPP_REGISTER_METHOD(0x02034300, int32_t, GetConsoleCP, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02034390, int32_t, GetConsoleOutputCP, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02034420, bool, DoWindowsConsoleCancelEvent, (int32_t keyCode));
IL2CPP_REGISTER_METHODINFO(0x04712430, Console_WindowsConsole_DoWindowsConsoleCancelEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020344C0, int32_t, GetInputCodePage, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020345D0, int32_t, GetOutputCodePage, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x020346E0, void, __cctor, (MethodInfo * method));
}
