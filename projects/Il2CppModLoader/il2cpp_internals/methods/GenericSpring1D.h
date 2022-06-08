using namespace app;

namespace app::methods::GenericSpring1D {
IL2CPP_REGISTER_METHOD(0x00E109B0, void, Step, (GenericSpring1D * __this, GenericSpring1D_Particle * * particle));
IL2CPP_REGISTER_METHOD(0x00E10B10, float, NormalizedValue, (GenericSpring1D * __this, GenericSpring1D_Particle * particle));
IL2CPP_REGISTER_METHOD(0x00E10B40, float, DampenedHookeForce, (GenericSpring1D * __this, float displacement, float velocity, float stiffness, float damping));
IL2CPP_REGISTER_METHOD(0x00E10B60, bool, IsParticleResting, (GenericSpring1D * __this, GenericSpring1D_Particle * particle));
IL2CPP_REGISTER_METHOD(0x00E10C80, void, __ctor, (GenericSpring1D * __this));
}
