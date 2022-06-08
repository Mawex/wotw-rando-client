using namespace app;

namespace app::methods::AK::Wwise::RTPC {
IL2CPP_REGISTER_METHOD(0x004AB2B0, WwiseObjectType__Enum, get_WwiseObjectType, (RTPC * __this));
IL2CPP_REGISTER_METHOD(0x026C2DF0, void, SetValue, (RTPC * __this, GameObject * gameObject, float value));
IL2CPP_REGISTER_METHOD(0x026C2F90, void, SetValue, (RTPC * __this, uint64_t gameObject, float value));
IL2CPP_REGISTER_METHOD(0x026C30F0, float, GetValue, (RTPC * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x026C3350, void, SetGlobalValue, (RTPC * __this, float value));
IL2CPP_REGISTER_METHOD(0x026C3520, float, GetGlobalValue, (RTPC * __this));
IL2CPP_REGISTER_METHOD(0x026C1170, void, __ctor, (RTPC * __this));
}
