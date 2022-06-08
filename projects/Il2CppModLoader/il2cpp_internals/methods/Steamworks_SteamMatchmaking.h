#include <interception_macros.h>

namespace app::methods::Steamworks::SteamMatchmaking {
IL2CPP_REGISTER_METHOD(0x02786860, int32_t, GetFavoriteGameCount, ());
IL2CPP_REGISTER_METHOD(0x02786910, bool, GetFavoriteGame, (int32_t iGame, AppId_t * pnAppID, uint32_t * pnIP, uint16_t * pnConnPort, uint16_t * pnQueryPort, uint32_t * punFlags, uint32_t * pRTime32LastPlayedOnServer));
IL2CPP_REGISTER_METHOD(0x02786A30, int32_t, AddFavoriteGame, (AppId_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags, uint32_t rTime32LastPlayedOnServer));
IL2CPP_REGISTER_METHOD(0x02786B40, bool, RemoveFavoriteGame, (AppId_t nAppID, uint32_t nIP, uint16_t nConnPort, uint16_t nQueryPort, uint32_t unFlags));
IL2CPP_REGISTER_METHOD(0x02786C40, SteamAPICall_t, RequestLobbyList, ());
IL2CPP_REGISTER_METHOD(0x02786D70, void, AddRequestLobbyListStringFilter, (String * pchKeyToMatch, String * pchValueToMatch, ELobbyComparison__Enum eComparisonType));
IL2CPP_REGISTER_METHOD(0x027871C0, void, AddRequestLobbyListNumericalFilter, (String * pchKeyToMatch, int32_t nValueToMatch, ELobbyComparison__Enum eComparisonType));
IL2CPP_REGISTER_METHOD(0x027874A0, void, AddRequestLobbyListNearValueFilter, (String * pchKeyToMatch, int32_t nValueToBeCloseTo));
IL2CPP_REGISTER_METHOD(0x02787780, void, AddRequestLobbyListFilterSlotsAvailable, (int32_t nSlotsAvailable));
IL2CPP_REGISTER_METHOD(0x02787830, void, AddRequestLobbyListDistanceFilter, (ELobbyDistanceFilter__Enum eLobbyDistanceFilter));
IL2CPP_REGISTER_METHOD(0x027878E0, void, AddRequestLobbyListResultCountFilter, (int32_t cMaxResults));
IL2CPP_REGISTER_METHOD(0x02787990, void, AddRequestLobbyListCompatibleMembersFilter, (CSteamID steamIDLobby));
IL2CPP_REGISTER_METHOD(0x02787A50, CSteamID, GetLobbyByIndex, (int32_t iLobby));
IL2CPP_REGISTER_METHOD(0x02787B90, SteamAPICall_t, CreateLobby, (ELobbyType__Enum eLobbyType, int32_t cMaxMembers));
IL2CPP_REGISTER_METHOD(0x02787CE0, SteamAPICall_t, JoinLobby, (CSteamID steamIDLobby));
IL2CPP_REGISTER_METHOD(0x02787E20, void, LeaveLobby, (CSteamID steamIDLobby));
IL2CPP_REGISTER_METHOD(0x02787EE0, bool, InviteUserToLobby, (CSteamID steamIDLobby, CSteamID steamIDInvitee));
IL2CPP_REGISTER_METHOD(0x02787FB0, int32_t, GetNumLobbyMembers, (CSteamID steamIDLobby));
IL2CPP_REGISTER_METHOD(0x02788070, CSteamID, GetLobbyMemberByIndex, (CSteamID steamIDLobby, int32_t iMember));
IL2CPP_REGISTER_METHOD(0x027881C0, String *, GetLobbyData, (CSteamID steamIDLobby, String * pchKey));
IL2CPP_REGISTER_METHOD(0x027884B0, bool, SetLobbyData, (CSteamID steamIDLobby, String * pchKey, String * pchValue));
IL2CPP_REGISTER_METHOD(0x02788910, int32_t, GetLobbyDataCount, (CSteamID steamIDLobby));
IL2CPP_REGISTER_METHOD(0x027889D0, bool, GetLobbyDataByIndex, (CSteamID steamIDLobby, int32_t iLobbyData, String * * pchKey, int32_t cchKeyBufferSize, String * * pchValue, int32_t cchValueBufferSize));
IL2CPP_REGISTER_METHOD(0x02788C00, bool, DeleteLobbyData, (CSteamID steamIDLobby, String * pchKey));
IL2CPP_REGISTER_METHOD(0x02788EF0, String *, GetLobbyMemberData, (CSteamID steamIDLobby, CSteamID steamIDUser, String * pchKey));
IL2CPP_REGISTER_METHOD(0x02789200, void, SetLobbyMemberData, (CSteamID steamIDLobby, String * pchKey, String * pchValue));
IL2CPP_REGISTER_METHOD(0x02789650, bool, SendLobbyChatMsg, (CSteamID steamIDLobby, Byte__Array * pvMsgBody, int32_t cubMsgBody));
IL2CPP_REGISTER_METHOD(0x02789740, int32_t, GetLobbyChatEntry, (CSteamID steamIDLobby, int32_t iChatID, CSteamID * pSteamIDUser, Byte__Array * pvData, int32_t cubData, EChatEntryType__Enum * peChatEntryType));
IL2CPP_REGISTER_METHOD(0x02789860, bool, RequestLobbyData, (CSteamID steamIDLobby));
IL2CPP_REGISTER_METHOD(0x02789920, void, SetLobbyGameServer, (CSteamID steamIDLobby, uint32_t unGameServerIP, uint16_t unGameServerPort, CSteamID steamIDGameServer));
IL2CPP_REGISTER_METHOD(0x02789A10, bool, GetLobbyGameServer, (CSteamID steamIDLobby, uint32_t * punGameServerIP, uint16_t * punGameServerPort, CSteamID * psteamIDGameServer));
IL2CPP_REGISTER_METHOD(0x02789B00, bool, SetLobbyMemberLimit, (CSteamID steamIDLobby, int32_t cMaxMembers));
IL2CPP_REGISTER_METHOD(0x02789BD0, int32_t, GetLobbyMemberLimit, (CSteamID steamIDLobby));
IL2CPP_REGISTER_METHOD(0x02789C90, bool, SetLobbyType, (CSteamID steamIDLobby, ELobbyType__Enum eLobbyType));
IL2CPP_REGISTER_METHOD(0x02789D60, bool, SetLobbyJoinable, (CSteamID steamIDLobby, bool bLobbyJoinable));
IL2CPP_REGISTER_METHOD(0x02789E30, CSteamID, GetLobbyOwner, (CSteamID steamIDLobby));
IL2CPP_REGISTER_METHOD(0x02789F70, bool, SetLobbyOwner, (CSteamID steamIDLobby, CSteamID steamIDNewOwner));
IL2CPP_REGISTER_METHOD(0x0278A040, bool, SetLinkedLobby, (CSteamID steamIDLobby, CSteamID steamIDLobbyDependent));
}
