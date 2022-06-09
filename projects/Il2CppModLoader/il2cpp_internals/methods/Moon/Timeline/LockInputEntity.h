#include <interception_macros.h>

namespace app::methods::Moon::Timeline::LockInputEntity {
    IL2CPP_REGISTER_METHOD(0x00775D40, void, OnStartPlayback, (app::LockInputEntity * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00775EC0, void, OnStopPlayback, (app::LockInputEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00775F70, void, OnUpdateEntity, (app::LockInputEntity * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x00776040, void, __ctor, (app::LockInputEntity * this_ptr));
}
