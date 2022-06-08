using namespace app;

namespace app::methods::EditorDebug {
IL2CPP_REGISTER_METHOD(0x00BF7080, void, __ctor, (EditorDebug * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00BF7170, void, Log, (EditorDebug * __this, String * log));
IL2CPP_REGISTER_METHOD(0x00BF7320, StreamWriter *, getStream, (EditorDebug * __this, String * filepath));
IL2CPP_REGISTER_METHOD(0x00BF75A0, void, __cctor, (MethodInfo * method));
}
