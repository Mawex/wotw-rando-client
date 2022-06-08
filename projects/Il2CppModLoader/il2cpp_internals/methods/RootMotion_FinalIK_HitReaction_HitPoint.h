using namespace app;

namespace app::methods::RootMotion::FinalIK::HitReaction_HitPoint {
IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_crossFader, (HitReaction_HitPoint * __this));
IL2CPP_REGISTER_METHOD(0x012219F0, void, set_crossFader, (HitReaction_HitPoint * __this, float value));
IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_timer, (HitReaction_HitPoint * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_timer, (HitReaction_HitPoint * __this, float value));
IL2CPP_REGISTER_METHOD(0x020763D0, Vector3, get_force, (HitReaction_HitPoint * __this));
IL2CPP_REGISTER_METHOD(0x020763F0, void, set_force, (HitReaction_HitPoint * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0168C6F0, Vector3, get_point, (HitReaction_HitPoint * __this));
IL2CPP_REGISTER_METHOD(0x02071D10, void, set_point, (HitReaction_HitPoint * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x02076400, void, Hit, (HitReaction_HitPoint * __this, Vector3 force, Vector3 point));
IL2CPP_REGISTER_METHOD(0x02076560, void, Apply, (HitReaction_HitPoint * __this, IKSolverFullBodyBiped * solver, float weight));
IL2CPP_REGISTER_METHOD(0x02076780, void, __ctor, (HitReaction_HitPoint * __this));
}
