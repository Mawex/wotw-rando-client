#include <interception_macros.h>

namespace app::methods::System::Threading::AbandonedMutexException {
IL2CPP_REGISTER_METHOD(0x027D7FD0, void, __ctor, (AbandonedMutexException * __this));
IL2CPP_REGISTER_METHOD(0x027D8070, void, __ctor, (AbandonedMutexException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x027D80A0, void, __ctor, (AbandonedMutexException * __this, int32_t location, WaitHandle * handle));
IL2CPP_REGISTER_METHOD(0x027D81D0, void, SetupException, (AbandonedMutexException * __this, int32_t location, WaitHandle * handle));
IL2CPP_REGISTER_METHOD(0x027D8280, void, __ctor, (AbandonedMutexException * __this, SerializationInfo * info, StreamingContext context));
}
