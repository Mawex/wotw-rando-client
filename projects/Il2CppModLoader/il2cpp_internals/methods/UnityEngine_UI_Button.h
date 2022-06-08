#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::Button {
IL2CPP_REGISTER_METHOD(0x01F2BB30, void, __ctor, (Button * __this));
IL2CPP_REGISTER_METHOD(0x01F2BCB0, Button_ButtonClickedEvent *, get_onClick, (Button * __this));
IL2CPP_REGISTER_METHOD(0x008760C0, void, set_onClick, (Button * __this, Button_ButtonClickedEvent * value));
IL2CPP_REGISTER_METHOD(0x01F2BCC0, void, Press, (Button * __this));
IL2CPP_REGISTER_METHOD(0x01F2BD90, void, OnPointerClick, (Button * __this, PointerEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F2BDC0, void, OnSubmit, (Button * __this, BaseEventData * eventData));
IL2CPP_REGISTER_METHOD(0x01F2BF70, IEnumerator *, OnFinishSubmit, (Button * __this));
}
