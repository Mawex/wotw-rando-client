using namespace app;

namespace app::methods::UnityEngine::Networking::PlayerConnection::PlayerConnection {
IL2CPP_REGISTER_METHOD(0x0253D780, void, __ctor, (PlayerConnection * __this));
IL2CPP_REGISTER_METHOD(0x0253DA50, PlayerConnection *, get_instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0253DC00, bool, get_isConnected, (PlayerConnection * __this));
IL2CPP_REGISTER_METHOD(0x0253DCA0, PlayerConnection *, CreateInstance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0253DDA0, void, OnEnable, (PlayerConnection * __this));
IL2CPP_REGISTER_METHOD(0x0253DE50, IPlayerEditorConnectionNative *, GetConnectionNativeApi, (PlayerConnection * __this));
IL2CPP_REGISTER_METHOD(0x0253DFA0, void, Register, (PlayerConnection * __this, Guid messageId, UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * callback));
IL2CPP_REGISTER_METHODINFO(0x04745310, PlayerConnection_Register__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253E340, void, Unregister, (PlayerConnection * __this, Guid messageId, UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * callback));
IL2CPP_REGISTER_METHOD(0x0253E600, void, RegisterConnection, (PlayerConnection * __this, UnityAction_1_System_Int32_ * callback));
IL2CPP_REGISTER_METHOD(0x0253E840, void, RegisterDisconnection, (PlayerConnection * __this, UnityAction_1_System_Int32_ * callback));
IL2CPP_REGISTER_METHOD(0x0253E910, void, Send, (PlayerConnection * __this, Guid messageId, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x0475C330, PlayerConnection_Send__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253EAE0, bool, TrySend, (PlayerConnection * __this, Guid messageId, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x04786128, PlayerConnection_TrySend__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253ECB0, bool, BlockUntilRecvMsg, (PlayerConnection * __this, Guid messageId, int32_t timeout));
IL2CPP_REGISTER_METHOD(0x0253F0C0, void, DisconnectAll, (PlayerConnection * __this));
IL2CPP_REGISTER_METHOD(0x0253F160, void, MessageCallbackInternal, (void * data, uint64_t size, uint64_t guid, String * messageId));
IL2CPP_REGISTER_METHODINFO(0x04751230, PlayerConnection_MessageCallbackInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253F2E0, void, ConnectedCallbackInternal, (int32_t playerId));
IL2CPP_REGISTER_METHOD(0x0253F440, void, DisconnectedCallback, (int32_t playerId));
}
