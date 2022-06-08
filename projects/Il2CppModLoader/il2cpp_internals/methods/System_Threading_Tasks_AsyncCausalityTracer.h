using namespace app;

namespace app::methods::System::Threading::Tasks::AsyncCausalityTracer {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_LoggingOn, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceOperationCreation, (CausalityTraceLevel__Enum traceLevel, int32_t taskId, String * operationName, uint64_t relatedContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceOperationCompletion, (CausalityTraceLevel__Enum traceLevel, int32_t taskId, AsyncCausalityStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceOperationRelation, (CausalityTraceLevel__Enum traceLevel, int32_t taskId, CausalityRelation__Enum relation));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceSynchronousWorkStart, (CausalityTraceLevel__Enum traceLevel, int32_t taskId, CausalitySynchronousWork__Enum work));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TraceSynchronousWorkCompletion, (CausalityTraceLevel__Enum traceLevel, CausalitySynchronousWork__Enum work));
}
