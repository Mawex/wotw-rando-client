using namespace app;

namespace app::methods::DetachOnKill {
IL2CPP_REGISTER_METHOD(0x00B8DF10, void, Awake, (DetachOnKill * __this));
IL2CPP_REGISTER_METHOD(0x00B8DFA0, void, OnPoolSpawned, (DetachOnKill * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (DetachOnKill * __this));
IL2CPP_REGISTER_METHOD(0x00B8DFB0, GameObject *, GetDetachOnKillObjectsParent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B8E0D0, void, Update, (DetachOnKill * __this));
IL2CPP_REGISTER_METHOD(0x00B8E1E0, void, OnKill, (DetachOnKill * __this, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x00506160, void, __ctor, (DetachOnKill * __this));
}
