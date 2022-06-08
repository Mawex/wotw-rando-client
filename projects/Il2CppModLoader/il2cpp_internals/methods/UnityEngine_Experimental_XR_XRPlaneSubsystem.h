using namespace app;

namespace app::methods::UnityEngine::Experimental::XR::XRPlaneSubsystem {
IL2CPP_REGISTER_METHOD(0x03176D20, void, __ctor, (XRPlaneSubsystem * __this));
IL2CPP_REGISTER_METHOD(0x03176DA0, void, InvokePlaneAddedEvent, (XRPlaneSubsystem * __this, BoundedPlane plane));
IL2CPP_REGISTER_METHOD(0x03176ED0, void, InvokePlaneUpdatedEvent, (XRPlaneSubsystem * __this, BoundedPlane plane));
IL2CPP_REGISTER_METHOD(0x03177000, void, InvokePlaneRemovedEvent, (XRPlaneSubsystem * __this, BoundedPlane removedPlane));
}
