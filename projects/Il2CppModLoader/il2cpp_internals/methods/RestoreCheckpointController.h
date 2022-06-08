using namespace app;

namespace app::methods::RestoreCheckpointController {
IL2CPP_REGISTER_METHOD(0x0090B8A0, void, RestoreCheckpoint, (RestoreCheckpointController * __this, bool loadFromDisc));
IL2CPP_REGISTER_METHOD(0x0090C160, IEnumerator *, MoveCameraInstantlyAgain, (RestoreCheckpointController * __this));
IL2CPP_REGISTER_METHOD(0x0090C2A0, void, FadeOutComplete, (RestoreCheckpointController * __this));
IL2CPP_REGISTER_METHODINFO(0x047189B8, RestoreCheckpointController_FadeOutComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0090C390, void, FinishLoading, (RestoreCheckpointController * __this));
IL2CPP_REGISTER_METHODINFO(0x04733538, RestoreCheckpointController_FinishLoading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0090C610, bool, ShouldSpawnOnClosestInvisibleCheckpoint, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0090C660, Vector3, FindClosestInvisibleCheckpoint, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RestoreCheckpointController * __this));
IL2CPP_REGISTER_METHOD(0x016AAB90, Object *, FindClosestTypeToPosition, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x016AAB90, InvisibleCheckpoint *, FindClosestTypeToPosition, (Vector3 position));
IL2CPP_REGISTER_METHODINFO(0x04706B88, RestoreCheckpointController_FindClosestTypeToPosition_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AAB90, SeinPlaceholder *, FindClosestTypeToPosition, (Vector3 position));
IL2CPP_REGISTER_METHODINFO(0x047164D0, RestoreCheckpointController_FindClosestTypeToPosition_2__MethodInfo);
}
