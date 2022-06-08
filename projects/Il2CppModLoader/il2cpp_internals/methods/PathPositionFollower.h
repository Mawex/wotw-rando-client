using namespace app;

namespace app::methods::PathPositionFollower {
IL2CPP_REGISTER_METHOD(0x004486A0, void, Awake, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x00448740, void, OnDestroy, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x004487E0, void, OnValidate, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x004487E0, void, ApplySettings, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x00448840, void, Start, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x00448A70, void, FixedUpdate, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x00448D80, void, ResetToNode, (PathPositionFollower * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00448ED0, void, Serialize, (PathPositionFollower * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00448FF0, bool, get_IsSuspended, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x00449000, void, set_IsSuspended, (PathPositionFollower * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF3C0, SuspendableMask__Enum, get_Mask, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x00449010, void, set_Mask, (PathPositionFollower * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004490C0, Bounds, get_Bounds, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x004490E0, void, OnDrawGizmosSelected, (PathPositionFollower * __this));
IL2CPP_REGISTER_METHOD(0x00449350, void, __ctor, (PathPositionFollower * __this));
}
