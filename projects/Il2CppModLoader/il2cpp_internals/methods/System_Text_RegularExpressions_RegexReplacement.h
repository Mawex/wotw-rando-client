using namespace app;

namespace app::methods::System::Text::RegularExpressions::RegexReplacement {
IL2CPP_REGISTER_METHOD(0x02A76300, void, __ctor, (RegexReplacement * __this, String * rep, RegexNode * concat, Hashtable * _caps));
IL2CPP_REGISTER_METHODINFO(0x0474CE00, RegexReplacement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A76AD0, void, ReplacementImpl, (RegexReplacement * __this, StringBuilder * sb, Match * match));
IL2CPP_REGISTER_METHOD(0x02A76D80, void, ReplacementImplRTL, (RegexReplacement * __this, List_1_System_String_ * al, Match * match));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Pattern, (RegexReplacement * __this));
IL2CPP_REGISTER_METHOD(0x02A77030, String *, Replace, (RegexReplacement * __this, Regex * regex, String * input, int32_t count, int32_t startat));
IL2CPP_REGISTER_METHODINFO(0x047844D0, RegexReplacement_Replace__MethodInfo);
}
