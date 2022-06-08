#include <interception_macros.h>

namespace app::methods::Moon::MoonProfiler {
IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginSample, (String * name));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginSample, (String * name, Object_1 * targetObject));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndSample, ());
}
