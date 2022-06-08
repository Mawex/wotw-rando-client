using namespace app;

namespace app::methods::Ionic::Zlib::InflateManager {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_HandleRfc1950HeaderBytes, (InflateManager * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, __ctor, (InflateManager * __this, bool expectRfc1950HeaderBytes));
IL2CPP_REGISTER_METHOD(0x03074230, int32_t, Reset, (InflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03074290, int32_t, End, (InflateManager * __this));
IL2CPP_REGISTER_METHOD(0x030742E0, int32_t, Initialize, (InflateManager * __this, ZlibCodec * codec, int32_t w));
IL2CPP_REGISTER_METHODINFO(0x0476F998, InflateManager_Initialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03074530, int32_t, Inflate, (InflateManager * __this, FlushType__Enum flush));
IL2CPP_REGISTER_METHODINFO(0x04745F68, InflateManager_Inflate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03075000, void, __cctor, (MethodInfo * method));
}
