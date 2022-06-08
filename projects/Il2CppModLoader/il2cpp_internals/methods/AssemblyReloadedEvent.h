#include <interception_macros.h>

namespace app::methods::AssemblyReloadedEvent {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TimeTaken, (AssemblyReloadedEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_TimeTaken, (AssemblyReloadedEvent * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02E8E300, DatadogEvent *, GetCompatibleEvent, (AssemblyReloadedEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AssemblyReloadedEvent * __this));
}
