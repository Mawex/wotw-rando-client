#include <interception_macros.h>

namespace app::methods::UnityEngine::TrackedReference {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::TrackedReference * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C6AA50, bool, operator____1, (app::TrackedReference * x, app::TrackedReference * y));
    IL2CPP_REGISTER_METHOD(0x02C6AB20, bool, operator____2, (app::TrackedReference * x, app::TrackedReference * y));
    IL2CPP_REGISTER_METHOD(0x02C6AB40, bool, Equals, (app::TrackedReference * this_ptr, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x01F25890, int32_t, GetHashCode, (app::TrackedReference * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C6AC10, bool, operator_, (app::TrackedReference * exists));
}
