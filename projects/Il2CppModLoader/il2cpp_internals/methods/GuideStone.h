#include <interception_macros.h>

namespace app::methods::GuideStone {
IL2CPP_REGISTER_METHOD(0x01099960, void, Awake, (GuideStone * __this));
IL2CPP_REGISTER_METHOD(0x01099F80, void, OnEnable, (GuideStone * __this));
IL2CPP_REGISTER_METHOD(0x01099F80, void, Initialize, (GuideStone * __this));
IL2CPP_REGISTER_METHODINFO(0x047772D8, GuideStone_Initialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0109A080, void, Update, (GuideStone * __this));
IL2CPP_REGISTER_METHOD(0x0109A300, void, SetStateNormalizedTime, (GuideStone * __this, float time));
IL2CPP_REGISTER_METHOD(0x0109A530, void, SetDirectionsPositions, (GuideStone * __this, float time));
IL2CPP_REGISTER_METHOD(0x0109AB00, void, SetRenderersValue, (GuideStone * __this, float alpha));
IL2CPP_REGISTER_METHOD(0x0109AC50, void, SetMessages, (GuideStone * __this));
IL2CPP_REGISTER_METHOD(0x0109AEA0, void, __ctor, (GuideStone * __this));
}
