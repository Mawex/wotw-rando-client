using namespace app;

namespace app::methods::Mono::Xml::SmallXmlParser {
IL2CPP_REGISTER_METHOD(0x02287290, void, __ctor, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x02287650, Exception *, Error, (SmallXmlParser * __this, String * msg));
IL2CPP_REGISTER_METHOD(0x022878A0, Exception *, UnexpectedEndError, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x022879F0, bool, IsNameChar, (SmallXmlParser * __this, uint16_t c, bool start));
IL2CPP_REGISTER_METHOD(0x02287B50, bool, IsWhitespace, (SmallXmlParser * __this, int32_t c));
IL2CPP_REGISTER_METHOD(0x02287B70, void, SkipWhitespaces, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x02287B80, void, HandleWhitespaces, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x02287E00, void, SkipWhitespaces, (SmallXmlParser * __this, bool expected));
IL2CPP_REGISTER_METHODINFO(0x04727108, SmallXmlParser_SkipWhitespaces_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02287F30, int32_t, Peek, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x02287F60, int32_t, Read, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x02287FC0, void, Expect, (SmallXmlParser * __this, int32_t c));
IL2CPP_REGISTER_METHODINFO(0x04794B28, SmallXmlParser_Expect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02288110, String *, ReadUntil, (SmallXmlParser * __this, uint16_t until, bool handleReferences));
IL2CPP_REGISTER_METHODINFO(0x0476F4A0, SmallXmlParser_ReadUntil__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02288410, String *, ReadName, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E480, SmallXmlParser_ReadName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02288660, void, Parse, (SmallXmlParser * __this, TextReader * input, SmallXmlParser_IContentHandler * handler));
IL2CPP_REGISTER_METHODINFO(0x04768358, SmallXmlParser_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02288880, void, Cleanup, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x02288920, void, ReadContent, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHODINFO(0x0478E208, SmallXmlParser_ReadContent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022890B0, void, HandleBufferedContent, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x022891E0, void, ReadCharacters, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x02289450, void, ReadReference, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D538, SmallXmlParser_ReadReference__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02289720, int32_t, ReadCharacterReference, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHOD(0x022898B0, void, ReadAttribute, (SmallXmlParser * __this, SmallXmlParser_AttrListImpl * a));
IL2CPP_REGISTER_METHODINFO(0x0473DA08, SmallXmlParser_ReadAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02289B10, void, ReadCDATASection, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHODINFO(0x04784FF8, SmallXmlParser_ReadCDATASection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228A080, void, ReadComment, (SmallXmlParser * __this));
IL2CPP_REGISTER_METHODINFO(0x04799F78, SmallXmlParser_ReadComment__MethodInfo);
}
