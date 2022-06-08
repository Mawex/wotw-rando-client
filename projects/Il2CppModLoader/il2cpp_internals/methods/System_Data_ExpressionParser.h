using namespace app;

namespace app::methods::System::Data::ExpressionParser {
IL2CPP_REGISTER_METHOD(0x01F5A8B0, void, __ctor, (ExpressionParser * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F5A980, void, LoadExpression, (ExpressionParser * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01F5AA90, void, StartScan, (ExpressionParser * __this));
IL2CPP_REGISTER_METHOD(0x01F5AC30, ExpressionNode *, Parse, (ExpressionParser * __this));
IL2CPP_REGISTER_METHODINFO(0x0473ACF0, ExpressionParser_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F5C890, ExpressionNode *, ParseAggregateArgument, (ExpressionParser * __this, FunctionId__Enum aggregate));
IL2CPP_REGISTER_METHODINFO(0x0473AF08, ExpressionParser_ParseAggregateArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F5CCB0, ExpressionNode *, NodePop, (ExpressionParser * __this));
IL2CPP_REGISTER_METHOD(0x01F5CD00, ExpressionNode *, NodePeek, (ExpressionParser * __this));
IL2CPP_REGISTER_METHOD(0x01F5CD50, void, NodePush, (ExpressionParser * __this, ExpressionNode * node));
IL2CPP_REGISTER_METHODINFO(0x047506C8, ExpressionParser_NodePush__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F5CE60, void, BuildExpression, (ExpressionParser * __this, int32_t pri));
IL2CPP_REGISTER_METHODINFO(0x04737560, ExpressionParser_BuildExpression__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F5D470, void, CheckToken, (ExpressionParser * __this, Tokens__Enum token));
IL2CPP_REGISTER_METHODINFO(0x04766510, ExpressionParser_CheckToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F5D520, Tokens__Enum, Scan, (ExpressionParser * __this));
IL2CPP_REGISTER_METHODINFO(0x047399F8, ExpressionParser_Scan__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F5DAA0, void, ScanNumeric, (ExpressionParser * __this));
IL2CPP_REGISTER_METHOD(0x01F5DD10, void, ScanName, (ExpressionParser * __this));
IL2CPP_REGISTER_METHOD(0x01F5DD80, void, ScanName, (ExpressionParser * __this, uint16_t chEnd, uint16_t esc, String * charsToEscape));
IL2CPP_REGISTER_METHODINFO(0x04765918, ExpressionParser_ScanName_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F5DF50, void, ScanDate, (ExpressionParser * __this));
IL2CPP_REGISTER_METHODINFO(0x047197C8, ExpressionParser_ScanDate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, ScanBinaryConstant, (ExpressionParser * __this));
IL2CPP_REGISTER_METHOD(0x01F5E120, void, ScanReserved, (ExpressionParser * __this));
IL2CPP_REGISTER_METHOD(0x01F5E470, void, ScanString, (ExpressionParser * __this, uint16_t escape));
IL2CPP_REGISTER_METHODINFO(0x0471D0B0, ExpressionParser_ScanString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F5E5F0, void, ScanToken, (ExpressionParser * __this, Tokens__Enum token));
IL2CPP_REGISTER_METHOD(0x01F5E620, void, ScanWhite, (ExpressionParser * __this));
IL2CPP_REGISTER_METHOD(0x01F5E680, bool, IsWhiteSpace, (ExpressionParser * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01F5E690, bool, IsAlphaNumeric, (ExpressionParser * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01F5E730, bool, IsDigit, (ExpressionParser * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01F5E780, bool, IsAlpha, (ExpressionParser * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01F5E800, void, __cctor, (MethodInfo * method));
}
