using namespace app;

namespace app::methods::Moon::OriHeadIk {
IL2CPP_REGISTER_METHOD(0x00C30950, bool, get_CanApplyIk, (OriHeadIk * __this));
IL2CPP_REGISTER_METHOD(0x00C30E10, void, Start, (OriHeadIk * __this));
IL2CPP_REGISTER_METHOD(0x00C31050, void, SubmitLookTarget, (OriHeadIk * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x00C31110, void, OnAddedToAnimator, (OriHeadIk * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00C31390, void, Process, (OriHeadIk * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00C31B70, void, OnDrawGizmosSelected, (OriHeadIk * __this));
IL2CPP_REGISTER_METHOD(0x00C31F10, void, __ctor, (OriHeadIk * __this));
}
