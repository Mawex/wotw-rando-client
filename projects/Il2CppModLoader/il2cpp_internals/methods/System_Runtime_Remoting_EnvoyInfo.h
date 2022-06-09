#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::EnvoyInfo {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::EnvoyInfo * this_ptr, app::IMessageSink * sinks));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IMessageSink *, get_EnvoySinks, (app::EnvoyInfo * this_ptr));
}
