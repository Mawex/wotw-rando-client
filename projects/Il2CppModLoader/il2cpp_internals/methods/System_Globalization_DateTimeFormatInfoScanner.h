#include <interception_macros.h>

namespace app::methods::System::Globalization::DateTimeFormatInfoScanner {
IL2CPP_REGISTER_METHOD(0x02605430, Dictionary_2_System_String_System_String_ *, get_KnownWords, ());
IL2CPP_REGISTER_METHOD(0x026059D0, int32_t, SkipWhiteSpacesAndNonLetter, (String * pattern, int32_t currentIndex));
IL2CPP_REGISTER_METHOD(0x02605AE0, void, AddDateWordOrPostfix, (DateTimeFormatInfoScanner * __this, String * formatPostfix, String * str));
IL2CPP_REGISTER_METHOD(0x02605E50, int32_t, AddDateWords, (DateTimeFormatInfoScanner * __this, String * pattern, int32_t index, String * formatPostfix));
IL2CPP_REGISTER_METHOD(0x026061D0, int32_t, ScanRepeatChar, (String * pattern, uint16_t ch, int32_t index, int32_t * count));
IL2CPP_REGISTER_METHOD(0x02606240, void, AddIgnorableSymbols, (DateTimeFormatInfoScanner * __this, String * text));
IL2CPP_REGISTER_METHOD(0x026063F0, void, ScanDateWord, (DateTimeFormatInfoScanner * __this, String * pattern));
IL2CPP_REGISTER_METHOD(0x02606670, String__Array *, GetDateWordsOfDTFI, (DateTimeFormatInfoScanner * __this, DateTimeFormatInfo * dtfi));
IL2CPP_REGISTER_METHOD(0x02606A60, FORMATFLAGS__Enum, GetFormatFlagGenitiveMonth, (String__Array * monthNames, String__Array * genitveMonthNames, String__Array * abbrevMonthNames, String__Array * genetiveAbbrevMonthNames));
IL2CPP_REGISTER_METHOD(0x02606AB0, FORMATFLAGS__Enum, GetFormatFlagUseSpaceInMonthNames, (String__Array * monthNames, String__Array * genitveMonthNames, String__Array * abbrevMonthNames, String__Array * genetiveAbbrevMonthNames));
IL2CPP_REGISTER_METHOD(0x02606B70, FORMATFLAGS__Enum, GetFormatFlagUseSpaceInDayNames, (String__Array * dayNames, String__Array * abbrevDayNames));
IL2CPP_REGISTER_METHOD(0x02606BB0, FORMATFLAGS__Enum, GetFormatFlagUseHebrewCalendar, (int32_t calID));
IL2CPP_REGISTER_METHOD(0x02606BC0, bool, EqualStringArrays, (String__Array * array1, String__Array * array2));
IL2CPP_REGISTER_METHOD(0x02606C90, bool, ArrayElementsHaveSpace, (String__Array * array));
IL2CPP_REGISTER_METHOD(0x02606DD0, bool, ArrayElementsBeginWithDigit, (String__Array * array));
IL2CPP_REGISTER_METHOD(0x02607110, void, __ctor, (DateTimeFormatInfoScanner * __this));
}
