#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ShowQuestEntity {
IL2CPP_REGISTER_METHOD(0x00D02D50, void, OnEnable, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D02D60, void, Awake, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D02F10, void, OnDestroy, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D02D50, void, OnPostRetoreCheckpoint, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D1F8, ShowQuestEntity_OnPostRetoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D030C0, void, ClearQuestShownFlag, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D03190, void, ChangeState, (ShowQuestEntity * __this, ShowQuestEntity_State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04749698, ShowQuestEntity_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D03980, void, SetQuestIcons, (ShowQuestEntity * __this, QuestIconMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x00D03DD0, bool, CanUpdate, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D03DF0, void, FixedUpdate, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D03E90, void, OnUpdateEntity, (ShowQuestEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHODINFO(0x0472E570, ShowQuestEntity_OnUpdateEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D04340, void, OnVisibilityChangedCallback, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x047701F8, ShowQuestEntity_OnVisibilityChangedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D04420, void, OnStartPlayback, (ShowQuestEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D046E0, void, OnStopPlayback, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D048D0, void, OnMenuClose, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04753BD8, ShowQuestEntity_OnMenuClose__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D048F0, bool, HasFinished, (ShowQuestEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00D04910, void, __ctor, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D049E0, void, _ChangeState_b__15_0, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x047431A8, ShowQuestEntity__ChangeState_b__15_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D04C80, void, _OnStartPlayback_b__23_0, (ShowQuestEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04732540, ShowQuestEntity__OnStartPlayback_b__23_0__MethodInfo);
}
