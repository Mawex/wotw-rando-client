using namespace app;

namespace app::methods::UnityEngine::UnityLogWriter {
IL2CPP_REGISTER_METHOD(0x02C70CE0, void, __ctor, (UnityLogWriter * __this));
IL2CPP_REGISTER_METHOD(0x02C70E20, void, WriteStringToUnityLog, (String * s));
IL2CPP_REGISTER_METHOD(0x02C70E80, void, WriteStringToUnityLogImpl, (String * s));
IL2CPP_REGISTER_METHOD(0x02C70ED0, void, Init, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C711D0, Encoding *, get_Encoding, (UnityLogWriter * __this));
IL2CPP_REGISTER_METHOD(0x02C711E0, void, Write, (UnityLogWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x02C71250, void, Write, (UnityLogWriter * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02C712B0, void, Write, (UnityLogWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
}
