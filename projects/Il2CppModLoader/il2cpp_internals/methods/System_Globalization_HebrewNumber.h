#include <interception_macros.h>

namespace app::methods::System::Globalization::HebrewNumber {
IL2CPP_REGISTER_METHOD(0x02613650, String *, ToString, (int32_t Number));
IL2CPP_REGISTER_METHOD(0x02613FB0, HebrewNumberParsingState__Enum, ParseByChar, (uint16_t ch, HebrewNumberParsingContext * context));
IL2CPP_REGISTER_METHOD(0x02614260, bool, IsDigit, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x026143B0, void, __cctor, ());
}
