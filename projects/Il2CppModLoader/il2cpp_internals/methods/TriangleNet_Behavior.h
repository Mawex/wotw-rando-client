#include <interception_macros.h>

namespace app::methods::TriangleNet::Behavior {
IL2CPP_REGISTER_METHOD(0x026198E0, void, __ctor, (Behavior * __this, bool quality, double minAngle));
IL2CPP_REGISTER_METHOD(0x02619910, void, Update, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619BA0, bool, get_NoExact, ());
IL2CPP_REGISTER_METHOD(0x02619C20, void, set_NoExact, (bool value));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_Quality, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619CB0, void, set_Quality, (Behavior * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_MinAngle, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619CC0, void, set_MinAngle, (Behavior * __this, double value));
IL2CPP_REGISTER_METHOD(0x002FD520, double, get_MaxAngle, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619CD0, void, set_MaxAngle, (Behavior * __this, double value));
IL2CPP_REGISTER_METHOD(0x01BC1650, double, get_MaxArea, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619CE0, void, set_MaxArea, (Behavior * __this, double value));
IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_VarArea, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619D00, void, set_VarArea, (Behavior * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Poly, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Poly, (Behavior * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB930, Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_ *, get_UserTest, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_UserTest, (Behavior * __this, Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x02619D10, bool, get_Convex, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619D20, void, set_Convex, (Behavior * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02619D30, bool, get_ConformingDelaunay, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619D40, void, set_ConformingDelaunay, (Behavior * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NoBisect, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619D50, void, set_NoBisect, (Behavior * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_UseBoundaryMarkers, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x0229BB70, void, set_UseBoundaryMarkers, (Behavior * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02619D60, bool, get_NoHoles, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x02619D70, void, set_NoHoles, (Behavior * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_Jettison, (Behavior * __this));
IL2CPP_REGISTER_METHOD(0x007EA280, void, set_Jettison, (Behavior * __this, bool value));
}
