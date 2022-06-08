#include <interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::Ingest {
IL2CPP_REGISTER_METHOD(0x002FA280, int64_t, get_time, (Ingest * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_time, (Ingest * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_clientIp, (Ingest * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_clientIp, (Ingest * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_auth, (Ingest * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_auth, (Ingest * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_quality, (Ingest * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_quality, (Ingest * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_uploadTime, (Ingest * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_uploadTime, (Ingest * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_userAgent, (Ingest * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_userAgent, (Ingest * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_client, (Ingest * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_client, (Ingest * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FCCC0, void, __ctor, (Ingest * __this));
IL2CPP_REGISTER_METHOD(0x002FCDA0, void, __ctor, (Ingest * __this, String * fullName, String * name));
}
