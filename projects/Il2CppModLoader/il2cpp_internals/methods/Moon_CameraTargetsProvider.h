using namespace app;

namespace app::methods::Moon::CameraTargetsProvider {
IL2CPP_REGISTER_METHOD(0x00CC28F0, List_1_Moon_CameraTargetSettings_ *, GetTargets, (CameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, UpdateProvider, (CameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateTargets, (CameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyZoomRange, (CameraTargetsProvider * __this, Vector2 * zoomRange));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyPaddings, (CameraTargetsProvider * __this, Vector2 * horizontalPaddings, Vector2 * verticalPaddings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyLerping, (CameraTargetsProvider * __this, float * cameraTargetLerpSpeed, float * zoomLerpSpeedDec, float * zoomLerpSpeedInc));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CameraTargetsProvider * __this));
}
