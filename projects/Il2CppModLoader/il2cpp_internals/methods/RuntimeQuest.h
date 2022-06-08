using namespace app;

namespace app::methods::RuntimeQuest {
IL2CPP_REGISTER_METHOD(0x0137AAD0, void, CatchUpState, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0137AB70, Quest_QuestState__Enum, get_State, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0137ACB0, void, set_State, (RuntimeQuest * __this, Quest_QuestState__Enum value));
IL2CPP_REGISTER_METHOD(0x0137AD80, bool, get_Unassigned, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0137ADA0, bool, get_IsAssigned, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0137ADC0, bool, get_IsCompleted, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0137ADE0, bool, get_IsLastInChain, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_QuestChainLength, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0137AE80, bool, ShouldAutoAssign, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0137AF60, bool, ShouldAutoComplete, (RuntimeQuest * __this));
IL2CPP_REGISTER_METHOD(0x0137B030, void, __ctor, (RuntimeQuest * __this, Quest * quest));
}
