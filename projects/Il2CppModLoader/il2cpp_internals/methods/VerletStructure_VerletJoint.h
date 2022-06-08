#include <interception_macros.h>

namespace app::methods::VerletStructure_VerletJoint {
IL2CPP_REGISTER_METHOD(0x013D00E0, Vector3, get_Velocity, (VerletStructure_VerletJoint * __this));
IL2CPP_REGISTER_METHOD(0x013D01E0, void, set_Velocity, (VerletStructure_VerletJoint * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x013D02E0, Vector3, get_WorldAnchor, (VerletStructure_VerletJoint * __this));
IL2CPP_REGISTER_METHOD(0x013D0430, void, set_WorldAnchor, (VerletStructure_VerletJoint * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x013D0580, void, __ctor, (VerletStructure_VerletJoint * __this, Vector3 position, float mass));
IL2CPP_REGISTER_METHOD(0x013D05A0, void, Update, (VerletStructure_VerletJoint * __this, float friction, Vector3 gravity));
IL2CPP_REGISTER_METHOD(0x013D0930, void, Set, (VerletStructure_VerletJoint * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x013D0950, void, Set, (VerletStructure_VerletJoint * __this, VerletStructure_VerletJoint * j));
IL2CPP_REGISTER_METHOD(0x013D0990, void, LerpPosition, (VerletStructure_VerletJoint * __this, Vector3 target, float k));
IL2CPP_REGISTER_METHOD(0x013D0B60, void, Init, (VerletStructure_VerletJoint * __this, Transform * transform));
}
