#include <interception_macros.h>

namespace app::methods::Moon::FaceTargetBehaviourNew {
IL2CPP_REGISTER_METHOD(0x00E2D530, Vector3, get_TargetPosition, (app::FaceTargetBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x01222810, void, OnEntityInitialized, (app::FaceTargetBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x012228B0, BehaviourStatus__Enum, OnExecute, (app::FaceTargetBehaviourNew * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01222C10, void, OnEnter, (app::FaceTargetBehaviourNew * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01222C70, void, __ctor, (app::FaceTargetBehaviourNew * this_ptr));
}
