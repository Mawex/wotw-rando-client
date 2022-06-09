#include <interception_macros.h>

namespace app::methods::Moon::ExecutionOrderMap {
IL2CPP_REGISTER_METHOD(0x01221A00, IMoonDriverExecutionOrderMap *, Get, ());
IL2CPP_REGISTER_METHOD(0x01221B40, bool, TryGetExecutionOrderFor, (app::ExecutionOrderMap * this_ptr, app::Type * type, app::int32_t * order));
IL2CPP_REGISTER_METHOD(0x01221D10, void, __ctor, (app::ExecutionOrderMap * this_ptr));
}
