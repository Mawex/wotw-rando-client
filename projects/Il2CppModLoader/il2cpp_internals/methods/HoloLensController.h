using namespace app;

namespace app::methods::HoloLensController {
IL2CPP_REGISTER_METHOD(0x00B5B280, void, Start, (HoloLensController * __this));
IL2CPP_REGISTER_METHOD(0x00B5B3A0, void, FixedUpdate, (HoloLensController * __this));
IL2CPP_REGISTER_METHOD(0x00B5B420, void, WriteHoloLensData, (HoloLensController * __this));
IL2CPP_REGISTER_METHOD(0x00B5C2B0, void, WriteCallback, (HoloLensController * __this, IAsyncResult * ar));
IL2CPP_REGISTER_METHODINFO(0x0472B480, HoloLensController_WriteCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006086C0, void, __ctor, (HoloLensController * __this));
IL2CPP_REGISTER_METHOD(0x00B5C450, void, __cctor, (MethodInfo * method));
}
