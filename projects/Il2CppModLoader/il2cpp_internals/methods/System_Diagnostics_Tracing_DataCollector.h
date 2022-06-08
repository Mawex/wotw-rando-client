#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::DataCollector {
IL2CPP_REGISTER_METHOD(0x0013DDE0, void, Enable, (DataCollector__Boxed * __this, uint8_t * scratch, int32_t scratchSize, EventSource_EventData * datas, int32_t dataCount, GCHandle * pins, int32_t pinCount));
IL2CPP_REGISTER_METHOD(0x0013DE30, void, Disable, (DataCollector__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013DE40, EventSource_EventData *, Finish, (DataCollector__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013DE60, void, AddScalar, (DataCollector__Boxed * __this, Void * value, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x04782650, DataCollector_AddScalar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013DE70, void, AddBinary, (DataCollector__Boxed * __this, String * value, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0470F498, DataCollector_AddBinary__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013DE80, void, AddBinary, (DataCollector__Boxed * __this, Array * value, int32_t size));
IL2CPP_REGISTER_METHOD(0x0013DEA0, void, AddArray, (DataCollector__Boxed * __this, Array * value, int32_t length, int32_t itemSize));
IL2CPP_REGISTER_METHODINFO(0x0477D198, DataCollector_AddArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013DEB0, int32_t, BeginBufferedArray, (DataCollector__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013DEE0, void, EndBufferedArray, (DataCollector__Boxed * __this, int32_t bookmark, int32_t count));
IL2CPP_REGISTER_METHOD(0x0013DEF0, void, BeginBuffered, (DataCollector__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013DF10, void, EndBuffered, (DataCollector__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013DF60, void, EnsureBuffer, (DataCollector__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013DF80, void, EnsureBuffer, (DataCollector__Boxed * __this, int32_t additionalSize));
IL2CPP_REGISTER_METHOD(0x0013DFA0, void, GrowBuffer, (DataCollector__Boxed * __this, int32_t required));
IL2CPP_REGISTER_METHOD(0x0013DFB0, void, PinArray, (DataCollector__Boxed * __this, Object * value, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x047200B8, DataCollector_PinArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013DFC0, void, ScalarsBegin, (DataCollector__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04712770, DataCollector_ScalarsBegin__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013DFD0, void, ScalarsEnd, (DataCollector__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0476ED00, DataCollector_ScalarsEnd__MethodInfo);
}
