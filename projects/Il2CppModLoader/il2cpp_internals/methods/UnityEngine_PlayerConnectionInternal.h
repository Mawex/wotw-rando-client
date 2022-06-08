#include <interception_macros.h>

namespace app::methods::UnityEngine::PlayerConnectionInternal {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayerConnectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x02967300, void, IPlayerEditorConnectionNative_SendMessage, (PlayerConnectionInternal * __this, Guid messageId, Byte__Array * data, int32_t playerId));
IL2CPP_REGISTER_METHODINFO(0x04779AE0, PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02967470, bool, IPlayerEditorConnectionNative_TrySendMessage, (PlayerConnectionInternal * __this, Guid messageId, Byte__Array * data, int32_t playerId));
IL2CPP_REGISTER_METHODINFO(0x0478ACC8, PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_TrySendMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029675E0, void, IPlayerEditorConnectionNative_Poll, (PlayerConnectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x02967630, void, IPlayerEditorConnectionNative_RegisterInternal, (PlayerConnectionInternal * __this, Guid messageId));
IL2CPP_REGISTER_METHOD(0x02967700, void, IPlayerEditorConnectionNative_UnregisterInternal, (PlayerConnectionInternal * __this, Guid messageId));
IL2CPP_REGISTER_METHOD(0x029677D0, void, IPlayerEditorConnectionNative_Initialize, (PlayerConnectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x02967820, bool, IPlayerEditorConnectionNative_IsConnected, (PlayerConnectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x02967870, void, IPlayerEditorConnectionNative_DisconnectAll, (PlayerConnectionInternal * __this));
IL2CPP_REGISTER_METHOD(0x02967820, bool, IsConnected, ());
IL2CPP_REGISTER_METHOD(0x029677D0, void, Initialize, ());
IL2CPP_REGISTER_METHOD(0x029678C0, void, RegisterInternal, (String * messageId));
IL2CPP_REGISTER_METHOD(0x02967910, void, UnregisterInternal, (String * messageId));
IL2CPP_REGISTER_METHOD(0x02967960, void, SendMessage, (String * messageId, Byte__Array * data, int32_t playerId));
IL2CPP_REGISTER_METHOD(0x029679D0, bool, TrySendMessage, (String * messageId, Byte__Array * data, int32_t playerId));
IL2CPP_REGISTER_METHOD(0x029675E0, void, PollInternal, ());
IL2CPP_REGISTER_METHOD(0x02967870, void, DisconnectAll, ());
}
