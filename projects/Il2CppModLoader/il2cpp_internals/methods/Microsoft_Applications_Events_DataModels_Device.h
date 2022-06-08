#include <interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::Device {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_id, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_id, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_localId, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_localId, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_authId, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_authId, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_authSecId, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_authSecId, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_deviceClass, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_deviceClass, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_orgId, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_orgId, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_make, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_make, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_orgAuthId, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_orgAuthId, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_model, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_model, (Device * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FCC50, void, __ctor, (Device * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Device * __this, String * fullName, String * name));
}
