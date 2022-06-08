using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRNotifications__CreateNotification {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRNotifications_CreateNotification * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02D78590, EVRNotificationError__Enum, Invoke, (IVRNotifications_CreateNotification * __this, uint64_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType__Enum type, String * pchText, EVRNotificationStyle__Enum style, NotificationBitmap_t * pImage, uint32_t * pNotificationId));
IL2CPP_REGISTER_METHOD(0x02D78B50, IAsyncResult *, BeginInvoke, (IVRNotifications_CreateNotification * __this, uint64_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType__Enum type, String * pchText, EVRNotificationStyle__Enum style, NotificationBitmap_t * pImage, uint32_t * pNotificationId, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRNotificationError__Enum, EndInvoke, (IVRNotifications_CreateNotification * __this, NotificationBitmap_t * pImage, uint32_t * pNotificationId, IAsyncResult * result));
}
