#include <interception_macros.h>

namespace app::methods::XboxControllerRenderer {
IL2CPP_REGISTER_METHOD(0x00593980, void, Start, (XboxControllerRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00593A90, void, OnValidate, (XboxControllerRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00593BD0, void, Update, (XboxControllerRenderer * __this));
IL2CPP_REGISTER_METHOD(0x00593E20, void, HandleButton, (XboxControllerRenderer * __this, XboxControllerRenderer_ButtonContainer * buttonContainer));
IL2CPP_REGISTER_METHODINFO(0x0478D260, XboxControllerRenderer_HandleButton__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00594340, void, HighLightButton, (XboxControllerRenderer * __this, XboxControllerRenderer_ButtonContainer * button, bool active));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (XboxControllerRenderer * __this));
}
