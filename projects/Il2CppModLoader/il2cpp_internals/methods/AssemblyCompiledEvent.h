#include <interception_macros.h>

namespace app::methods::AssemblyCompiledEvent {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Assembly, (AssemblyCompiledEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Assembly, (AssemblyCompiledEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_TimeTaken, (AssemblyCompiledEvent * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_TimeTaken, (AssemblyCompiledEvent * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02E8E170, DatadogEvent *, GetCompatibleEvent, (AssemblyCompiledEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AssemblyCompiledEvent * __this));
}
