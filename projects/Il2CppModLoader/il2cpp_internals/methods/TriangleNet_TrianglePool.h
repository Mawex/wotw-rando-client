using namespace app;

namespace app::methods::TriangleNet::TrianglePool {
IL2CPP_REGISTER_METHOD(0x02AA5EB0, void, __ctor, (TrianglePool * __this));
IL2CPP_REGISTER_METHOD(0x02AA60B0, Triangle *, Get, (TrianglePool * __this));
IL2CPP_REGISTER_METHOD(0x02AA64D0, void, Release, (TrianglePool * __this, Triangle * triangle));
IL2CPP_REGISTER_METHOD(0x02AA6580, TrianglePool *, Restart, (TrianglePool * __this));
IL2CPP_REGISTER_METHOD(0x02AA6730, IEnumerable_1_TriangleNet_Topology_Triangle_ *, Sample, (TrianglePool * __this, int32_t k, Random * random));
IL2CPP_REGISTER_METHOD(0x02AA68E0, void, Cleanup, (TrianglePool * __this, Triangle * triangle));
IL2CPP_REGISTER_METHOD(0x02AA69B0, void, Add, (TrianglePool * __this, Triangle * item));
IL2CPP_REGISTER_METHODINFO(0x04785CD8, TrianglePool_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AA6A00, void, Clear, (TrianglePool * __this));
IL2CPP_REGISTER_METHOD(0x02AA6B60, bool, Contains, (TrianglePool * __this, Triangle * item));
IL2CPP_REGISTER_METHOD(0x02AA6C10, void, CopyTo, (TrianglePool * __this, Triangle__Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x02AA6E20, int32_t, get_Count, (TrianglePool * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (TrianglePool * __this));
IL2CPP_REGISTER_METHOD(0x02AA6EB0, bool, Remove, (TrianglePool * __this, Triangle * item));
IL2CPP_REGISTER_METHODINFO(0x04756B18, TrianglePool_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AA6F00, IEnumerator_1_TriangleNet_Topology_Triangle_ *, GetEnumerator, (TrianglePool * __this));
IL2CPP_REGISTER_METHOD(0x02AA7060, IEnumerator *, IEnumerable_GetEnumerator, (TrianglePool * __this));
}
