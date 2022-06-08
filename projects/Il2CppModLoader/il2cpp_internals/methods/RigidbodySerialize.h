#include <interception_macros.h>

namespace app::methods::RigidbodySerialize {
IL2CPP_REGISTER_METHOD(0x01351520, void, OnPoolSpawned, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x013515F0, void, Initialize, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x013516B0, void, Awake, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x01351790, void, OnDestroy, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x01351830, void, set_IsSuspended, (RigidbodySerialize * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x00608710, SuspendableMask__Enum, get_Mask, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_Mask, (RigidbodySerialize * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01351850, void, Serialize, (RigidbodySerialize * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x01352110, void, Suspend, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x01352460, void, Resume, (RigidbodySerialize * __this));
IL2CPP_REGISTER_METHOD(0x01352610, void, __ctor, (RigidbodySerialize * __this));
}
