#include <interception_macros.h>

namespace app::methods::MapStone {
IL2CPP_REGISTER_METHOD(0x00A09730, void, Awake, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A097A0, void, FindWorldArea, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A09940, void, Start, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A09B70, bool, get_OriHasTargets, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A09C90, void, Highlight, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A0A120, void, Unhighlight, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A0A3B0, void, OnDisable, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A0A3D0, bool, get_Activated, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A0A3E0, void, Serialize, (MapStone * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A0A470, float, get_DistanceToSein, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A0A620, void, FixedUpdate, (MapStone * __this));
IL2CPP_REGISTER_METHOD(0x00A0AB40, void, __ctor, (MapStone * __this));
}
