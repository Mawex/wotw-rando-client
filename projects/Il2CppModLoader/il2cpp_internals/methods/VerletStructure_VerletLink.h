#include <interception_macros.h>

namespace app::methods::VerletStructure_VerletLink {
IL2CPP_REGISTER_METHOD(0x013D0CC0, void, Init, (VerletStructure_VerletLink * __this, VerletStructure * verletStructure));
IL2CPP_REGISTER_METHOD(0x013D0EC0, Vector3, get_Center, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D1000, Vector3, get_InitialCenter, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D1140, Vector3, get_Tangent, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D1310, Vector3, get_Vector, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D1440, Vector3, get_InitialTangent, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D1610, Vector3, get_Normal, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D18A0, Vector3, get_NormalUpBasis, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D1AD0, Vector3, get_Perpendicular, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D1CA0, Vector3, get_PerpendicularUpBasis, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D1E40, Vector3, PerpendicularFixedBasis, (VerletStructure_VerletLink * __this, Vector3 upVector));
IL2CPP_REGISTER_METHOD(0x013D1FE0, Vector3, get_InitialNormal, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D2270, Vector3, get_InitialNormalUpBasis, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D24A0, Vector3, InitialFixedBasis, (VerletStructure_VerletLink * __this, Vector3 upVector));
IL2CPP_REGISTER_METHOD(0x013D26D0, Vector3, get_Normal2D, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D2900, Vector3, get_InitialNormal2D, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D2B30, bool, IsConnected, (VerletStructure_VerletLink * __this, VerletStructure_VerletLink * b));
IL2CPP_REGISTER_METHOD(0x013D2B70, bool, IsConnected, (VerletStructure_VerletLink * __this, int32_t joint));
IL2CPP_REGISTER_METHOD(0x013D2B80, void, Update, (VerletStructure_VerletLink * __this));
IL2CPP_REGISTER_METHOD(0x013D2E30, void, __ctor, (VerletStructure_VerletLink * __this));
}
