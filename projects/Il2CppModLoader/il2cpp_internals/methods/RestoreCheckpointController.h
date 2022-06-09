#include <interception_macros.h>

namespace app::methods::RestoreCheckpointController {
IL2CPP_REGISTER_METHOD(0x0090B8A0, void, RestoreCheckpoint, (app::RestoreCheckpointController * this_ptr, bool load_from_disc));
IL2CPP_REGISTER_METHOD(0x0090C160, IEnumerator *, MoveCameraInstantlyAgain, (app::RestoreCheckpointController * this_ptr));
IL2CPP_REGISTER_METHOD(0x0090C2A0, void, FadeOutComplete, (app::RestoreCheckpointController * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047189B8, RestoreCheckpointController_FadeOutComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0090C390, void, FinishLoading, (app::RestoreCheckpointController * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04733538, RestoreCheckpointController_FinishLoading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0090C610, bool, ShouldSpawnOnClosestInvisibleCheckpoint, ());
IL2CPP_REGISTER_METHOD(0x0090C660, Vector3, FindClosestInvisibleCheckpoint, (app::Vector3 position));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::RestoreCheckpointController * this_ptr));
IL2CPP_REGISTER_METHOD(0x016AAB90, Object *, FindClosestTypeToPosition_1, (app::Vector3 position));
IL2CPP_REGISTER_METHOD(0x016AAB90, InvisibleCheckpoint *, FindClosestTypeToPosition_2, (app::Vector3 position));
IL2CPP_REGISTER_METHODINFO(0x04706B88, RestoreCheckpointController_FindClosestTypeToPosition_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AAB90, SeinPlaceholder *, FindClosestTypeToPosition_3, (app::Vector3 position));
IL2CPP_REGISTER_METHODINFO(0x047164D0, RestoreCheckpointController_FindClosestTypeToPosition_2__MethodInfo);
}
