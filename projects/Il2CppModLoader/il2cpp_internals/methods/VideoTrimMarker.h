#include <interception_macros.h>

namespace app::methods::VideoTrimMarker {
IL2CPP_REGISTER_METHOD(0x008C08F0, void, ResetPosition, (VideoTrimMarker * __this));
IL2CPP_REGISTER_METHOD(0x008C0B40, void, OnDrag, (VideoTrimMarker * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x008C0F80, void, SetTime, (VideoTrimMarker * __this, float percentage));
IL2CPP_REGISTER_METHOD(0x008C1550, double, GetTime, (VideoTrimMarker * __this));
IL2CPP_REGISTER_METHOD(0x008C18D0, void, OnPointerDown, (VideoTrimMarker * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x00647DD0, void, OnPointerUp, (VideoTrimMarker * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (VideoTrimMarker * __this));
}
