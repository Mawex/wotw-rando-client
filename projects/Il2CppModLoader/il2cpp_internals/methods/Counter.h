#include <interception_macros.h>

namespace app::methods::Counter {
    IL2CPP_REGISTER_METHOD(0x00DB1360, void, OnDrawGizmos, (app::Counter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::Counter * this_ptr));
} // namespace app::methods::Counter
