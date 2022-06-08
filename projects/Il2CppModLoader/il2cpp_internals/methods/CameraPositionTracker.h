using namespace app;

namespace app::methods::CameraPositionTracker {
IL2CPP_REGISTER_METHOD(0x03119EA0, void, TrackCamera, (Camera * camera));
IL2CPP_REGISTER_METHOD(0x0311A3B0, bool, GetTrackedCameraProps, (Camera * camera, Vector3 * cameraPosition, Matrix4x4 * viewProjMatrix));
IL2CPP_REGISTER_METHOD(0x0311A540, void, TrackRegisteredAllCameras, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0311A660, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0311A760, void, OnEnable, (CameraPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x0311A840, void, OnDisable, (CameraPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x0311A900, void, FixedUpdate, (CameraPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x00447380, void, LateUpdate, (CameraPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostRender, (CameraPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CameraPositionTracker * __this));
IL2CPP_REGISTER_METHOD(0x0311A9C0, void, __cctor, (MethodInfo * method));
}
