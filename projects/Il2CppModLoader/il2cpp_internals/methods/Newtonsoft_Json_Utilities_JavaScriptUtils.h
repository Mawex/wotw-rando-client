using namespace app;

namespace app::methods::Newtonsoft::Json::Utilities::JavaScriptUtils {
IL2CPP_REGISTER_METHOD(0x0301B750, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0301C5B0, Boolean__Array *, GetCharEscapeFlags, (StringEscapeHandling__Enum stringEscapeHandling, uint16_t quoteChar));
IL2CPP_REGISTER_METHOD(0x0301C6E0, bool, ShouldEscapeJavaScriptString, (String * s, Boolean__Array * charEscapeFlags));
IL2CPP_REGISTER_METHOD(0x0301C770, void, WriteEscapedJavaScriptString, (TextWriter * writer, String * s, uint16_t delimiter, bool appendDelimiters, Boolean__Array * charEscapeFlags, StringEscapeHandling__Enum stringEscapeHandling, IArrayPool_1_System_Char_ * bufferPool, Char__Array * * writeBuffer));
IL2CPP_REGISTER_METHOD(0x0301CDE0, String *, ToEscapedJavaScriptString, (String * value, uint16_t delimiter, bool appendDelimiters, StringEscapeHandling__Enum stringEscapeHandling));
IL2CPP_REGISTER_METHOD(0x0301CFE0, int32_t, FirstCharToEscape, (String * s, Boolean__Array * charEscapeFlags, StringEscapeHandling__Enum stringEscapeHandling));
IL2CPP_REGISTER_METHOD(0x0301D0B0, bool, TryGetDateFromConstructorJson, (JsonReader * reader, DateTime * dateTime, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x0301D850, bool, TryGetDateConstructorValue, (JsonReader * reader, Nullable_1_Int64_ * integer, String * * errorMessage));
}
