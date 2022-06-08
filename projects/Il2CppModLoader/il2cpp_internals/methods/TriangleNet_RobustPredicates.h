#include <interception_macros.h>

namespace app::methods::TriangleNet::RobustPredicates {
IL2CPP_REGISTER_METHOD(0x02B277F0, RobustPredicates *, get_Default, ());
IL2CPP_REGISTER_METHOD(0x02B27AE0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02B27D90, void, __ctor, (RobustPredicates * __this));
IL2CPP_REGISTER_METHOD(0x02B27DA0, double, CounterClockwise, (RobustPredicates * __this, Point * pa, Point * pb, Point * pc));
IL2CPP_REGISTER_METHOD(0x02B28000, double, InCircle, (RobustPredicates * __this, Point * pa, Point * pb, Point * pc, Point * pd));
IL2CPP_REGISTER_METHOD(0x02B28390, double, NonRegular, (RobustPredicates * __this, Point * pa, Point * pb, Point * pc, Point * pd));
IL2CPP_REGISTER_METHOD(0x02B283A0, Point *, FindCircumcenter, (RobustPredicates * __this, Point * org, Point * dest, Point * apex, double * xi, double * eta, double offconstant));
IL2CPP_REGISTER_METHOD(0x02B28910, Point *, FindCircumcenter, (RobustPredicates * __this, Point * org, Point * dest, Point * apex, double * xi, double * eta));
IL2CPP_REGISTER_METHOD(0x02B28CA0, int32_t, FastExpansionSumZeroElim, (RobustPredicates * __this, int32_t elen, Double__Array * e, int32_t flen, Double__Array * f, Double__Array * h));
IL2CPP_REGISTER_METHOD(0x02B29190, int32_t, ScaleExpansionZeroElim, (RobustPredicates * __this, int32_t elen, Double__Array * e, double b, Double__Array * h));
IL2CPP_REGISTER_METHOD(0x02B29560, double, Estimate, (RobustPredicates * __this, int32_t elen, Double__Array * e));
IL2CPP_REGISTER_METHOD(0x02B295D0, double, CounterClockwiseAdapt, (RobustPredicates * __this, Point * pa, Point * pb, Point * pc, double detsum));
IL2CPP_REGISTER_METHOD(0x02B2A250, double, InCircleAdapt, (RobustPredicates * __this, Point * pa, Point * pb, Point * pc, Point * pd, double permanent));
IL2CPP_REGISTER_METHOD(0x02B30FD0, void, AllocateWorkspace, (RobustPredicates * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ClearWorkspace, (RobustPredicates * __this));
}
