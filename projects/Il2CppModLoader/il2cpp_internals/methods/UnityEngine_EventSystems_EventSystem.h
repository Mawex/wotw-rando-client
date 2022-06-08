#include <interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::EventSystem {
IL2CPP_REGISTER_METHOD(0x01F1BDD0, void, __ctor, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1BF40, EventSystem *, get_current, ());
IL2CPP_REGISTER_METHOD(0x01F1C040, void, set_current, (EventSystem * value));
IL2CPP_REGISTER_METHOD(0x01F1C1B0, bool, get_sendNavigationEvents, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_sendNavigationEvents, (EventSystem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01F1C1C0, int32_t, get_pixelDragThreshold, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x00843E80, void, set_pixelDragThreshold, (EventSystem * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01F1C1D0, BaseInputModule *, get_currentInputModule, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1A590, GameObject *, get_firstSelectedGameObject, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_firstSelectedGameObject, (EventSystem * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x01F1A580, GameObject *, get_currentSelectedGameObject, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, GameObject *, get_lastSelectedGameObject, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1C1E0, bool, get_isFocused, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1C1F0, void, UpdateModules, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1C380, bool, get_alreadySelecting, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1C390, void, SetSelectedGameObject, (EventSystem * __this, GameObject * selected, BaseEventData * pointer));
IL2CPP_REGISTER_METHOD(0x01F1C630, BaseEventData *, get_baseEventDataCache, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1C780, void, SetSelectedGameObject, (EventSystem * __this, GameObject * selected));
IL2CPP_REGISTER_METHOD(0x01F1C8E0, int32_t, RaycastComparer, (RaycastResult lhs, RaycastResult rhs));
IL2CPP_REGISTER_METHODINFO(0x04789BD8, EventSystem_RaycastComparer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F1CD40, void, RaycastAll, (EventSystem * __this, PointerEventData * eventData, List_1_UnityEngine_EventSystems_RaycastResult_ * raycastResults));
IL2CPP_REGISTER_METHOD(0x01F1CFE0, bool, IsPointerOverGameObject, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1D0C0, bool, IsPointerOverGameObject, (EventSystem * __this, int32_t pointerId));
IL2CPP_REGISTER_METHOD(0x01F1D1B0, void, OnEnable, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1D270, void, OnDisable, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1D390, void, TickModules, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x00585320, void, OnApplicationFocus, (EventSystem * __this, bool hasFocus));
IL2CPP_REGISTER_METHOD(0x01F1D500, void, Update, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1D960, void, ChangeEventModule, (EventSystem * __this, BaseInputModule * module));
IL2CPP_REGISTER_METHOD(0x01F1DAC0, String *, ToString, (EventSystem * __this));
IL2CPP_REGISTER_METHOD(0x01F1DD10, void, __cctor, ());
}
