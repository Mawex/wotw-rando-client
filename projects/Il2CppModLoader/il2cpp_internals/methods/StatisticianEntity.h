using namespace app;

namespace app::methods::StatisticianEntity {
IL2CPP_REGISTER_METHOD(0x009B7220, String *, get_DialogActorName, (StatisticianEntity * __this));
IL2CPP_REGISTER_METHOD(0x009B72A0, String *, get_InteractionActorName, (StatisticianEntity * __this));
IL2CPP_REGISTER_METHOD(0x009B7320, void, OnEnable, (StatisticianEntity * __this));
IL2CPP_REGISTER_METHOD(0x009B74E0, void, OnDisable, (StatisticianEntity * __this));
IL2CPP_REGISTER_METHOD(0x009B76A0, void, PlayHiddenAnimation, (StatisticianEntity * __this));
IL2CPP_REGISTER_METHOD(0x009B7880, bool, ShouldPlayHiddenAnimation, (StatisticianEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x047578C0, StatisticianEntity_ShouldPlayHiddenAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B7890, void, OnInteractionEnd, (StatisticianEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x009B78D0, void, OnUpdate, (StatisticianEntity * __this));
IL2CPP_REGISTER_METHOD(0x009B7920, void, OnHideFinished, (StatisticianEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04747680, StatisticianEntity_OnHideFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (StatisticianEntity * __this));
}
