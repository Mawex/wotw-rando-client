using namespace app;

namespace app::methods::RootMotion::CameraController {
IL2CPP_REGISTER_METHOD(0x00623240, float, get_x, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x00623250, void, set_x, (CameraController * __this, float value));
IL2CPP_REGISTER_METHOD(0x00623260, float, get_y, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x00623270, void, set_y, (CameraController * __this, float value));
IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_distanceTarget, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x007F58E0, void, set_distanceTarget, (CameraController * __this, float value));
IL2CPP_REGISTER_METHOD(0x022065F0, void, Awake, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x022068F0, void, Update, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x02206960, void, FixedUpdate, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x022069D0, void, LateUpdate, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x02206A40, void, UpdateInput, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x02206E90, void, UpdateTransform, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x02206EF0, void, UpdateTransform, (CameraController * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x022078E0, float, get_zoomAdd, (CameraController * __this));
IL2CPP_REGISTER_METHOD(0x022079D0, float, ClampAngle, (CameraController * __this, float angle, float min, float max));
IL2CPP_REGISTER_METHOD(0x02207AC0, void, __ctor, (CameraController * __this));
}
