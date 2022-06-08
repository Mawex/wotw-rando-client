#include <interception_macros.h>

namespace app::methods::HitFlash3D {
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_HitFlash3D_Flash_ *, get_Entries, (HitFlash3D * __this));
IL2CPP_REGISTER_METHOD(0x00B561A0, void, Awake, (HitFlash3D * __this));
IL2CPP_REGISTER_METHOD(0x00B56240, void, PlayFlash, (HitFlash3D * __this));
IL2CPP_REGISTER_METHOD(0x00B56390, void, PlayFlash, (HitFlash3D * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x00B564E0, void, GatherEntries, (HitFlash3D * __this));
IL2CPP_REGISTER_METHOD(0x00B56960, void, OnReceiveEvent, (HitFlash3D * __this, EntityEvent * eventInfo));
IL2CPP_REGISTER_METHOD(0x00B56AD0, void, __ctor, (HitFlash3D * __this));
}
