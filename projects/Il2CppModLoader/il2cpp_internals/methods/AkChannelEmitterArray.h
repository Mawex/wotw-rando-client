using namespace app;

namespace app::methods::AkChannelEmitterArray {
IL2CPP_REGISTER_METHOD(0x026D8190, void, __ctor, (AkChannelEmitterArray * __this, uint32_t in_Count));
IL2CPP_REGISTER_METHOD(0x00529E80, uint32_t, get_Count, (AkChannelEmitterArray * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Count, (AkChannelEmitterArray * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026D8250, void, Dispose, (AkChannelEmitterArray * __this));
IL2CPP_REGISTER_METHOD(0x026D8310, void, Finalize, (AkChannelEmitterArray * __this));
IL2CPP_REGISTER_METHOD(0x0188F7E0, void, Reset, (AkChannelEmitterArray * __this));
IL2CPP_REGISTER_METHOD(0x026D8420, void, Add, (AkChannelEmitterArray * __this, Vector3 in_Pos, Vector3 in_Forward, Vector3 in_Top, uint32_t in_ChannelMask));
IL2CPP_REGISTER_METHODINFO(0x0470C6A0, AkChannelEmitterArray_Add__MethodInfo);
}
