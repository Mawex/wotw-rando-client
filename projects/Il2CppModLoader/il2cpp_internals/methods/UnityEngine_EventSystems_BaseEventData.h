#include <interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::BaseEventData {
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (BaseEventData * __this, EventSystem * eventSystem));
IL2CPP_REGISTER_METHOD(0x0195B1D0, BaseInputModule *, get_currentInputModule, (BaseEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F19BE0, GameObject *, get_selectedObject, (BaseEventData * __this));
IL2CPP_REGISTER_METHOD(0x01F19C00, void, set_selectedObject, (BaseEventData * __this, GameObject * value));
}
