using namespace app;

namespace app::methods::AkChannelEmitter {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkChannelEmitter * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026D78D0, void *, getCPtr, (AkChannelEmitter * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkChannelEmitter * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026D7960, void, Finalize, (AkChannelEmitter * __this));
IL2CPP_REGISTER_METHOD(0x026D79E0, void, Dispose, (AkChannelEmitter * __this));
IL2CPP_REGISTER_METHOD(0x026D7BF0, void, set_position, (AkChannelEmitter * __this, AkTransform * value));
IL2CPP_REGISTER_METHOD(0x026D7D30, AkTransform *, get_position, (AkChannelEmitter * __this));
IL2CPP_REGISTER_METHOD(0x026D7F40, void, set_uInputChannels, (AkChannelEmitter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026D8070, uint32_t, get_uInputChannels, (AkChannelEmitter * __this));
}
