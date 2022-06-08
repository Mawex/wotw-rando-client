#include <interception_macros.h>

namespace app::methods::System::IO::Pipes::NamedPipeServerStream {
IL2CPP_REGISTER_METHOD(0x01F99640, void, __ctor, (NamedPipeServerStream * __this, String * pipeName, PipeDirection__Enum direction, int32_t maxNumberOfServerInstances, PipeTransmissionMode__Enum transmissionMode, PipeOptions__Enum options, int32_t inBufferSize, int32_t outBufferSize));
IL2CPP_REGISTER_METHODINFO(0x04751820, NamedPipeServerStream__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A93850, void, Finalize, (NamedPipeServerStream * __this));
IL2CPP_REGISTER_METHOD(0x01F996B0, void, WaitForConnection, (NamedPipeServerStream * __this));
}
