using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRDriverManager {
IL2CPP_REGISTER_METHOD(0x016785A0, void, __ctor, (CVRDriverManager * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x016773B0, uint32_t, GetDriverCount, (CVRDriverManager * __this));
IL2CPP_REGISTER_METHOD(0x016786C0, uint32_t, GetDriverName, (CVRDriverManager * __this, uint32_t nDriver, StringBuilder * pchValue, uint32_t unBufferSize));
}
