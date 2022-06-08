#include <interception_macros.h>

namespace app::methods::TriangleNet::Meshing::QualityOptions {
IL2CPP_REGISTER_METHOD(0x01433F10, double, get_MaximumAngle, (QualityOptions * __this));
IL2CPP_REGISTER_METHOD(0x02B16830, void, set_MaximumAngle, (QualityOptions * __this, double value));
IL2CPP_REGISTER_METHOD(0x0261CB30, double, get_MinimumAngle, (QualityOptions * __this));
IL2CPP_REGISTER_METHOD(0x0261CB40, void, set_MinimumAngle, (QualityOptions * __this, double value));
IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_MaximumArea, (QualityOptions * __this));
IL2CPP_REGISTER_METHOD(0x0261CB60, void, set_MaximumArea, (QualityOptions * __this, double value));
IL2CPP_REGISTER_METHOD(0x002FBB00, Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_ *, get_UserTest, (QualityOptions * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_UserTest, (QualityOptions * __this, Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_VariableArea, (QualityOptions * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_VariableArea, (QualityOptions * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_SteinerPoints, (QualityOptions * __this));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_SteinerPoints, (QualityOptions * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (QualityOptions * __this));
}
