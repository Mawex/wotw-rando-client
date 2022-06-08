using namespace app;

namespace app::methods::MS::Internal::Xml::XPath::XPathScanner {
IL2CPP_REGISTER_METHOD(0x021DFD20, void, __ctor, (XPathScanner * __this, String * xpathExpr));
IL2CPP_REGISTER_METHODINFO(0x047665A8, XPathScanner__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_SourceText, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x01E6D800, uint16_t, get_CurerntChar, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x021DFE30, bool, NextChar, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, XPathScanner_LexKind__Enum, get_Kind, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Prefix, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_StringValue, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x021DFE90, double, get_NumberValue, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_CanBeFunction, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x021DFEA0, void, SkipSpace, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x021DFF40, bool, NextLex, (XPathScanner * __this));
IL2CPP_REGISTER_METHODINFO(0x0470BEE0, XPathScanner_NextLex__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E0560, double, ScanNumber, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x021E0760, double, ScanFraction, (XPathScanner * __this));
IL2CPP_REGISTER_METHOD(0x021E08A0, String *, ScanString, (XPathScanner * __this));
IL2CPP_REGISTER_METHODINFO(0x047218F0, XPathScanner_ScanString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021E0A50, String *, ScanName, (XPathScanner * __this));
}
