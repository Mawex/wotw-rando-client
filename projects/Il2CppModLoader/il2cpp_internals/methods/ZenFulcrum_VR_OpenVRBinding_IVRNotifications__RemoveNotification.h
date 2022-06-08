#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRNotifications__RemoveNotification {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRNotifications_RemoveNotification * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B33400, EVRNotificationError__Enum, Invoke, (IVRNotifications_RemoveNotification * __this, uint32_t notificationId));
IL2CPP_REGISTER_METHOD(0x02D78CA0, IAsyncResult *, BeginInvoke, (IVRNotifications_RemoveNotification * __this, uint32_t notificationId, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRNotificationError__Enum, EndInvoke, (IVRNotifications_RemoveNotification * __this, IAsyncResult * result));
}
