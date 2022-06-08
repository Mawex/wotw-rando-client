#include <interception_macros.h>

namespace app::methods::System::TermInfoDriver {
IL2CPP_REGISTER_METHOD(0x0243E7C0, String *, TryTermInfoDir, (String * dir, String * term));
IL2CPP_REGISTER_METHOD(0x0243E950, String *, SearchTerminfo, (String * term));
IL2CPP_REGISTER_METHOD(0x0243EB20, void, WriteConsole, (TermInfoDriver * __this, String * str));
IL2CPP_REGISTER_METHOD(0x0243EB50, void, __ctor, (TermInfoDriver * __this, String * term));
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_Initialized, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x0243F470, void, Init, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHODINFO(0x04761770, TermInfoDriver_Init__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0243FD80, void, IncrementX, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x0243FE10, void, WriteSpecialKey, (TermInfoDriver * __this, ConsoleKeyInfo key));
IL2CPP_REGISTER_METHOD(0x02440030, void, WriteSpecialKey, (TermInfoDriver * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x02440080, bool, IsSpecialKey, (TermInfoDriver * __this, ConsoleKeyInfo key));
IL2CPP_REGISTER_METHOD(0x02440120, bool, IsSpecialKey, (TermInfoDriver * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x024401F0, void, GetCursorPosition, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x024402E0, void, CheckWindowDimensions, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x02440530, int32_t, get_WindowHeight, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x02440560, int32_t, get_WindowWidth, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x02440590, void, AddToBuffer, (TermInfoDriver * __this, int32_t b));
IL2CPP_REGISTER_METHOD(0x024406D0, void, AdjustBuffer, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x024406F0, ConsoleKeyInfo, CreateKeyInfoFromInt, (TermInfoDriver * __this, int32_t n, bool alt));
IL2CPP_REGISTER_METHOD(0x02440820, Object *, GetKeyFromBuffer, (TermInfoDriver * __this, bool cooked));
IL2CPP_REGISTER_METHOD(0x02440C80, ConsoleKeyInfo, ReadKeyInternal, (TermInfoDriver * __this, bool * fresh));
IL2CPP_REGISTER_METHOD(0x02440E80, bool, InputPending, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x02440EC0, void, QueueEcho, (TermInfoDriver * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x02441010, void, Echo, (TermInfoDriver * __this, ConsoleKeyInfo key));
IL2CPP_REGISTER_METHOD(0x02441250, void, EchoFlush, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x024412A0, int32_t, Read, (TermInfoDriver * __this, Char__Array * dest, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x02441920, ConsoleKeyInfo, ReadKey, (TermInfoDriver * __this, bool intercept));
IL2CPP_REGISTER_METHOD(0x024419D0, String *, ReadLine, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x024419E0, String *, ReadToEnd, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x024419F0, String *, ReadUntilConditionInternal, (TermInfoDriver * __this, bool haltOnNewLine));
IL2CPP_REGISTER_METHOD(0x02441DA0, void, SetCursorPosition, (TermInfoDriver * __this, int32_t left, int32_t top));
IL2CPP_REGISTER_METHODINFO(0x04777CB0, TermInfoDriver_SetCursorPosition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02441FF0, void, CreateKeyMap, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x024446C0, void, InitKeys, (TermInfoDriver * __this));
IL2CPP_REGISTER_METHOD(0x02444970, void, AddStringMapping, (TermInfoDriver * __this, TermInfoStrings__Enum s));
IL2CPP_REGISTER_METHOD(0x024449D0, void, __cctor, ());
}
