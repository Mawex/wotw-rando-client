#include <interception_macros.h>

namespace app::methods::MS::Internal::Xml::XPath::XPathParser {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XPathParser * __this, XPathScanner * scanner));
IL2CPP_REGISTER_METHOD(0x021D94F0, AstNode *, ParseXPathExpresion, (String * xpathExpresion));
IL2CPP_REGISTER_METHODINFO(0x0472B518, XPathParser_ParseXPathExpresion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D9810, AstNode *, ParseExpresion, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHODINFO(0x04795968, XPathParser_ParseExpresion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D98D0, AstNode *, ParseOrExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021D9B00, AstNode *, ParseAndExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021D9D30, AstNode *, ParseEqualityExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021D9F30, AstNode *, ParseRelationalExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DA140, AstNode *, ParseAdditiveExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DA340, AstNode *, ParseMultiplicativeExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DA600, AstNode *, ParseUnaryExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DA930, AstNode *, ParseUnionExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DAB60, bool, IsNodeType, (XPathScanner * scaner));
IL2CPP_REGISTER_METHOD(0x021DACE0, AstNode *, ParsePathExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DAFA0, AstNode *, ParseFilterExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DB190, AstNode *, ParsePredicate, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DB240, AstNode *, ParseLocationPath, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DB5E0, AstNode *, ParseRelativeLocationPath, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DB7C0, bool, IsStep, (XPathScanner_LexKind__Enum lexKind));
IL2CPP_REGISTER_METHOD(0x021DB7F0, AstNode *, ParseStep, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DBD60, AstNode *, ParseNodeTest, (XPathParser * __this, AstNode * qyInput, Axis_AxisType__Enum axisType, XPathNodeType__Enum nodeType));
IL2CPP_REGISTER_METHODINFO(0x04716790, XPathParser_ParseNodeTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DC220, bool, IsPrimaryExpr, (XPathScanner * scanner));
IL2CPP_REGISTER_METHOD(0x021DC300, AstNode *, ParsePrimaryExpr, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHOD(0x021DC880, AstNode *, ParseMethod, (XPathParser * __this, AstNode * qyInput));
IL2CPP_REGISTER_METHODINFO(0x0475BF48, XPathParser_ParseMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DD5E0, void, CheckToken, (XPathParser * __this, XPathScanner_LexKind__Enum t));
IL2CPP_REGISTER_METHODINFO(0x04762AE8, XPathParser_CheckToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DD6C0, void, PassToken, (XPathParser * __this, XPathScanner_LexKind__Enum t));
IL2CPP_REGISTER_METHOD(0x021DD6F0, void, NextLex, (XPathParser * __this));
IL2CPP_REGISTER_METHOD(0x021DD710, bool, TestOp, (XPathParser * __this, String * op));
IL2CPP_REGISTER_METHOD(0x021DD780, void, CheckNodeSet, (XPathParser * __this, XPathResultType__Enum t));
IL2CPP_REGISTER_METHODINFO(0x047372A0, XPathParser_CheckNodeSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DD850, Hashtable *, CreateFunctionTable, ());
IL2CPP_REGISTER_METHOD(0x021DF450, Hashtable *, CreateAxesTable, ());
IL2CPP_REGISTER_METHOD(0x021DF860, Axis_AxisType__Enum, GetAxis, (XPathParser * __this, XPathScanner * scaner));
IL2CPP_REGISTER_METHODINFO(0x04701960, XPathParser_GetAxis__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DF9B0, void, __cctor, ());
}
