#include <interception_macros.h>

namespace app::methods::Moon::BrainBehaviour {
IL2CPP_REGISTER_METHOD(0x00CC04B0, bool, get_IsOnCooldown, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Brain *, get_Brain, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartBehaviour, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, EndCondition, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetScore, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetBehaviour, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFixedUpdate, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC04C0, void, OnEnable, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00CC0640, void, OnDisable, (BrainBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (BrainBehaviour * __this));
}
