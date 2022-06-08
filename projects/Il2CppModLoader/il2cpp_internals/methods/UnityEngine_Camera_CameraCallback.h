using namespace app;

namespace app::methods::UnityEngine::Camera_CameraCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Camera_CameraCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (Camera_CameraCallback * __this, Camera * cam));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (Camera_CameraCallback * __this, Camera * cam, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Camera_CameraCallback * __this, IAsyncResult * result));
}
