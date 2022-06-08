using namespace app;

namespace app::methods::System::Net::Http::Headers::ProductInfoHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D13B10, void, __ctor, (ProductInfoHeaderValue * __this, ProductHeaderValue * product));
IL2CPP_REGISTER_METHODINFO(0x0471BE88, ProductInfoHeaderValue__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ProductInfoHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Comment, (ProductInfoHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Comment, (ProductInfoHeaderValue * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, ProductHeaderValue *, get_Product, (ProductInfoHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Product, (ProductInfoHeaderValue * __this, ProductHeaderValue * value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (ProductInfoHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D13BD0, bool, Equals, (ProductInfoHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D13D10, int32_t, GetHashCode, (ProductInfoHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D13D60, bool, TryParse, (String * input, int32_t minimalCount, List_1_System_Net_Http_Headers_ProductInfoHeaderValue_ * * result));
IL2CPP_REGISTER_METHODINFO(0x0475BEA8, ProductInfoHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D14020, bool, TryParseElement, (Lexer * lexer, ProductInfoHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHOD(0x02D144F0, String *, ToString, (ProductInfoHeaderValue * __this));
}
