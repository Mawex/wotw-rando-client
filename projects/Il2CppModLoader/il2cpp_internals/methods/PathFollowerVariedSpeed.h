using namespace app;

namespace app::methods::PathFollowerVariedSpeed {
IL2CPP_REGISTER_METHOD(0x00447230, float, get_Speed, (PathFollowerVariedSpeed * __this));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_DistanceBetweenCurrentNodes, (PathFollowerVariedSpeed * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_DistanceBetweenCurrentNodes, (PathFollowerVariedSpeed * __this, float value));
IL2CPP_REGISTER_METHOD(0x00447360, int32_t, get_NextNode, (PathFollowerVariedSpeed * __this));
IL2CPP_REGISTER_METHOD(0x00446940, Vector3, get_WorldPosition, (PathFollowerVariedSpeed * __this));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_WorldAngle, (PathFollowerVariedSpeed * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_ReachedTheEnd, (PathFollowerVariedSpeed * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_ReachedTheEnd, (PathFollowerVariedSpeed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00447380, void, Reset, (PathFollowerVariedSpeed * __this));
IL2CPP_REGISTER_METHOD(0x00447390, void, SetStartWorldAngle, (PathFollowerVariedSpeed * __this));
IL2CPP_REGISTER_METHOD(0x004475C0, void, UpdateFollower, (PathFollowerVariedSpeed * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00447ED0, void, __ctor, (PathFollowerVariedSpeed * __this));
}
