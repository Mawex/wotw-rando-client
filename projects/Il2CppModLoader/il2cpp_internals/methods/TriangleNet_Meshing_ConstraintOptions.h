#include <interception_macros.h>

namespace app::methods::TriangleNet::Meshing::ConstraintOptions {
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_UseRegions, (ConstraintOptions * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_UseRegions, (ConstraintOptions * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_ConformingDelaunay, (ConstraintOptions * __this));
IL2CPP_REGISTER_METHOD(0x0052C660, void, set_ConformingDelaunay, (ConstraintOptions * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_Convex, (ConstraintOptions * __this));
IL2CPP_REGISTER_METHOD(0x02619D00, void, set_Convex, (ConstraintOptions * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_SegmentSplitting, (ConstraintOptions * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_SegmentSplitting, (ConstraintOptions * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ConstraintOptions * __this));
}
