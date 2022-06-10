#pragma once
#include <interception_macros.h>

namespace app::methods::SneezeSlugIdleAggroBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::SneezeSlugIdleAggroBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDF690, void, OnExecute, (app::SneezeSlugIdleAggroBehaviour * this_ptr, app::IBlackboard * blackboard))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEndBehaviour, (app::SneezeSlugIdleAggroBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00EDF7E0, void, OnUpdateBehaviour, (app::SneezeSlugIdleAggroBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EDFAB0, void, OnEndTurningBehaviourEvent, (app::SneezeSlugIdleAggroBehaviour * this_ptr, app::IEntityBehaviour * behaviour, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, (app::SneezeSlugIdleAggroBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::SneezeSlugIdleAggroBehaviour * this_ptr))
}
