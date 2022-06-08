using namespace app;

namespace app::methods::Checkpoint {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (Checkpoint * __this));
IL2CPP_REGISTER_METHOD(0x0131F2E0, bool, CanCreateCheckpoint, (Checkpoint * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (Checkpoint * __this));
IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnCheckpointCreated, (Checkpoint * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (Checkpoint * __this));
IL2CPP_REGISTER_METHOD(0x0131F3D0, void, __ctor, (Checkpoint * __this));
}
