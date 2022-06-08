using namespace app;

namespace app::methods::System::Threading::Semaphore {
IL2CPP_REGISTER_METHOD(0x02A7AD80, void *, CreateSemaphore_internal, (int32_t initialCount, int32_t maximumCount, String * name, int32_t * errorCode));
IL2CPP_REGISTER_METHOD(0x02A7AE10, bool, ReleaseSemaphore_internal, (void * handle, int32_t releaseCount, int32_t * previousCount));
}
