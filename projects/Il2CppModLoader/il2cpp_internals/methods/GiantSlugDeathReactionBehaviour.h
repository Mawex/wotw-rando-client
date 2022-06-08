using namespace app;

namespace app::methods::GiantSlugDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x007F2CD0, int32_t, get_RandomIndex, (GiantSlugDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x007F2E20, void, OnInitializeTask, (GiantSlugDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007F2E70, void, OnEnterTask, (GiantSlugDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007F3020, void, SpawnSlug, (GiantSlugDeathReactionBehaviour * __this, int32_t number));
IL2CPP_REGISTER_METHOD(0x00417920, BehaviourStatus__Enum, OnExecuteTask, (GiantSlugDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (GiantSlugDeathReactionBehaviour * __this));
}
