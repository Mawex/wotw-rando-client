#include <interception_macros.h>

namespace app::methods::LaserBeam {
IL2CPP_REGISTER_METHOD(0x00F06300, void, SurfaceEffectsPrefabInstantiation, (LaserBeam * __this, List_1_DynamicInstantiationDescriptor_ * instantiations));
IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_InvalidateParentTimelineCache, (LaserBeam * __this));
IL2CPP_REGISTER_METHOD(0x00801AD0, void, set_InvalidateParentTimelineCache, (LaserBeam * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F06860, void, Awake, (LaserBeam * __this));
IL2CPP_REGISTER_METHOD(0x00F06A80, GameObject *, GetTimelineScaleTarget, (LaserBeam * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00F06C40, int32_t, GetPrewarmAmount, (LaserBeam * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x00F06D50, void, __ctor, (LaserBeam * __this));
}
