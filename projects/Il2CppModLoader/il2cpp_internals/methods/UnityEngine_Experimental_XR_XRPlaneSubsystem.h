#include <interception_macros.h>

namespace app::methods::UnityEngine_Experimental_XR::XRPlaneSubsystem {
    IL2CPP_REGISTER_METHOD(0x03176D20, void, __ctor, (app::XRPlaneSubsystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03176DA0, void, InvokePlaneAddedEvent, (app::XRPlaneSubsystem * this_ptr, app::BoundedPlane plane));
    IL2CPP_REGISTER_METHOD(0x03176ED0, void, InvokePlaneUpdatedEvent, (app::XRPlaneSubsystem * this_ptr, app::BoundedPlane plane));
    IL2CPP_REGISTER_METHOD(0x03177000, void, InvokePlaneRemovedEvent, (app::XRPlaneSubsystem * this_ptr, app::BoundedPlane removed_plane));
}
