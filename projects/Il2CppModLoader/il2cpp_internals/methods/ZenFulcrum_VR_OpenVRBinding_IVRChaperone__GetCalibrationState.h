using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetCalibrationState {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperone_GetCalibrationState * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167F180, ChaperoneCalibrationState__Enum, Invoke, (IVRChaperone_GetCalibrationState * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (IVRChaperone_GetCalibrationState * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, ChaperoneCalibrationState__Enum, EndInvoke, (IVRChaperone_GetCalibrationState * __this, IAsyncResult * result));
}
