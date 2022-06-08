using namespace app;

namespace app::methods::InvisibleCheckpoint {
IL2CPP_REGISTER_METHOD(0x00643F40, Rect, get_Bounds, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x00643F50, void, Awake, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x006440F0, void, OnDestroy, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnRestoreCheckpoint, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHODINFO(0x0472BB78, InvisibleCheckpoint_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00644280, bool, CanCreateCheckpoint, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x006444B0, bool, get_WithinBound, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x006445D0, void, FixedUpdate, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnCheckpointCreated, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x006447C0, void, CreateCheckpoint, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x00644AF0, bool, GetCheckpointGroundPosition, (InvisibleCheckpoint * __this, Vector3 * pos, Vector3 target));
IL2CPP_REGISTER_METHOD(0x00644E70, bool, GetSeinGroundPosition, (Vector3 * pos, Vector3 target, float castOffsetScalar));
IL2CPP_REGISTER_METHOD(0x00645140, bool, GetSeinGroundPosition, (Vector3 * pos, Vector3 target, Vector3 offset, float radiusDiff));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x00645590, Rect, CalculateBounds, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x006458E0, void, __ctor, (InvisibleCheckpoint * __this));
IL2CPP_REGISTER_METHOD(0x00645A80, void, __cctor, (MethodInfo * method));
}
