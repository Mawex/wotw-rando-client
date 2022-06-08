#include <interception_macros.h>

namespace app::methods::GroundMovementTimelineBehaviourNew {
IL2CPP_REGISTER_METHOD(0x01096F50, void, OnEntityInitialized, (GroundMovementTimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x01096FF0, void, OnEnter, (GroundMovementTimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010972A0, void, OnExit, (GroundMovementTimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010974B0, Vector3, RootMotionModifier, (GroundMovementTimelineBehaviourNew * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x04770278, GroundMovementTimelineBehaviourNew_RootMotionModifier__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420FE0, void, __ctor, (GroundMovementTimelineBehaviourNew * __this));
}
