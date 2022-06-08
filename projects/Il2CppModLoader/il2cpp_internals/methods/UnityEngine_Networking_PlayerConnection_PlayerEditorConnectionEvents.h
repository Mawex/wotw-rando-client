using namespace app;

namespace app::methods::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents {
IL2CPP_REGISTER_METHOD(0x0253F770, void, __ctor, (PlayerEditorConnectionEvents * __this));
IL2CPP_REGISTER_METHOD(0x0253FA50, void, InvokeMessageIdSubscribers, (PlayerEditorConnectionEvents * __this, Guid messageId, Byte__Array * data, int32_t playerId));
IL2CPP_REGISTER_METHOD(0x0253FF60, UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ *, AddAndCreate, (PlayerEditorConnectionEvents * __this, Guid messageId));
IL2CPP_REGISTER_METHOD(0x025404F0, void, UnregisterManagedCallback, (PlayerEditorConnectionEvents * __this, Guid messageId, UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * callback));
}
