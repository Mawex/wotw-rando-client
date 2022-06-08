#include <interception_macros.h>

namespace app::methods::System::Threading::Interlocked {
IL2CPP_REGISTER_METHOD(0x027DE190, int32_t, CompareExchange, (int32_t * location1, int32_t value, int32_t comparand));
IL2CPP_REGISTER_METHOD(0x027DE1A0, int32_t, CompareExchange, (int32_t * location1, int32_t value, int32_t comparand, bool * succeeded));
IL2CPP_REGISTER_METHOD(0x027DE1B0, Object *, CompareExchange, (Object * * location1, Object * value, Object * comparand));
IL2CPP_REGISTER_METHOD(0x027DE1C0, float, CompareExchange, (float * location1, float value, float comparand));
IL2CPP_REGISTER_METHOD(0x027DE1F0, int32_t, Decrement, (int32_t * location));
IL2CPP_REGISTER_METHOD(0x027DE200, int32_t, Increment, (int32_t * location));
IL2CPP_REGISTER_METHOD(0x027DE210, int64_t, Increment, (int64_t * location));
IL2CPP_REGISTER_METHOD(0x027DE220, int32_t, Exchange, (int32_t * location1, int32_t value));
IL2CPP_REGISTER_METHOD(0x027DE230, Object *, Exchange, (Object * * location1, Object * value));
IL2CPP_REGISTER_METHOD(0x027DE240, float, Exchange, (float * location1, float value));
IL2CPP_REGISTER_METHOD(0x027DE1B0, int64_t, CompareExchange, (int64_t * location1, int64_t value, int64_t comparand));
IL2CPP_REGISTER_METHOD(0x027DE1B0, void *, CompareExchange, (void * * location1, void * value, void * comparand));
IL2CPP_REGISTER_METHOD(0x027DE260, double, CompareExchange, (double * location1, double value, double comparand));
IL2CPP_REGISTER_METHOD(0x027DE230, int64_t, Exchange, (int64_t * location1, int64_t value));
IL2CPP_REGISTER_METHOD(0x027DE230, void *, Exchange, (void * * location1, void * value));
IL2CPP_REGISTER_METHOD(0x027DE290, double, Exchange, (double * location1, double value));
IL2CPP_REGISTER_METHOD(0x027DE2B0, int64_t, Read, (int64_t * location));
IL2CPP_REGISTER_METHOD(0x027DE2C0, int32_t, Add, (int32_t * location1, int32_t value));
IL2CPP_REGISTER_METHOD(0x023437F0, void, MemoryBarrier, ());
}
