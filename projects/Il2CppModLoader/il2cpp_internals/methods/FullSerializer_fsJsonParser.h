using namespace app;

namespace app::methods::FullSerializer::fsJsonParser {
IL2CPP_REGISTER_METHOD(0x0150C4C0, fsResult, MakeFailure, (fsJsonParser * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0150C7E0, bool, TryMoveNext, (fsJsonParser * __this));
IL2CPP_REGISTER_METHOD(0x0150C810, bool, HasValue, (fsJsonParser * __this));
IL2CPP_REGISTER_METHOD(0x0150C840, bool, HasValue, (fsJsonParser * __this, int32_t offset));
IL2CPP_REGISTER_METHOD(0x0150C880, uint16_t, Character, (fsJsonParser * __this));
IL2CPP_REGISTER_METHOD(0x0150C8B0, uint16_t, Character, (fsJsonParser * __this, int32_t offset));
IL2CPP_REGISTER_METHOD(0x0150C8E0, void, SkipSpace, (fsJsonParser * __this));
IL2CPP_REGISTER_METHOD(0x0150CC80, bool, IsHex, (fsJsonParser * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x0150CCB0, uint32_t, ParseSingleChar, (fsJsonParser * __this, uint16_t c1, uint32_t multipliyer));
IL2CPP_REGISTER_METHOD(0x0150CCF0, uint32_t, ParseUnicode, (fsJsonParser * __this, uint16_t c1, uint16_t c2, uint16_t c3, uint16_t c4));
IL2CPP_REGISTER_METHOD(0x0150CE40, fsResult, TryUnescapeChar, (fsJsonParser * __this, uint16_t * escaped));
IL2CPP_REGISTER_METHOD(0x0150D6F0, fsResult, TryParseExact, (fsJsonParser * __this, String * content));
IL2CPP_REGISTER_METHOD(0x0150D880, fsResult, TryParseTrue, (fsJsonParser * __this, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0150DA40, fsResult, TryParseFalse, (fsJsonParser * __this, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0150DC00, fsResult, TryParseNull, (fsJsonParser * __this, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0150DDC0, bool, IsSeparator, (fsJsonParser * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x0150DE80, fsResult, TryParseNumber, (fsJsonParser * __this, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0150E460, fsResult, TryParseString, (fsJsonParser * __this, String * * str));
IL2CPP_REGISTER_METHOD(0x0150E7B0, fsResult, TryParseArray, (fsJsonParser * __this, fsData * * arr));
IL2CPP_REGISTER_METHOD(0x0150EC30, fsResult, TryParseObject, (fsJsonParser * __this, fsData * * obj));
IL2CPP_REGISTER_METHOD(0x0150F250, fsResult, RunParse, (fsJsonParser * __this, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0150F5F0, fsResult, Parse, (String * input, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0150F8E0, fsData *, Parse, (String * input));
IL2CPP_REGISTER_METHOD(0x0150F9A0, void, __ctor, (fsJsonParser * __this, String * input));
}
