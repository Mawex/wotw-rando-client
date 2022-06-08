using namespace app;

namespace app::methods::FrogDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00A48970, void, SkipDeathTimeline, (FrogDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x016469C0, void, OnInitializeTask, (FrogDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01646A80, void, OnEnterTask, (FrogDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01646CB0, void, PlayTimeline, (FrogDeathReactionBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (FrogDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01646CE0, void, Explode, (FrogDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047704C8, FrogDeathReactionBehaviour_Explode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01646ED0, void, __ctor, (FrogDeathReactionBehaviour * __this));
}
