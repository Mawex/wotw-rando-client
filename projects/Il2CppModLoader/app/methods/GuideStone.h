#pragma once
#include <interception_macros.h>

namespace app::methods::GuideStone {
    IL2CPP_REGISTER_METHOD(0x01099960, void, Awake, (app::GuideStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01099F80, void, OnEnable, (app::GuideStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01099F80, void, Initialize, (app::GuideStone * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047772D8, GuideStone_Initialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0109A080, void, Update, (app::GuideStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109A300, void, SetStateNormalizedTime, (app::GuideStone * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x0109A530, void, SetDirectionsPositions, (app::GuideStone * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x0109AB00, void, SetRenderersValue, (app::GuideStone * this_ptr, float alpha))
    IL2CPP_REGISTER_METHOD(0x0109AC50, void, SetMessages, (app::GuideStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109AEA0, void, ctor, (app::GuideStone * this_ptr))
}
