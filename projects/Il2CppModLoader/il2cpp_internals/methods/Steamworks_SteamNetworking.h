#include <interception_macros.h>

namespace app::methods::Steamworks::SteamNetworking {
IL2CPP_REGISTER_METHOD(0x0278E260, bool, SendP2PPacket, (CSteamID steamIDRemote, Byte__Array * pubData, uint32_t cubData, EP2PSend__Enum eP2PSendType, int32_t nChannel));
IL2CPP_REGISTER_METHOD(0x0278E2D0, bool, IsP2PPacketAvailable, (uint32_t * pcubMsgSize, int32_t nChannel));
IL2CPP_REGISTER_METHOD(0x0278E310, bool, ReadP2PPacket, (Byte__Array * pubDest, uint32_t cubDest, uint32_t * pcubMsgSize, CSteamID * psteamIDRemote, int32_t nChannel));
IL2CPP_REGISTER_METHOD(0x0278E380, bool, AcceptP2PSessionWithUser, (CSteamID steamIDRemote));
IL2CPP_REGISTER_METHOD(0x0278E3B0, bool, CloseP2PSessionWithUser, (CSteamID steamIDRemote));
IL2CPP_REGISTER_METHOD(0x0278E3E0, bool, CloseP2PChannelWithUser, (CSteamID steamIDRemote, int32_t nChannel));
IL2CPP_REGISTER_METHOD(0x0278E420, bool, GetP2PSessionState, (CSteamID steamIDRemote, P2PSessionState_t * pConnectionState));
IL2CPP_REGISTER_METHOD(0x0278E460, bool, AllowP2PPacketRelay, (bool bAllow));
IL2CPP_REGISTER_METHOD(0x0278E490, SNetListenSocket_t, CreateListenSocket, (int32_t nVirtualP2PPort, uint32_t nIP, uint16_t nPort, bool bAllowUseOfPacketRelay));
IL2CPP_REGISTER_METHOD(0x0278E500, SNetSocket_t, CreateP2PConnectionSocket, (CSteamID steamIDTarget, int32_t nVirtualPort, int32_t nTimeoutSec, bool bAllowUseOfPacketRelay));
IL2CPP_REGISTER_METHOD(0x0278E570, SNetSocket_t, CreateConnectionSocket, (uint32_t nIP, uint16_t nPort, int32_t nTimeoutSec));
IL2CPP_REGISTER_METHOD(0x0278E5C0, bool, DestroySocket, (SNetSocket_t hSocket, bool bNotifyRemoteEnd));
IL2CPP_REGISTER_METHOD(0x0278E600, bool, DestroyListenSocket, (SNetListenSocket_t hSocket, bool bNotifyRemoteEnd));
IL2CPP_REGISTER_METHOD(0x0278E640, bool, SendDataOnSocket, (SNetSocket_t hSocket, Byte__Array * pubData, uint32_t cubData, bool bReliable));
IL2CPP_REGISTER_METHOD(0x0278E6B0, bool, IsDataAvailableOnSocket, (SNetSocket_t hSocket, uint32_t * pcubMsgSize));
IL2CPP_REGISTER_METHOD(0x0278E6F0, bool, RetrieveDataFromSocket, (SNetSocket_t hSocket, Byte__Array * pubDest, uint32_t cubDest, uint32_t * pcubMsgSize));
IL2CPP_REGISTER_METHOD(0x0278E750, bool, IsDataAvailable, (SNetListenSocket_t hListenSocket, uint32_t * pcubMsgSize, SNetSocket_t * phSocket));
IL2CPP_REGISTER_METHOD(0x0278E7A0, bool, RetrieveData, (SNetListenSocket_t hListenSocket, Byte__Array * pubDest, uint32_t cubDest, uint32_t * pcubMsgSize, SNetSocket_t * phSocket));
IL2CPP_REGISTER_METHOD(0x0278E810, bool, GetSocketInfo, (SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int32_t * peSocketStatus, uint32_t * punIPRemote, uint16_t * punPortRemote));
IL2CPP_REGISTER_METHOD(0x0278E880, bool, GetListenSocketInfo, (SNetListenSocket_t hListenSocket, uint32_t * pnIP, uint16_t * pnPort));
IL2CPP_REGISTER_METHOD(0x0278E8D0, ESNetSocketConnectionType__Enum, GetSocketConnectionType, (SNetSocket_t hSocket));
IL2CPP_REGISTER_METHOD(0x0278E900, int32_t, GetMaxPacketSize, (SNetSocket_t hSocket));
}
