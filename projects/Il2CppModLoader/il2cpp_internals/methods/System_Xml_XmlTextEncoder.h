using namespace app;

namespace app::methods::System::Xml::XmlTextEncoder {
IL2CPP_REGISTER_METHOD(0x01714D10, void, __ctor, (XmlTextEncoder * __this, TextWriter * textWriter));
IL2CPP_REGISTER_METHOD(0x01714D40, void, set_QuoteChar, (XmlTextEncoder * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01714D50, void, StartAttribute, (XmlTextEncoder * __this, bool cacheAttrValue));
IL2CPP_REGISTER_METHOD(0x01714ED0, void, EndAttribute, (XmlTextEncoder * __this));
IL2CPP_REGISTER_METHOD(0x01714F10, String *, get_AttributeValue, (XmlTextEncoder * __this));
IL2CPP_REGISTER_METHOD(0x01714FC0, void, WriteSurrogateChar, (XmlTextEncoder * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHODINFO(0x04754AD0, XmlTextEncoder_WriteSurrogateChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017150F0, void, Write, (XmlTextEncoder * __this, Char__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04794478, XmlTextEncoder_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017155B0, void, WriteSurrogateCharEntity, (XmlTextEncoder * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHODINFO(0x04790170, XmlTextEncoder_WriteSurrogateCharEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017157B0, void, Write, (XmlTextEncoder * __this, String * text));
IL2CPP_REGISTER_METHODINFO(0x0478A598, XmlTextEncoder_Write_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01715DA0, void, WriteRawWithSurrogateChecking, (XmlTextEncoder * __this, String * text));
IL2CPP_REGISTER_METHODINFO(0x0471EFA8, XmlTextEncoder_WriteRawWithSurrogateChecking__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01716010, void, WriteRaw, (XmlTextEncoder * __this, Char__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04708C78, XmlTextEncoder_WriteRaw__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017161F0, void, WriteCharEntity, (XmlTextEncoder * __this, uint16_t ch));
IL2CPP_REGISTER_METHODINFO(0x0473E918, XmlTextEncoder_WriteCharEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01716360, void, WriteEntityRef, (XmlTextEncoder * __this, String * name));
IL2CPP_REGISTER_METHOD(0x017163E0, void, WriteStringFragment, (XmlTextEncoder * __this, String * str, int32_t offset, int32_t count, Char__Array * helperBuffer));
IL2CPP_REGISTER_METHOD(0x017164A0, void, WriteCharEntityImpl, (XmlTextEncoder * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01716560, void, WriteCharEntityImpl, (XmlTextEncoder * __this, String * strVal));
IL2CPP_REGISTER_METHOD(0x01716650, void, WriteEntityRefImpl, (XmlTextEncoder * __this, String * name));
}
