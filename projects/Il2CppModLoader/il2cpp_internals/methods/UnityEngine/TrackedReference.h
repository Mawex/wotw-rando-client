#include <interception_macros.h>

namespace app::methods::UnityEngine::TrackedReference {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::TrackedReference * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C6AA50, bool, op_Equality, (app::TrackedReference * x, app::TrackedReference * y));
    IL2CPP_REGISTER_METHOD(0x02C6AB20, bool, op_Inequality, (app::TrackedReference * x, app::TrackedReference * y));
    IL2CPP_REGISTER_METHOD(0x02C6AB40, bool, Equals, (app::TrackedReference * this_ptr, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x01F25890, int32_t, GetHashCode, (app::TrackedReference * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02C6AC10, bool, op_Implicit, (app::TrackedReference * exists));
    operator == (app::TrackedReference * x, app::TrackedReference * y) {
        return op_Equality(x, y);
    }
    operator != (app::TrackedReference * x, app::TrackedReference * y) {
        return op_Inequality(x, y);
    }
}
