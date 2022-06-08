#include <interception_macros.h>

namespace app::methods::NPCMessageBoxWrapper {
IL2CPP_REGISTER_METHOD(0x00881EE0, void, ShowMessage, (NPCMessageBoxWrapper * __this, IMessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x00882040, void, ShowInteractionMessage, (NPCMessageBoxWrapper * __this, IMessageProvider * messageProvider, InteractionSettings * interactionSettings));
IL2CPP_REGISTER_METHOD(0x008821B0, void, HideMessage, (NPCMessageBoxWrapper * __this));
IL2CPP_REGISTER_METHOD(0x00882280, bool, get_IsActiveAndEnabled, (NPCMessageBoxWrapper * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NPCMessageBoxWrapper * __this));
}
