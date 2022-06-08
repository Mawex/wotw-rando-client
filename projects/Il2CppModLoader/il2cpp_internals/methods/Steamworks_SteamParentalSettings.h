using namespace app;

namespace app::methods::Steamworks::SteamParentalSettings {
IL2CPP_REGISTER_METHOD(0x0278E930, bool, BIsParentalLockEnabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278E9E0, bool, BIsParentalLockLocked, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0278EA90, bool, BIsAppBlocked, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x0278EB50, bool, BIsAppInBlockList, (AppId_t nAppID));
IL2CPP_REGISTER_METHOD(0x0278EC10, bool, BIsFeatureBlocked, (EParentalFeature__Enum eFeature));
IL2CPP_REGISTER_METHOD(0x0278ECD0, bool, BIsFeatureInBlockList, (EParentalFeature__Enum eFeature));
}
