using namespace app;

namespace app::methods::Moon::UberStateSaveFileHandler {
IL2CPP_REGISTER_METHOD(0x01B6D260, void, Save, (UberStateSaveFileHandler * __this, UberStateValueStore * uberStateValueStore, String * path));
IL2CPP_REGISTER_METHOD(0x01B6D390, void, Save, (UberStateSaveFileHandler * __this, Byte__Array * bytes, String * path));
IL2CPP_REGISTER_METHOD(0x01B6D480, UberStateValueStore *, LoadWithStatus, (UberStateSaveFileHandler * __this, String * path, UberStateSaveFileHandler_LoadStatus__Enum * status));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UberStateSaveFileHandler * __this));
}
