#include <interception_macros.h>

namespace app::methods::MirrorData {
    IL2CPP_REGISTER_METHOD(0x01452B20, MirroringData*, GetDataByJointName, (app::MirrorData * this_ptr, app::String* joint_name));
    IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (app::MirrorData * this_ptr));
} // namespace app::methods::MirrorData
