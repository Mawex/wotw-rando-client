#include <interception_macros.h>

namespace app::methods::SetupControllerStateHolder {
IL2CPP_REGISTER_METHOD(0x00AEDE10, bool, get_UseMapping, (SetupControllerStateHolder * __this));
IL2CPP_REGISTER_METHOD(0x00AEDE10, bool, get_UseUberState, (SetupControllerStateHolder * __this));
IL2CPP_REGISTER_METHOD(0x01B7ADC0, void, GetSetupStates, (SetupControllerStateHolder * __this, List_1_IIndexedItem_ * toPopulate));
IL2CPP_REGISTER_METHOD(0x01B7AEC0, int32_t, get_StateCount, (SetupControllerStateHolder * __this));
IL2CPP_REGISTER_METHOD(0x01B7AF50, Dictionary_2_System_Int32_SetupStateModifier_ *, get_GuidToUberStateModifier, (SetupControllerStateHolder * __this));
IL2CPP_REGISTER_METHOD(0x01B7AFF0, void, BuildModifierDictionary, (SetupControllerStateHolder * __this));
IL2CPP_REGISTER_METHOD(0x01B7B240, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SetupControllerStateHolder * __this));
IL2CPP_REGISTER_METHOD(0x01B7B4A0, int32_t, get_ModifiersCount, (SetupControllerStateHolder * __this));
IL2CPP_REGISTER_METHOD(0x01B7B530, SetupStateModifier *, GetModifierAt, (SetupControllerStateHolder * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01B7B5E0, int32_t, GetModifierIndex, (SetupControllerStateHolder * __this, int32_t modifierGuid));
IL2CPP_REGISTER_METHOD(0x01B7B6E0, SetupState *, GetStateAt, (SetupControllerStateHolder * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01B7B790, List_1_SetupStateModifierData_ *, GetModifierData, (SetupControllerStateHolder * __this, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x01B7B970, SetupState *, GetStateByGuid, (SetupControllerStateHolder * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x01B7BAE0, bool, TryToGetStateByGuid, (SetupControllerStateHolder * __this, int32_t guid, SetupState * * state));
IL2CPP_REGISTER_METHOD(0x01B7BBE0, bool, HasState, (SetupControllerStateHolder * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x01B7BCD0, int32_t, GetStateIndexByGuid, (SetupControllerStateHolder * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x01B7BE20, void, AddState, (SetupControllerStateHolder * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01B7C0D0, void, RemoveState, (SetupControllerStateHolder * __this, SetupState * state));
IL2CPP_REGISTER_METHOD(0x01B7C550, SetupStateModifier *, AddModifier, (SetupControllerStateHolder * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01B7C790, int32_t, ProduceNewGuid, (SetupControllerStateHolder * __this));
IL2CPP_REGISTER_METHOD(0x01B7C8B0, SetupStateModifier *, GetUberStateModifier, (SetupControllerStateHolder * __this, int32_t uberStateModifierGUID));
IL2CPP_REGISTER_METHOD(0x01B7C960, bool, ModifierDataExists, (SetupControllerStateHolder * __this, int32_t modifierGUID, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x01B7CA90, void, SetModifier, (SetupControllerStateHolder * __this, int32_t guid, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x01B7CB70, void, RemoveModifier, (SetupControllerStateHolder * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01B7CC70, void, RemoveModifier, (SetupControllerStateHolder * __this, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x01B7CD40, void, RemoveModifierDataByStateGUID, (SetupControllerStateHolder * __this, SetupStateModifier * modifier, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x01B7CE40, bool, ContainsModifier, (SetupControllerStateHolder * __this, int32_t modifierGUID));
IL2CPP_REGISTER_METHOD(0x01B7CF00, void, __ctor, (SetupControllerStateHolder * __this));
}
