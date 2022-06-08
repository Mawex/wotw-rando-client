using namespace app;

namespace app::methods::Moon::Timeline::VerletStructureAttachForceAnimator {
IL2CPP_REGISTER_METHOD(0x00D1C240, void, OnStartPlayback, (VerletStructureAttachForceAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1C260, void, InitVerletData, (VerletStructureAttachForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1C960, void, OnUpdateEntity, (VerletStructureAttachForceAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D1C980, void, OnStopPlayback, (VerletStructureAttachForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1C990, void, ResetValue, (VerletStructureAttachForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1CB40, void, SampleValue, (VerletStructureAttachForceAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x00D1CCF0, void, OnDrawGizmosSelected, (VerletStructureAttachForceAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1D200, void, __ctor, (VerletStructureAttachForceAnimator * __this));
}
