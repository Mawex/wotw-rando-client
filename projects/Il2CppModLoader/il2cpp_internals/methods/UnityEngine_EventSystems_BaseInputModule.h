#include <interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::BaseInputModule {
IL2CPP_REGISTER_METHOD(0x01F1A120, void, __ctor, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F1A330, BaseInput *, get_input, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F1A580, BaseInput *, get_inputOverride, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_inputOverride, (BaseInputModule * __this, BaseInput * value));
IL2CPP_REGISTER_METHOD(0x01F1A590, EventSystem *, get_eventSystem, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F1A5A0, void, OnEnable, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F1A640, void, OnDisable, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F1A660, RaycastResult, FindFirstRaycast, (List_1_UnityEngine_EventSystems_RaycastResult_ * candidates));
IL2CPP_REGISTER_METHOD(0x01F1A830, MoveDirection__Enum, DetermineMoveDirection, (float x, float y));
IL2CPP_REGISTER_METHOD(0x01F1A850, MoveDirection__Enum, DetermineMoveDirection, (float x, float y, float deadZone));
IL2CPP_REGISTER_METHOD(0x01F1A980, GameObject *, FindCommonRoot, (GameObject * g1, GameObject * g2));
IL2CPP_REGISTER_METHOD(0x01F1ABE0, void, HandlePointerExitAndEnter, (BaseInputModule * __this, PointerEventData * currentPointerData, GameObject * newEnterTarget));
IL2CPP_REGISTER_METHOD(0x01F1B170, AxisEventData *, GetAxisEventData, (BaseInputModule * __this, float x, float y, float moveDeadZone));
IL2CPP_REGISTER_METHOD(0x01F1B400, BaseEventData *, GetBaseEventData, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, IsPointerOverGameObject, (BaseInputModule * __this, int32_t pointerId));
IL2CPP_REGISTER_METHOD(0x01F1B580, bool, ShouldActivateModule, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DeactivateModule, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ActivateModule, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateModule, (BaseInputModule * __this));
IL2CPP_REGISTER_METHOD(0x01F1B650, bool, IsModuleSupported, (BaseInputModule * __this));
}
