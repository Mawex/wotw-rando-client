using namespace app;

namespace app::methods::PickupCameraTarget {
IL2CPP_REGISTER_METHOD(0x01158B30, bool, get_CameraTargetActive, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_CameraTargetPosition, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x01158C50, Vector2, get_CameraTargetPadding, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x01158D00, Vector3, get_CameraInfluencePosition, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x01158D30, void, AdjustCameraTargetWeight, (PickupCameraTarget * __this, float * weight, CameraTargetData * data, Vector3 primaryTargetPosition));
IL2CPP_REGISTER_METHOD(0x01158E60, float, get_CameraInfluenceMinDist, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x01158F00, float, get_CameraInfluenceMaxDist, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x00A372E0, Vector2, get_CameraZoomFactor, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x00417920, CameraTargetType__Enum, get_TargetType, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x01158FA0, void, GetTargetData, (PickupCameraTarget * __this, CameraTargetData * * data));
IL2CPP_REGISTER_METHOD(0x01159200, void, OnEnable, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x01157A00, void, OnDisable, (PickupCameraTarget * __this));
IL2CPP_REGISTER_METHOD(0x01159400, void, __ctor, (PickupCameraTarget * __this));
}
