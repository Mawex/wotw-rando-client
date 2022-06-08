using namespace app;

namespace app::methods::MudkisserDeathReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x00872D40, void, OnInitializeTask, (MudkisserDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00872EC0, void, StartDeathTimeline, (MudkisserDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008730E0, void, TimelineFinished, (MudkisserDeathReactionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047206A8, MudkisserDeathReactionBehaviour_TimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00873100, void, OnEnterTask, (MudkisserDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008732C0, BehaviourStatus__Enum, OnExecuteTask, (MudkisserDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (MudkisserDeathReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00873980, void, __ctor, (MudkisserDeathReactionBehaviour * __this));
}
