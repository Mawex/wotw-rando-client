#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::MechSpider {
IL2CPP_REGISTER_METHOD(0x02222FA0, void, Update, (MechSpider * __this));
IL2CPP_REGISTER_METHOD(0x02224470, Vector3, GetLegCentroid, (MechSpider * __this));
IL2CPP_REGISTER_METHOD(0x022246B0, Vector3, GetLegsPlaneNormal, (MechSpider * __this));
IL2CPP_REGISTER_METHOD(0x02224BB0, void, __ctor, (MechSpider * __this));
}
