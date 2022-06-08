#include <interception_macros.h>

namespace app::methods::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Count, (VoronoiFactory_ObjectPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_Capacity, (VoronoiFactory_ObjectPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E6DC0, void, set_Capacity, (VoronoiFactory_ObjectPool_1_System_Object_ * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0225C010, void, __ctor, (VoronoiFactory_ObjectPool_1_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0225C080, void, __ctor, (VoronoiFactory_ObjectPool_1_System_Object_ * __this, Object__Array * pool));
IL2CPP_REGISTER_METHOD(0x0225C0A0, bool, TryGet, (VoronoiFactory_ObjectPool_1_System_Object_ * __this, Object * * obj));
IL2CPP_REGISTER_METHOD(0x0225C100, void, Put, (VoronoiFactory_ObjectPool_1_System_Object_ * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x002FC780, void, Release, (VoronoiFactory_ObjectPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0225C190, void, Resize, (VoronoiFactory_ObjectPool_1_System_Object_ * __this, int32_t size));
}
