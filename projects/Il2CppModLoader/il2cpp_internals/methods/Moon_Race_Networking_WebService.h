using namespace app;

namespace app::methods::Moon::Race::Networking::WebService {
IL2CPP_REGISTER_METHOD(0x00C454F0, ReplayData *, GetReplay, (String * raceName, String * playerId));
IL2CPP_REGISTER_METHOD(0x00C458D0, LeaderboadData *, GetLeaderboad, (String * raceName));
IL2CPP_REGISTER_METHOD(0x00C45CA0, void, PostReplay, (String * raceName, ReplayData * replay));
IL2CPP_REGISTER_METHOD(0x00C45FB0, void, DownloadData, (String * siteId, LeaderboadData * data));
IL2CPP_REGISTER_METHOD(0x00C46080, void, DownloadData, (String * siteId, String * playerId, ReplayData * data));
IL2CPP_REGISTER_METHOD(0x00C46200, void, UploadData, (String * siteId, ReplayData * data));
IL2CPP_REGISTER_METHOD(0x00C46370, void, CompressData, (ReplayData * data));
IL2CPP_REGISTER_METHOD(0x00C46430, void, DecompressData, (ReplayData * data));
IL2CPP_REGISTER_METHOD(0x00C464F0, void, CopyTo, (Stream * src, Stream * dest));
IL2CPP_REGISTER_METHOD(0x00C46600, Byte__Array *, Zip, (String * str));
IL2CPP_REGISTER_METHOD(0x00C46AE0, String *, Unzip, (Byte__Array * bytes));
}
