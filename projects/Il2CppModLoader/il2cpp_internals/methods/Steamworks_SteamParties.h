using namespace app;

namespace app::methods::Steamworks::SteamParties {
IL2CPP_REGISTER_METHOD(0x0278ED90, uint32_t, GetNumActiveBeacons, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278EE40, PartyBeaconID_t, GetBeaconByIndex, (uint32_t unIndex));
IL2CPP_REGISTER_METHOD(0x0278EF80, bool, GetBeaconDetails, (PartyBeaconID_t ulBeaconID, CSteamID * pSteamIDBeaconOwner, SteamPartyBeaconLocation_t * pLocation, String * * pchMetadata, int32_t cchMetadata));
IL2CPP_REGISTER_METHOD(0x0278F140, SteamAPICall_t, JoinParty, (PartyBeaconID_t ulBeaconID));
IL2CPP_REGISTER_METHOD(0x0278F280, bool, GetNumAvailableBeaconLocations, (uint32_t * puNumLocations));
IL2CPP_REGISTER_METHOD(0x0278F340, bool, GetAvailableBeaconLocations, (SteamPartyBeaconLocation_t__Array * pLocationList, uint32_t uMaxNumLocations));
IL2CPP_REGISTER_METHOD(0x0278F410, SteamAPICall_t, CreateBeacon, (uint32_t unOpenSlots, SteamPartyBeaconLocation_t * pBeaconLocation, String * pchConnectString, String * pchMetadata));
IL2CPP_REGISTER_METHOD(0x0278F8A0, void, OnReservationCompleted, (PartyBeaconID_t ulBeacon, CSteamID steamIDUser));
IL2CPP_REGISTER_METHOD(0x0278F970, void, CancelReservation, (PartyBeaconID_t ulBeacon, CSteamID steamIDUser));
IL2CPP_REGISTER_METHOD(0x0278FA40, SteamAPICall_t, ChangeNumOpenSlots, (PartyBeaconID_t ulBeacon, uint32_t unOpenSlots));
IL2CPP_REGISTER_METHOD(0x0278FB90, bool, DestroyBeacon, (PartyBeaconID_t ulBeacon));
IL2CPP_REGISTER_METHOD(0x0278FC50, bool, GetBeaconLocationData, (SteamPartyBeaconLocation_t BeaconLocation, ESteamPartyBeaconLocationData__Enum eData, String * * pchDataStringOut, int32_t cchDataStringOut));
}
