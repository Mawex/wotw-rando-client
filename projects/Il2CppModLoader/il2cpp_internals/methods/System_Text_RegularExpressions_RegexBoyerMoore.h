using namespace app;

namespace app::methods::System::Text::RegularExpressions::RegexBoyerMoore {
IL2CPP_REGISTER_METHOD(0x025878B0, void, __ctor, (RegexBoyerMoore * __this, String * pattern, bool caseInsensitive, bool rightToLeft, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x02587FB0, bool, MatchPattern, (RegexBoyerMoore * __this, String * text, int32_t index));
IL2CPP_REGISTER_METHOD(0x02588160, bool, IsMatch, (RegexBoyerMoore * __this, String * text, int32_t index, int32_t beglimit, int32_t endlimit));
IL2CPP_REGISTER_METHOD(0x025881F0, int32_t, Scan, (RegexBoyerMoore * __this, String * text, int32_t index, int32_t beglimit, int32_t endlimit));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, ToString, (RegexBoyerMoore * __this));
}
