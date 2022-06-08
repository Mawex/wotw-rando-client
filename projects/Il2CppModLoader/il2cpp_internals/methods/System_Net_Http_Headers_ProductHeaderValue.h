using namespace app;

namespace app::methods::System::Net::Http::Headers::ProductHeaderValue {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ProductHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (ProductHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (ProductHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Version, (ProductHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Version, (ProductHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (ProductHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D13260, bool, Equals, (ProductHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D13550, int32_t, GetHashCode, (ProductHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D135E0, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_ProductHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x047500C8, ProductHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D13760, bool, TryParseElement, (Lexer * lexer, ProductHeaderValue * * parsedValue, Token * t));
IL2CPP_REGISTER_METHODINFO(0x04785B70, ProductHeaderValue_TryParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D13A70, String *, ToString, (ProductHeaderValue * __this));
}
