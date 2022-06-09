#include <interception_macros.h>

namespace app::methods::System::ExecutionEngineException {
IL2CPP_REGISTER_METHOD(0x01A1C810, void, __ctor_1, (app::ExecutionEngineException * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A1C8A0, void, __ctor_2, (app::ExecutionEngineException * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x01A1C8C0, void, __ctor_3, (app::ExecutionEngineException * this_ptr, app::String * message, app::Exception * inner_exception));
IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor_4, (app::ExecutionEngineException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
