#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Channels::CrossAppDomainData {
IL2CPP_REGISTER_METHOD(0x01A9EB20, void, __ctor, (app::CrossAppDomainData * this_ptr, int32_t domain_id));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_DomainID, (app::CrossAppDomainData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_ProcessID, (app::CrossAppDomainData * this_ptr));
}
