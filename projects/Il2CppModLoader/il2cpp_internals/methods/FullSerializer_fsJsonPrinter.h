#include <interception_macros.h>

namespace app::methods::FullSerializer::fsJsonPrinter {
IL2CPP_REGISTER_METHOD(0x0150FB10, void, InsertSpacing, (TextWriter * stream, int32_t count));
IL2CPP_REGISTER_METHOD(0x0150FBD0, String *, EscapeString, (String * str));
IL2CPP_REGISTER_METHOD(0x01510080, void, BuildCompressedString, (fsData * data, TextWriter * stream));
IL2CPP_REGISTER_METHOD(0x015105A0, void, BuildPrettyString, (fsData * data, TextWriter * stream, int32_t depth));
IL2CPP_REGISTER_METHOD(0x01510BE0, void, PrettyJson, (fsData * data, TextWriter * outputStream));
IL2CPP_REGISTER_METHOD(0x01510BF0, String *, PrettyJson, (fsData * data));
IL2CPP_REGISTER_METHOD(0x01510ED0, void, CompressedJson, (fsData * data, StreamWriter * outputStream));
IL2CPP_REGISTER_METHOD(0x01510EE0, String *, CompressedJson, (fsData * data));
IL2CPP_REGISTER_METHOD(0x015111C0, String *, ConvertDoubleToString, (double d));
}
