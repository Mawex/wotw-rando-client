#include <interception_macros.h>

namespace app::methods::KwolokBossCameraTargetsProvider {
IL2CPP_REGISTER_METHOD(0x0124AA20, float, get_KwolokCutOffDistance, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0124AA70, void, Awake, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0124AC30, void, OnDestroy, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0124ADD0, void, OnRestoreCheckpoint, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0477F778, KwolokBossCameraTargetsProvider_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0124AE20, void, UpdateTargets, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0124AF40, void, UpdateKwolokPosition, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0124B180, List_1_Moon_CameraTargetSettings_ *, GetTargets, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0124B970, void, ModifyZoomRange, (app::KwolokBossCameraTargetsProvider * this_ptr, app::Vector2 * zoom_range));
IL2CPP_REGISTER_METHOD(0x0124BA20, void, ModifyPaddings, (app::KwolokBossCameraTargetsProvider * this_ptr, app::Vector2 * horizontal_paddings, app::Vector2 * vertical_paddings));
IL2CPP_REGISTER_METHOD(0x0124BB70, void, ModifyLerping, (app::KwolokBossCameraTargetsProvider * this_ptr, app::float * camera_target_lerp_speed, app::float * zoom_lerp_speed_dec, app::float * zoom_lerp_speed_inc));
IL2CPP_REGISTER_METHOD(0x0124BC10, Vector3, GetOriPredictedPosition, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0124BD80, Vector3, GetPredictedGroundPosition, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x01212720, Vector3, GetKwolokPos, (app::KwolokBossCameraTargetsProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0124BF40, void, __ctor, (app::KwolokBossCameraTargetsProvider * this_ptr));
}
