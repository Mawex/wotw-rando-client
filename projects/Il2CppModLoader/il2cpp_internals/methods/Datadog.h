#include <interception_macros.h>

namespace app::methods::Datadog {
IL2CPP_REGISTER_METHOD(0x02E8ECB0, Datadog *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, EnsureBestHttpInitialized, ());
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, MyRemoteCertificateValidationCallback, (Object * sender, X509Certificate_1 * certificate, X509Chain * chain, SslPolicyErrors__Enum sslpolicyerrors));
IL2CPP_REGISTER_METHOD(0x02E8EF00, void, OnUpdate, ());
IL2CPP_REGISTER_METHOD(0x02E8EFB0, void, CleanUpJobs, (Datadog * __this));
IL2CPP_REGISTER_METHOD(0x02E8F120, void, ClearJobs, (Datadog * __this));
IL2CPP_REGISTER_METHOD(0x02E8F330, Datadog *, InitializeDatadog, ());
IL2CPP_REGISTER_METHOD(0x02E8F470, void, Post, (DatadogEvent * evt));
IL2CPP_REGISTER_METHOD(0x02E8F4E0, void, QueueRequest, (Datadog * __this, DatadogEvent * payload));
IL2CPP_REGISTER_METHOD(0x02E8F820, int32_t, GetThresholdIndex, (Datadog * __this, int32_t hash, int64_t nowTime));
IL2CPP_REGISTER_METHOD(0x02E8FA70, bool, CheckThreshold, (Datadog * __this, int32_t hash));
IL2CPP_REGISTER_METHOD(0x02E8FD10, void, ExecuteRequest, (Datadog * __this, DatadogEvent * payload));
IL2CPP_REGISTER_METHOD(0x02E8FD50, void, __ctor, (Datadog * __this));
IL2CPP_REGISTER_METHOD(0x02E8FFD0, void, __cctor, ());
}
