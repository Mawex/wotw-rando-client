#include <interception_macros.h>

namespace app::methods::Moon::FaceTargetBehaviour {
IL2CPP_REGISTER_METHOD(0x0064D930, Vector3, get_TargetPosition, (FaceTargetBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (FaceTargetBehaviour * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x012225F0, void, OnInitialize, (FaceTargetBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01222690, void, OnExecute, (FaceTargetBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x01222740, void, OnUpdateBehaviour, (FaceTargetBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (FaceTargetBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (FaceTargetBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (FaceTargetBehaviour * __this));
}
