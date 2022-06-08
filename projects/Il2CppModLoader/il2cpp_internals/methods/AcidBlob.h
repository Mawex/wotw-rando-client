#include <interception_macros.h>

namespace app::methods::AcidBlob {
IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnPoolSpawned, (AcidBlob * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (AcidBlob * __this));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_Active, (AcidBlob * __this));
IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_Active, (AcidBlob * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004C15E0, void, OnCollisionEnter, (AcidBlob * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x004C1E80, void, __ctor, (AcidBlob * __this));
}
