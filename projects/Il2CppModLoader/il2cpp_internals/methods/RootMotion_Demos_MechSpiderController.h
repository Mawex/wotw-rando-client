#include <interception_macros.h>

namespace app::methods::RootMotion_Demos::MechSpiderController {
    IL2CPP_REGISTER_METHOD(0x02224C00, app::Vector3, get_inputVector, (app::MechSpiderController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02224D30, void, Update, (app::MechSpiderController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022254E0, void, __ctor, (app::MechSpiderController * this_ptr));
}
