#include <interception_macros.h>

namespace app::methods::System::ExecutionEngineException {
IL2CPP_REGISTER_METHOD(0x01A1C810, void, __ctor, (ExecutionEngineException * __this));
IL2CPP_REGISTER_METHOD(0x01A1C8A0, void, __ctor, (ExecutionEngineException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01A1C8C0, void, __ctor, (ExecutionEngineException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor, (ExecutionEngineException * __this, SerializationInfo * info, StreamingContext context));
}
