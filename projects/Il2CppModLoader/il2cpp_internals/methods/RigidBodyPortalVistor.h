using namespace app;

namespace app::methods::RigidBodyPortalVistor {
IL2CPP_REGISTER_METHOD(0x00911BE0, void, Awake, (RigidBodyPortalVistor * __this));
IL2CPP_REGISTER_METHOD(0x00911C70, void, OnEnable, (RigidBodyPortalVistor * __this));
IL2CPP_REGISTER_METHOD(0x00911D30, void, OnDisable, (RigidBodyPortalVistor * __this));
IL2CPP_REGISTER_METHOD(0x00911E10, void, set_Position, (RigidBodyPortalVistor * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00911E90, Vector3, get_Position, (RigidBodyPortalVistor * __this));
IL2CPP_REGISTER_METHOD(0x00911F20, Vector3, get_Speed, (RigidBodyPortalVistor * __this));
IL2CPP_REGISTER_METHOD(0x00911FB0, void, set_Speed, (RigidBodyPortalVistor * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGoThroughPortal, (RigidBodyPortalVistor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, (RigidBodyPortalVistor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, (RigidBodyPortalVistor * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RigidBodyPortalVistor * __this));
}
