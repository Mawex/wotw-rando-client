using namespace app;

namespace app::methods::RootMotion::Demos::AnimatorController3rdPerson {
IL2CPP_REGISTER_METHOD(0x02208F90, void, Start, (AnimatorController3rdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02209020, void, OnAnimatorMove, (AnimatorController3rdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02209670, void, Move, (AnimatorController3rdPerson * __this, Vector3 moveInput, bool isMoving, Vector3 faceDirection, Vector3 aimTarget));
IL2CPP_REGISTER_METHOD(0x02209C50, void, __ctor, (AnimatorController3rdPerson * __this));
}
