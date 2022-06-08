using namespace app;

namespace app::methods::ModularZone {
IL2CPP_REGISTER_METHOD(0x0132F750, float, get_TimeSinceLastActive, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x01292100, void, set_TimeSinceLastActive, (ModularZone * __this, float value));
IL2CPP_REGISTER_METHOD(0x0132F760, IModularZoneModifier__Array *, get_Modifiers, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_Modifiers, (ModularZone * __this, IModularZoneModifier__Array * value));
IL2CPP_REGISTER_METHOD(0x0132F790, List_1_ICondition_ *, get_ResolvedConditions, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x0132F9C0, Transform *, get_TargetTransform, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x0132FB80, bool, get_IsTargetInside, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldUpdateWhileDisabled, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x0132FCF0, void, AwakeInternal, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x0132FEA0, void, DestroyInternal, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x01330050, void, OnEnableEditor, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x01330060, void, OnDisableEditor, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x01330070, void, InitializeAllModifiers, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x01330200, void, CleanUpModifiers, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x01330390, void, OnEnableRuntime, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisableRuntime, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x013303C0, void, UpdateAllModifiers, (ModularZone * __this, float weight, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01330560, void, EditorUpdate, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x013305F0, void, OnZoneUpdate, (ModularZone * __this, float delta));
IL2CPP_REGISTER_METHOD(0x0132A7C0, void, InvalidateModifierCache, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x013308E0, void, FindModifiers, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x01330B30, IModularZoneModifier *, AddModifier, (ModularZone * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01330D20, void, RemoveModifier, (ModularZone * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01330F70, bool, HasModifier, (ModularZone * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01331040, bool, ConditionsPassed, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x013311C0, void, OnPostRestoreCheckpoint, (ModularZone * __this));
IL2CPP_REGISTER_METHODINFO(0x0473F430, ModularZone_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01331230, void, __ctor, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x015EB9B0, Object *, AddModifier, (ModularZone * __this));
IL2CPP_REGISTER_METHOD(0x018F31E0, bool, HasModifier, (ModularZone * __this));
}
