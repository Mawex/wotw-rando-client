#include <interception_macros.h>

namespace app::methods::HitFlash3DNew {
IL2CPP_REGISTER_METHOD(0x00B56C40, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00B56CE0, void, Prewarm, (HitFlash3DNew * __this));
IL2CPP_REGISTER_METHOD(0x00B56CF0, void, CacheSerializedComponents, (HitFlash3DNew * __this));
IL2CPP_REGISTER_METHOD(0x00B56CE0, void, Awake, (HitFlash3DNew * __this));
IL2CPP_REGISTER_METHOD(0x00B56D80, void, OnReceiveEvent, (HitFlash3DNew * __this, EntityEvent * eventInfo));
IL2CPP_REGISTER_METHOD(0x00B56EF0, void, PlayFlash, (HitFlash3DNew * __this));
IL2CPP_REGISTER_METHOD(0x00B57040, void, PlayFlash, (HitFlash3DNew * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (HitFlash3DNew * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
