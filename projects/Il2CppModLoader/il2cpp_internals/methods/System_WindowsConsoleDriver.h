using namespace app;

namespace app::methods::System::WindowsConsoleDriver {
IL2CPP_REGISTER_METHOD(0x0314E010, void, __ctor, (WindowsConsoleDriver * __this));
IL2CPP_REGISTER_METHOD(0x0314E150, ConsoleKeyInfo, ReadKey, (WindowsConsoleDriver * __this, bool intercept));
IL2CPP_REGISTER_METHODINFO(0x047894D8, WindowsConsoleDriver_ReadKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314E450, bool, IsModifierKey, (int16_t virtualKeyCode));
IL2CPP_REGISTER_METHOD(0x0314E480, void *, GetStdHandle, (Handles__Enum handle));
IL2CPP_REGISTER_METHOD(0x0314E580, bool, GetConsoleScreenBufferInfo, (void * handle, ConsoleScreenBufferInfo * info));
IL2CPP_REGISTER_METHOD(0x0314E680, bool, ReadConsoleInput, (void * handle, InputRecord * record, int32_t length, int32_t * nread));
}
