#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::Match {
IL2CPP_REGISTER_METHOD(0x025823A0, Match *, get_Empty, ());
IL2CPP_REGISTER_METHOD(0x02582440, void, __ctor, (Match * __this, Regex * regex, int32_t capcount, String * text, int32_t begpos, int32_t len, int32_t startpos));
IL2CPP_REGISTER_METHOD(0x025825E0, void, Reset, (Match * __this, Regex * regex, String * text, int32_t textbeg, int32_t textend, int32_t textstart));
IL2CPP_REGISTER_METHOD(0x02582670, GroupCollection *, get_Groups, (Match * __this));
IL2CPP_REGISTER_METHOD(0x025827D0, Match *, NextMatch, (Match * __this));
IL2CPP_REGISTER_METHOD(0x02582820, String *, GroupToStringImpl, (Match * __this, int32_t groupnum));
IL2CPP_REGISTER_METHOD(0x02582990, String *, LastGroupToStringImpl, (Match * __this));
IL2CPP_REGISTER_METHOD(0x025829C0, void, AddMatch, (Match * __this, int32_t cap, int32_t start, int32_t len));
IL2CPP_REGISTER_METHOD(0x02582DA0, void, BalanceMatch, (Match * __this, int32_t cap));
IL2CPP_REGISTER_METHOD(0x02582F50, void, RemoveMatch, (Match * __this, int32_t cap));
IL2CPP_REGISTER_METHOD(0x02582F90, bool, IsMatched, (Match * __this, int32_t cap));
IL2CPP_REGISTER_METHOD(0x02583060, int32_t, MatchIndex, (Match * __this, int32_t cap));
IL2CPP_REGISTER_METHOD(0x02583150, int32_t, MatchLength, (Match * __this, int32_t cap));
IL2CPP_REGISTER_METHOD(0x02583240, void, Tidy, (Match * __this, int32_t textpos));
IL2CPP_REGISTER_METHOD(0x025834D0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02583650, void, __ctor, (Match * __this));
IL2CPP_REGISTER_METHODINFO(0x047465E0, Match__ctor_1__MethodInfo);
}
