#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Inertia_Body {
IL2CPP_REGISTER_METHOD(0x02A06890, void, Reset, (Inertia_Body * __this));
IL2CPP_REGISTER_METHOD(0x02A06A70, void, Update, (Inertia_Body * __this, IKSolverFullBodyBiped * solver, float weight, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02A07120, void, __ctor, (Inertia_Body * __this));
}
