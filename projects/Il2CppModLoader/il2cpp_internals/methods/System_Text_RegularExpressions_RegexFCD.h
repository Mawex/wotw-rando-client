#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexFCD {
IL2CPP_REGISTER_METHOD(0x02591660, RegexPrefix *, FirstChars, (RegexTree * t));
IL2CPP_REGISTER_METHOD(0x025919D0, RegexPrefix *, Prefix, (RegexTree * tree));
IL2CPP_REGISTER_METHOD(0x02591DD0, int32_t, Anchors, (RegexTree * tree));
IL2CPP_REGISTER_METHOD(0x02591FF0, int32_t, AnchorFromType, (int32_t type));
IL2CPP_REGISTER_METHOD(0x02592070, void, __ctor, (RegexFCD * __this));
IL2CPP_REGISTER_METHOD(0x02592110, void, PushInt, (RegexFCD * __this, int32_t I));
IL2CPP_REGISTER_METHOD(0x01B5A5F0, bool, IntIsEmpty, (RegexFCD * __this));
IL2CPP_REGISTER_METHOD(0x02592220, int32_t, PopInt, (RegexFCD * __this));
IL2CPP_REGISTER_METHOD(0x02592270, void, PushFC, (RegexFCD * __this, RegexFC * fc));
IL2CPP_REGISTER_METHOD(0x01E519D0, bool, FCIsEmpty, (RegexFCD * __this));
IL2CPP_REGISTER_METHOD(0x025923C0, RegexFC *, PopFC, (RegexFCD * __this));
IL2CPP_REGISTER_METHOD(0x02592410, RegexFC *, TopFC, (RegexFCD * __this));
IL2CPP_REGISTER_METHOD(0x02592450, RegexFC *, RegexFCFromRegexTree, (RegexFCD * __this, RegexTree * tree));
IL2CPP_REGISTER_METHOD(0x02592750, void, SkipChild, (RegexFCD * __this));
IL2CPP_REGISTER_METHOD(0x02592760, void, CalculateFC, (RegexFCD * __this, int32_t NodeType, RegexNode * node, int32_t CurIndex));
IL2CPP_REGISTER_METHODINFO(0x047551E8, RegexFCD_CalculateFC__MethodInfo);
}
