#include <interception_macros.h>

namespace app::methods::KwolokBossCameraTargetsProvider {
IL2CPP_REGISTER_METHOD(0x0124AA20, float, get_KwolokCutOffDistance, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0124AA70, void, Awake, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0124AC30, void, OnDestroy, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0124ADD0, void, OnRestoreCheckpoint, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F778, KwolokBossCameraTargetsProvider_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124AE20, void, UpdateTargets, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0124AF40, void, UpdateKwolokPosition, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0124B180, List_1_Moon_CameraTargetSettings_ *, GetTargets, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0124B970, void, ModifyZoomRange, (KwolokBossCameraTargetsProvider * __this, Vector2 * zoomRange));
IL2CPP_REGISTER_METHOD(0x0124BA20, void, ModifyPaddings, (KwolokBossCameraTargetsProvider * __this, Vector2 * horizontalPaddings, Vector2 * verticalPaddings));
IL2CPP_REGISTER_METHOD(0x0124BB70, void, ModifyLerping, (KwolokBossCameraTargetsProvider * __this, float * cameraTargetLerpSpeed, float * zoomLerpSpeedDec, float * zoomLerpSpeedInc));
IL2CPP_REGISTER_METHOD(0x0124BC10, Vector3, GetOriPredictedPosition, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0124BD80, Vector3, GetPredictedGroundPosition, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x01212720, Vector3, GetKwolokPos, (KwolokBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0124BF40, void, __ctor, (KwolokBossCameraTargetsProvider * __this));
}
