using namespace app;

namespace app::methods::CheckpointFunctionality {
IL2CPP_REGISTER_METHOD(0x00126240, bool, IsManualPositionMode, (CheckpointFunctionality__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FB00, bool, ShouldRefillHealthAndEnergy, (CheckpointFunctionality__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00126250, Vector2, get_ManualPosition, (CheckpointFunctionality__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00126260, void, CreateCheckpoint, (CheckpointFunctionality__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00126270, void, CreateCheckpoint, (CheckpointFunctionality__Boxed * __this, bool doPerformSave));
IL2CPP_REGISTER_METHOD(0x00126280, void, CreateCheckpoint, (CheckpointFunctionality__Boxed * __this, bool doPerformSave, bool respectRestrictCheckpointZone));
IL2CPP_REGISTER_METHOD(0x0010D3A0, void, Reset, (CheckpointFunctionality__Boxed * __this, Transform * ownerTransform));
IL2CPP_REGISTER_METHOD(0x00126290, void, OnDrawGizmosSelected, (CheckpointFunctionality__Boxed * __this));
}
