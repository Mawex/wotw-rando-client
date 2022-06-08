using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRNotifications {
IL2CPP_REGISTER_METHOD(0x016788C0, void, __ctor, (CVRNotifications * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x016789E0, EVRNotificationError__Enum, CreateNotification, (CVRNotifications * __this, uint64_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType__Enum type, String * pchText, EVRNotificationStyle__Enum style, NotificationBitmap_t * pImage, uint32_t * pNotificationId));
IL2CPP_REGISTER_METHOD(0x01678A20, EVRNotificationError__Enum, RemoveNotification, (CVRNotifications * __this, uint32_t notificationId));
}
