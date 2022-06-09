#include <interception_macros.h>

namespace app::methods::SeinBowPuppet {
    IL2CPP_REGISTER_METHOD(0x00DA2340, int32_t, get_Id, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA2350, MoonTimeline__Array*, get_GroundTimelines, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA25A0, MoonTimeline__Array*, get_AirTimelines, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA27F0, MoonTimeline*, GetDrawTimeline_1, (app::SeinBowPuppet * this_ptr, bool is_on_ground, bool rapid));
    IL2CPP_REGISTER_METHOD(0x00DA2820, MoonTimeline*, GetRecoverTimeline_1, (app::SeinBowPuppet * this_ptr, bool is_on_ground, bool rapid));
    IL2CPP_REGISTER_METHOD(0x00DA2850, MoonTimeline*, GetDrawTimeline_2, (app::SeinBowPuppet * this_ptr, bool is_on_ground));
    IL2CPP_REGISTER_METHOD(0x00DA2870, MoonTimeline*, GetDrawRapidTimeline, (app::SeinBowPuppet * this_ptr, bool is_on_ground));
    IL2CPP_REGISTER_METHOD(0x00DA2890, MoonTimeline*, GetRecoverTimeline_2, (app::SeinBowPuppet * this_ptr, bool is_on_ground));
    IL2CPP_REGISTER_METHOD(0x00DA28B0, MoonTimeline*, GetRecoverRapidTimeline, (app::SeinBowPuppet * this_ptr, bool is_on_ground));
    IL2CPP_REGISTER_METHOD(0x00DA28D0, MoonTimeline*, GetPullChargeTimeline, (app::SeinBowPuppet * this_ptr, bool is_on_ground));
    IL2CPP_REGISTER_METHOD(0x00DA28F0, MoonTimeline*, GetChargeRecoverTimeline, (app::SeinBowPuppet * this_ptr, bool is_on_ground));
    IL2CPP_REGISTER_METHOD(0x00DA2910, MoonAnimation*, GetAimLoopAnimationBow, (app::SeinBowPuppet * this_ptr, bool is_on_ground));
    IL2CPP_REGISTER_METHOD(0x00DA2930, MoonFloat*, GetArrowChargeAmount, (app::SeinBowPuppet * this_ptr, bool is_on_ground));
    IL2CPP_REGISTER_METHOD(0x00B2A180, GameObject*, get_CurrentArrow, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA2950, void, SetCurrentArrow, (app::SeinBowPuppet * this_ptr, app::GameObject* arrow));
    IL2CPP_REGISTER_METHOD(0x00DA2AC0, Transform*, get_ArrowTransform, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA2BE0, Vector3, get_TargetRapidArrowScale, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA2C00, Vector3, get_TargetArrowScale, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA2C20, Vector3, get_TargetChargeArrowScale, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA2C40, MoonAnimator*, get_WeaponAnimator, (app::SeinBowPuppet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DA2D20, void, __ctor, (app::SeinBowPuppet * this_ptr));
} // namespace app::methods::SeinBowPuppet
