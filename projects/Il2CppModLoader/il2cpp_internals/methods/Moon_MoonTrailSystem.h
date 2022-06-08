using namespace app;

namespace app::methods::Moon::MoonTrailSystem {
IL2CPP_REGISTER_METHOD(0x025634F0, Mesh *, GetUniversalRenderMesh, (int32_t particleCount));
IL2CPP_REGISTER_METHOD(0x02563EB0, ComputeBuffer *, GetFreeComputeBuffer, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02564340, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x025644C0, void, InitInstance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02564550, MoonTrailSystem *, GetInstance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x025647E0, void, AllocateComputeBuffers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02564C20, void, FreeComputeBuffers, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02564E00, void, LateUpdate, (MoonTrailSystem * __this));
IL2CPP_REGISTER_METHOD(0x02565660, void, __ctor, (MoonTrailSystem * __this));
IL2CPP_REGISTER_METHOD(0x025656F0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x025657B0, int32_t, _GetUniversalRenderMesh_g__PositionOfFirstBit_8_0, (int32_t n));
}
