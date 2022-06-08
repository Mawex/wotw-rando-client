#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingDataCollector {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TraceLoggingDataCollector * __this));
IL2CPP_REGISTER_METHOD(0x01A09790, int32_t, BeginBufferedArray, (TraceLoggingDataCollector * __this));
IL2CPP_REGISTER_METHOD(0x01A09860, void, EndBufferedArray, (TraceLoggingDataCollector * __this, int32_t bookmark, int32_t count));
IL2CPP_REGISTER_METHOD(0x01A09930, void, AddScalar, (TraceLoggingDataCollector * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01A09A00, void, AddScalar, (TraceLoggingDataCollector * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x01A09AD0, void, AddScalar, (TraceLoggingDataCollector * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01A09BA0, void, AddScalar, (TraceLoggingDataCollector * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x01A09C70, void, AddScalar, (TraceLoggingDataCollector * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01A09D40, void, AddScalar, (TraceLoggingDataCollector * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01A09E10, void, AddScalar, (TraceLoggingDataCollector * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01A09EE0, void, AddScalar, (TraceLoggingDataCollector * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01A09FA0, void, AddScalar, (TraceLoggingDataCollector * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x01A0A060, void, AddScalar, (TraceLoggingDataCollector * __this, void * value));
IL2CPP_REGISTER_METHOD(0x01A0A120, void, AddScalar, (TraceLoggingDataCollector * __this, void * value));
IL2CPP_REGISTER_METHOD(0x01A0A200, void, AddScalar, (TraceLoggingDataCollector * __this, float value));
IL2CPP_REGISTER_METHOD(0x01A0A2D0, void, AddScalar, (TraceLoggingDataCollector * __this, double value));
IL2CPP_REGISTER_METHOD(0x01A0A3A0, void, AddScalar, (TraceLoggingDataCollector * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01A0A470, void, AddScalar, (TraceLoggingDataCollector * __this, Guid value));
IL2CPP_REGISTER_METHOD(0x01A0A540, void, AddBinary, (TraceLoggingDataCollector * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01A0A650, void, AddBinary, (TraceLoggingDataCollector * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0A760, void, AddArray, (TraceLoggingDataCollector * __this, Boolean__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0A870, void, AddArray, (TraceLoggingDataCollector * __this, SByte__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0A980, void, AddArray, (TraceLoggingDataCollector * __this, Int16__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0AA90, void, AddArray, (TraceLoggingDataCollector * __this, UInt16__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0ABA0, void, AddArray, (TraceLoggingDataCollector * __this, Int32__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0ACB0, void, AddArray, (TraceLoggingDataCollector * __this, UInt32__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0ADC0, void, AddArray, (TraceLoggingDataCollector * __this, Int64__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0AED0, void, AddArray, (TraceLoggingDataCollector * __this, UInt64__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0AFE0, void, AddArray, (TraceLoggingDataCollector * __this, IntPtr__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0B0F0, void, AddArray, (TraceLoggingDataCollector * __this, UIntPtr__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0B230, void, AddArray, (TraceLoggingDataCollector * __this, Single__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0B340, void, AddArray, (TraceLoggingDataCollector * __this, Double__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0B450, void, AddArray, (TraceLoggingDataCollector * __this, Char__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0B560, void, AddArray, (TraceLoggingDataCollector * __this, Guid__Array * value));
IL2CPP_REGISTER_METHOD(0x01A0B670, void, __cctor, ());
}
