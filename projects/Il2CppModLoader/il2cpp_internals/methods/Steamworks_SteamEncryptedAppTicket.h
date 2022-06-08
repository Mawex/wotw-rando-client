#include <interception_macros.h>

namespace app::methods::Steamworks::SteamEncryptedAppTicket {
IL2CPP_REGISTER_METHOD(0x016022C0, bool, BDecryptTicket, (Byte__Array * rgubTicketEncrypted, uint32_t cubTicketEncrypted, Byte__Array * rgubTicketDecrypted, uint32_t * pcubTicketDecrypted, Byte__Array * rgubKey, int32_t cubKey));
IL2CPP_REGISTER_METHOD(0x016023C0, bool, BIsTicketForApp, (Byte__Array * rgubTicketDecrypted, uint32_t cubTicketDecrypted, AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x01602480, uint32_t, GetTicketIssueTime, (Byte__Array * rgubTicketDecrypted, uint32_t cubTicketDecrypted));
IL2CPP_REGISTER_METHOD(0x01602530, void, GetTicketSteamID, (Byte__Array * rgubTicketDecrypted, uint32_t cubTicketDecrypted, CSteamID * psteamID));
IL2CPP_REGISTER_METHOD(0x016025F0, uint32_t, GetTicketAppID, (Byte__Array * rgubTicketDecrypted, uint32_t cubTicketDecrypted));
IL2CPP_REGISTER_METHOD(0x016026A0, bool, BUserOwnsAppInTicket, (Byte__Array * rgubTicketDecrypted, uint32_t cubTicketDecrypted, AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x01602760, bool, BUserIsVacBanned, (Byte__Array * rgubTicketDecrypted, uint32_t cubTicketDecrypted));
IL2CPP_REGISTER_METHOD(0x027E9A40, Byte__Array *, GetUserVariableData, (Byte__Array * rgubTicketDecrypted, uint32_t cubTicketDecrypted, uint32_t * pcubUserData));
IL2CPP_REGISTER_METHOD(0x016028E0, bool, BIsTicketSigned, (Byte__Array * rgubTicketDecrypted, uint32_t cubTicketDecrypted, Byte__Array * pubRSAKey, uint32_t cubRSAKey));
}
