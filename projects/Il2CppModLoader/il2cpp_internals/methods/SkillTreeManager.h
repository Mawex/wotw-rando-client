using namespace app;

namespace app::methods::SkillTreeManager {
IL2CPP_REGISTER_METHOD(0x006B5FF0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006B6070, bool, get_AllLanesFull, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x006B60E0, void, Awake, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x006B66D0, void, OnBackPressed, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04704D38, SkillTreeManager_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0063F120, void, Hide, (SkillTreeManager * __this, bool change));
IL2CPP_REGISTER_METHOD(0x006B6780, void, ShowImmediate, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x0063F190, void, HideImmediate, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x006B67C0, void, Show, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x006B6800, bool, Condition, (CleverMenuItemSelectionManager_NavigationData * navigationData));
IL2CPP_REGISTER_METHODINFO(0x0472A640, SkillTreeManager_Condition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B68E0, void, OnDestroy, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x006B6CF0, void, OnMenuItemPressed, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0470BCE0, SkillTreeManager_OnMenuItemPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B72F0, MessageDescriptor, get_AbilityMastered, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x006B73A0, MessageProvider *, AbilityName, (SkillTreeManager * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x006B7540, String *, RequiredAbilitiesText, (SkillTreeManager * __this, SkillItem * skillItem));
IL2CPP_REGISTER_METHOD(0x006B79E0, void, UpdateRequirementsText, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x006B7CF0, String *, NameText, (SkillTreeManager * __this, SkillItem * skillItem));
IL2CPP_REGISTER_METHOD(0x006B7DE0, String *, RequiredSoulsText, (SkillTreeManager * __this, SkillItem * skillItem));
IL2CPP_REGISTER_METHOD(0x006B8010, void, OnMenuItemChange, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04761408, SkillTreeManager_OnMenuItemChange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006B87B0, void, OnPostTimeSlicedEnable, (SkillTreeManager * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SkillTreeManager * __this));
}
