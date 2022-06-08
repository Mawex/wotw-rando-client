#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexRunner {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A77620, Match *, Scan, (RegexRunner * __this, Regex * regex, String * text, int32_t textbeg, int32_t textend, int32_t textstart, int32_t prevlen, bool quick, TimeSpan timeout));
IL2CPP_REGISTER_METHOD(0x02A779E0, void, StartTimeoutWatch, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A77A40, void, CheckTimeout, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A77BB0, void, DoCheckTimeout, (RegexRunner * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C5F8, RegexRunner_DoCheckTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A77D00, void, InitMatch, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A78160, Match *, TidyMatch, (RegexRunner * __this, bool quick));
IL2CPP_REGISTER_METHOD(0x02A781B0, void, EnsureStorage, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A78380, bool, IsBoundary, (RegexRunner * __this, int32_t index, int32_t startpos, int32_t endpos));
IL2CPP_REGISTER_METHOD(0x02A784C0, bool, IsECMABoundary, (RegexRunner * __this, int32_t index, int32_t startpos, int32_t endpos));
IL2CPP_REGISTER_METHOD(0x02A78600, void, DoubleTrack, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A786F0, void, DoubleStack, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A787E0, void, DoubleCrawl, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A788D0, void, Crawl, (RegexRunner * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x02A78A10, int32_t, Popcrawl, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A78A50, int32_t, Crawlpos, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A78A70, void, Capture, (RegexRunner * __this, int32_t capnum, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x02A78B00, void, TransferCapture, (RegexRunner * __this, int32_t capnum, int32_t uncapnum, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x02A78C30, void, Uncapture, (RegexRunner * __this));
IL2CPP_REGISTER_METHOD(0x02A78C90, bool, IsMatched, (RegexRunner * __this, int32_t cap));
IL2CPP_REGISTER_METHOD(0x02A78CC0, int32_t, MatchIndex, (RegexRunner * __this, int32_t cap));
IL2CPP_REGISTER_METHOD(0x02A78CF0, int32_t, MatchLength, (RegexRunner * __this, int32_t cap));
}
