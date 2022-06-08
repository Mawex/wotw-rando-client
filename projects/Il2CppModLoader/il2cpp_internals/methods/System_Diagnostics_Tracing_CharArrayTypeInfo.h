#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::CharArrayTypeInfo {
IL2CPP_REGISTER_METHOD(0x01747C20, void, WriteMetadata, (CharArrayTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01747CF0, void, WriteData, (CharArrayTypeInfo * __this, TraceLoggingDataCollector * collector, Char__Array * * value));
IL2CPP_REGISTER_METHOD(0x01747E10, void, __ctor, (CharArrayTypeInfo * __this));
}
