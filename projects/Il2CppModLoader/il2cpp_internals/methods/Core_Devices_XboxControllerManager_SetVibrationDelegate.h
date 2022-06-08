using namespace app;

namespace app::methods::Core::Devices::XboxControllerManager_SetVibrationDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XboxControllerManager_SetVibrationDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x011F8C00, void, Invoke, (XboxControllerManager_SetVibrationDelegate * __this, uint32_t controllerIndex, Vector2 magnitude));
IL2CPP_REGISTER_METHOD(0x011F8F80, IAsyncResult *, BeginInvoke, (XboxControllerManager_SetVibrationDelegate * __this, uint32_t controllerIndex, Vector2 magnitude, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XboxControllerManager_SetVibrationDelegate * __this, IAsyncResult * result));
}
