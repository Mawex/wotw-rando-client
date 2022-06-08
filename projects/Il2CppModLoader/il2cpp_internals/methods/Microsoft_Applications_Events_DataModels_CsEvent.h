using namespace app;

namespace app::methods::Microsoft::Applications::Events::DataModels::CsEvent {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_ver, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ver, (CsEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_name, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_name, (CsEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_time, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_time, (CsEvent * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_popSample, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBB30, void, set_popSample, (CsEvent * __this, double value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_iKey, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_iKey, (CsEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, int64_t, get_flags, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_flags, (CsEvent * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_cV, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_cV, (CsEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_Microsoft_Applications_Events_DataModels_Ingest_ *, get_extIngest, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_extIngest, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Ingest_ * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, List_1_Microsoft_Applications_Events_DataModels_Protocol_ *, get_extProtocol, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_extProtocol, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Protocol_ * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_Microsoft_Applications_Events_DataModels_User_ *, get_extUser, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_extUser, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_User_ * value));
IL2CPP_REGISTER_METHOD(0x002FBB80, List_1_Microsoft_Applications_Events_DataModels_Device_ *, get_extDevice, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_extDevice, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Device_ * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, List_1_Microsoft_Applications_Events_DataModels_Os_ *, get_extOs, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_extOs, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Os_ * value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, List_1_Microsoft_Applications_Events_DataModels_App_ *, get_extApp, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_extApp, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_App_ * value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, List_1_Microsoft_Applications_Events_DataModels_Utc_ *, get_extUtc, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_extUtc, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Utc_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC00, List_1_Microsoft_Applications_Events_DataModels_Xbl_ *, get_extXbl, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_extXbl, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Xbl_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, List_1_Microsoft_Applications_Events_DataModels_Javascript_ *, get_extJavascript, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_extJavascript, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Javascript_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC40, List_1_Microsoft_Applications_Events_DataModels_Receipts_ *, get_extReceipts, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_extReceipts, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Receipts_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC60, List_1_Microsoft_Applications_Events_DataModels_Net_ *, get_extNet, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_extNet, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Net_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC80, List_1_Microsoft_Applications_Events_DataModels_Sdk_ *, get_extSdk, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_extSdk, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Sdk_ * value));
IL2CPP_REGISTER_METHOD(0x002FBCA0, List_1_Microsoft_Applications_Events_DataModels_Loc_ *, get_extLoc, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_extLoc, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Loc_ * value));
IL2CPP_REGISTER_METHOD(0x002FBCC0, List_1_Microsoft_Applications_Events_DataModels_Cloud_ *, get_extCloud, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_extCloud, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Cloud_ * value));
IL2CPP_REGISTER_METHOD(0x002FBCE0, List_1_Microsoft_Applications_Events_DataModels_Data_ *, get_ext, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_ext, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Data_ * value));
IL2CPP_REGISTER_METHOD(0x002FBD00, Dictionary_2_System_String_System_String_ *, get_tags, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_tags, (CsEvent * __this, Dictionary_2_System_String_System_String_ * value));
IL2CPP_REGISTER_METHOD(0x002FBD20, String *, get_baseType, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_baseType, (CsEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBD40, List_1_Microsoft_Applications_Events_DataModels_Data_ *, get_baseData, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_baseData, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Data_ * value));
IL2CPP_REGISTER_METHOD(0x002FBD60, List_1_Microsoft_Applications_Events_DataModels_Data_ *, get_data, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_data, (CsEvent * __this, List_1_Microsoft_Applications_Events_DataModels_Data_ * value));
IL2CPP_REGISTER_METHOD(0x002FBD80, void, __ctor, (CsEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FBE10, void, __ctor, (CsEvent * __this, String * fullName, String * name));
IL2CPP_REGISTER_METHOD(0x002FBFB0, void, Reset, (CsEvent * __this));
}
