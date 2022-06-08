using namespace app;

namespace app::methods::SetupStateModifier {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Index, (SetupStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x03144F60, String *, get_Name, (SetupStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NotMappable, (SetupStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x03145050, GameObject *, get_ModifierGameObjectTarget, (SetupStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x03145100, Transform *, get_ModifierTransformTarget, (SetupStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x03145210, void, __ctor, (SetupStateModifier * __this, int32_t guid, List_1_SetupState_ * states, Type * modifierDataType));
IL2CPP_REGISTER_METHOD(0x03145440, int32_t, get_ModifierDataCount, (SetupStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x031454D0, SetupStateModifierData *, GetUberStateModifierDataAt, (SetupStateModifier * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x03145580, SetupStateModifierData *, GetUberStateModifierData, (SetupStateModifier * __this, int32_t stateGuid));
IL2CPP_REGISTER_METHODINFO(0x047667F0, SetupStateModifier_GetUberStateModifierData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031457F0, int32_t, GetUberStateModifierDataIndex, (SetupStateModifier * __this, int32_t stateGuid));
IL2CPP_REGISTER_METHODINFO(0x047483D8, SetupStateModifier_GetUberStateModifierDataIndex__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03145A60, SetupStateModifierData *, GetCorrectUberStateModifierDataType, (SetupStateModifier * __this, SetupStateModifierData * uberStateModifierData));
IL2CPP_REGISTER_METHOD(0x03145C80, void, AddData, (SetupStateModifier * __this, SetupStateModifierData * modifierData, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x03145D40, void, RemoveDataWithStateGuid, (SetupStateModifier * __this, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x03145E30, SetupStateModifierDataType__Enum, get_ModifierDataClassID, (SetupStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x03145EE0, Type *, get_DataClassType, (SetupStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x03145F90, void, OnTargetChange, (SetupStateModifier * __this, GameObject * oldTarget, GameObject * newTarget));
IL2CPP_REGISTER_METHOD(0x016ABD60, Object *, GetUberStateModifierDataAt, (SetupStateModifier * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x016ABAC0, Object *, GetUberStateModifierData, (SetupStateModifier * __this, int32_t stateGuid));
IL2CPP_REGISTER_METHODINFO(0x0477FD00, SetupStateModifier_GetUberStateModifierData_1__MethodInfo);
}
