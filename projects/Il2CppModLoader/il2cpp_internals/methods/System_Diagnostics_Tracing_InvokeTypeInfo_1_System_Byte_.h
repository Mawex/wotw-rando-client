#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::InvokeTypeInfo_1_System_Byte_ {
IL2CPP_REGISTER_METHOD(0x02B98CC0, void, __ctor, (app::InvokeTypeInfo_1_System_Byte_ * this_ptr, app::TypeAnalysis * type_analysis));
IL2CPP_REGISTER_METHOD(0x02B98E80, void, WriteMetadata, (app::InvokeTypeInfo_1_System_Byte_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02B98F50, void, WriteData, (app::InvokeTypeInfo_1_System_Byte_ * this_ptr, app::TraceLoggingDataCollector * collector, app::uint8_t * value));
IL2CPP_REGISTER_METHOD(0x02B995C0, Object *, GetData, (app::InvokeTypeInfo_1_System_Byte_ * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02B99510, void, WriteObjectData, (app::InvokeTypeInfo_1_System_Byte_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * value_obj));
}
