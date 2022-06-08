using namespace app;

namespace app::methods::RootMotion::Demos::AnimatorController3rdPersonIK {
IL2CPP_REGISTER_METHOD(0x02209C80, void, OnGUI, (AnimatorController3rdPersonIK * __this));
IL2CPP_REGISTER_METHOD(0x02209D10, void, Start, (AnimatorController3rdPersonIK * __this));
IL2CPP_REGISTER_METHOD(0x0220A040, void, Move, (AnimatorController3rdPersonIK * __this, Vector3 moveInput, bool isMoving, Vector3 faceDirection, Vector3 aimTarget));
IL2CPP_REGISTER_METHOD(0x0220A220, void, Read, (AnimatorController3rdPersonIK * __this));
IL2CPP_REGISTER_METHOD(0x0220A690, void, AimIK, (AnimatorController3rdPersonIK * __this));
IL2CPP_REGISTER_METHOD(0x0220A760, void, FBBIK, (AnimatorController3rdPersonIK * __this));
IL2CPP_REGISTER_METHOD(0x0220B0F0, void, HeadLookAt, (AnimatorController3rdPersonIK * __this, Vector3 lookAtTarget));
IL2CPP_REGISTER_METHOD(0x0220B7B0, void, __ctor, (AnimatorController3rdPersonIK * __this));
}
