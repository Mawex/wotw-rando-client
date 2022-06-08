#include <interception_macros.h>

namespace app::methods::System::OperationCanceledException {
IL2CPP_REGISTER_METHOD(0x002FBC20, CancellationToken, get_CancellationToken, (OperationCanceledException * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_CancellationToken, (OperationCanceledException * __this, CancellationToken value));
IL2CPP_REGISTER_METHOD(0x0227C0E0, void, __ctor, (OperationCanceledException * __this));
IL2CPP_REGISTER_METHOD(0x0227C170, void, __ctor, (OperationCanceledException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0227C190, void, __ctor, (OperationCanceledException * __this, String * message, CancellationToken token));
IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, __ctor, (OperationCanceledException * __this, SerializationInfo * info, StreamingContext context));
}
