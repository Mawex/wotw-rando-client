using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRChaperone {
IL2CPP_REGISTER_METHOD(0x01677280, void, __ctor, (CVRChaperone * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x016773B0, ChaperoneCalibrationState__Enum, GetCalibrationState, (CVRChaperone * __this));
IL2CPP_REGISTER_METHOD(0x016773D0, bool, GetPlayAreaSize, (CVRChaperone * __this, float * pSizeX, float * pSizeZ));
IL2CPP_REGISTER_METHOD(0x01677400, bool, GetPlayAreaRect, (CVRChaperone * __this, HmdQuad_t * rect));
IL2CPP_REGISTER_METHOD(0x00F6DFD0, void, ReloadInfo, (CVRChaperone * __this));
IL2CPP_REGISTER_METHOD(0x01677420, void, SetSceneColor, (CVRChaperone * __this, HmdColor_t color));
IL2CPP_REGISTER_METHOD(0x01677450, void, GetBoundsColor, (CVRChaperone * __this, HmdColor_t * pOutputColorArray, int32_t nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t * pOutputCameraColor));
IL2CPP_REGISTER_METHOD(0x01677480, bool, AreBoundsVisible, (CVRChaperone * __this));
IL2CPP_REGISTER_METHOD(0x016774A0, void, ForceBoundsVisible, (CVRChaperone * __this, bool bForce));
}
