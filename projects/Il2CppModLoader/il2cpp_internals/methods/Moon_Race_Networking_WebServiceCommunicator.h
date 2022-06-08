using namespace app;

namespace app::methods::Moon::Race::Networking::WebServiceCommunicator {
IL2CPP_REGISTER_METHOD(0x00C47000, String *, get_WebBaseUrl, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00C470B0, String *, Get, (String * siteId, LeaderboadData * dataHolder));
IL2CPP_REGISTER_METHOD(0x00C47350, String *, Get, (String * siteId, String * playerId, ReplayData * dataHolder));
IL2CPP_REGISTER_METHOD(0x00C475F0, String *, Post, (String * siteId, ReplayData * data));
IL2CPP_REGISTER_METHOD(0x00C478A0, String *, Delete, (String * siteId, String * playerId));
}
