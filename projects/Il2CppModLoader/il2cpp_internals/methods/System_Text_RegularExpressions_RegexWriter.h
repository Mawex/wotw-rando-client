#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexWriter {
IL2CPP_REGISTER_METHOD(0x02A78D50, RegexCode *, Write, (RegexTree * t));
IL2CPP_REGISTER_METHOD(0x02A78EB0, void, __ctor, (RegexWriter * __this));
IL2CPP_REGISTER_METHOD(0x02A79120, void, PushInt, (RegexWriter * __this, int32_t I));
IL2CPP_REGISTER_METHOD(0x01B5A5F0, bool, EmptyStack, (RegexWriter * __this));
IL2CPP_REGISTER_METHOD(0x02592220, int32_t, PopInt, (RegexWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, CurPos, (RegexWriter * __this));
IL2CPP_REGISTER_METHOD(0x02A79230, void, PatchJump, (RegexWriter * __this, int32_t Offset, int32_t jumpDest));
IL2CPP_REGISTER_METHOD(0x02A79270, void, Emit, (RegexWriter * __this, int32_t op));
IL2CPP_REGISTER_METHOD(0x02A79320, void, Emit, (RegexWriter * __this, int32_t op, int32_t opd1));
IL2CPP_REGISTER_METHOD(0x02A79410, void, Emit, (RegexWriter * __this, int32_t op, int32_t opd1, int32_t opd2));
IL2CPP_REGISTER_METHOD(0x02A79540, int32_t, StringCode, (RegexWriter * __this, String * str));
IL2CPP_REGISTER_METHOD(0x02A796E0, ArgumentException *, MakeException, (RegexWriter * __this, String * message));
IL2CPP_REGISTER_METHOD(0x02A79830, int32_t, MapCapnum, (RegexWriter * __this, int32_t capnum));
IL2CPP_REGISTER_METHOD(0x02A79940, RegexCode *, RegexCodeFromRegexTree, (RegexWriter * __this, RegexTree * tree));
IL2CPP_REGISTER_METHOD(0x02A7A080, void, EmitFragment, (RegexWriter * __this, int32_t nodetype, RegexNode * node, int32_t CurIndex));
IL2CPP_REGISTER_METHODINFO(0x04738E18, RegexWriter_EmitFragment__MethodInfo);
}
