#include <interception_macros.h>

namespace app::methods::ReplayServer {
IL2CPP_REGISTER_METHOD(0x008FF6A0, void, Awake, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x008FF700, void, Start, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x008FFAC0, void, Update, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x008FFBA0, void, InitServer, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x008FFBB0, void, ListenToIncommingConnections, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x008FFE30, void, StartReceiving, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x00900080, void, ProcessClientRequests, (ReplayServer * __this));
IL2CPP_REGISTER_METHODINFO(0x0477D370, ReplayServer_ProcessClientRequests__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00900360, void, ProcessSerializableObjectMessage, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x009004E0, void, OnClientDisconnect, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x009005D0, void, Simulate, (ReplayServer * __this, List_1_ServerObject_ * objs));
IL2CPP_REGISTER_METHOD(0x009011A0, void, OnEndRecording, (ReplayServer * __this, Byte__Array * ghostRecorderData));
IL2CPP_REGISTER_METHODINFO(0x0476B598, ReplayServer_OnEndRecording__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009012D0, void, SendSerializableObjectToCLient, (ReplayServer * __this, Object * serializableObj));
IL2CPP_REGISTER_METHODINFO(0x047199A8, ReplayServer_SendSerializableObjectToCLient__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00901400, void, OnDisable, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x00901400, void, ShutDownServer, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x00901430, void, RestartServer, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x00901460, void, InsertServerLog, (String * logMessage));
IL2CPP_REGISTER_METHOD(0x009015B0, void, OnGUI, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ReplayServer * __this));
IL2CPP_REGISTER_METHOD(0x00901770, void, __cctor, ());
}
