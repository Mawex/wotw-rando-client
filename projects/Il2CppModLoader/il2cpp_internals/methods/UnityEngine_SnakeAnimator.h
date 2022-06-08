using namespace app;

namespace app::methods::UnityEngine::SnakeAnimator {
IL2CPP_REGISTER_METHOD(0x03087460, void, BeginChain, (SnakeAnimator * __this, SnakeAnimatorConfiguration configuration));
IL2CPP_REGISTER_METHOD(0x030874C0, void, AddJoint, (SnakeAnimator * __this, SnakeAnimatorJointConfiguration jointConfiguration));
IL2CPP_REGISTER_METHOD(0x03087520, void, Simulate, (SnakeAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x03087580, void, ResetSimulation, (SnakeAnimator * __this));
IL2CPP_REGISTER_METHOD(0x030875D0, void, BeginChain_Injected, (SnakeAnimator * __this, SnakeAnimatorConfiguration * configuration));
IL2CPP_REGISTER_METHOD(0x03087630, void, AddJoint_Injected, (SnakeAnimator * __this, SnakeAnimatorJointConfiguration * jointConfiguration));
}
