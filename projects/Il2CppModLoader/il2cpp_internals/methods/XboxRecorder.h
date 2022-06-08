using namespace app;

namespace app::methods::XboxRecorder {
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_Recording, (XboxRecorder * __this));
IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_Recording, (XboxRecorder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01C5C3A0, void, Update, (XboxRecorder * __this));
IL2CPP_REGISTER_METHOD(0x01C5C420, void, StartRecording, (XboxRecorder * __this));
IL2CPP_REGISTER_METHOD(0x01C5C430, void, StopRecording, (XboxRecorder * __this));
IL2CPP_REGISTER_METHOD(0x01C5C460, void, SetRecording, (XboxRecorder * __this, bool record));
IL2CPP_REGISTER_METHOD(0x01C5C4A0, void, RequestReplay, (XboxRecorder * __this));
IL2CPP_REGISTER_METHOD(0x01C5C7D0, void, CloseConnection, (XboxRecorder * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (XboxRecorder * __this));
}
