#include <interception_macros.h>

namespace app::methods::System_Threading::AbandonedMutexException {
IL2CPP_REGISTER_METHOD(0x027D7FD0, void, __ctor_1, (app::AbandonedMutexException * this_ptr));
IL2CPP_REGISTER_METHOD(0x027D8070, void, __ctor_2, (app::AbandonedMutexException * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x027D80A0, void, __ctor_3, (app::AbandonedMutexException * this_ptr, int32_t location, app::WaitHandle * handle));
IL2CPP_REGISTER_METHOD(0x027D81D0, void, SetupException, (app::AbandonedMutexException * this_ptr, int32_t location, app::WaitHandle * handle));
IL2CPP_REGISTER_METHOD(0x027D8280, void, __ctor_4, (app::AbandonedMutexException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
}
