using namespace app;

namespace app::methods::AkAudioFormat {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkAudioFormat * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026C5310, void *, getCPtr, (AkAudioFormat * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkAudioFormat * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026C53A0, void, Finalize, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C5420, void, Dispose, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C5630, void, set_uSampleRate, (AkAudioFormat * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C5760, uint32_t, get_uSampleRate, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C5880, void, set_channelConfig, (AkAudioFormat * __this, AkChannelConfig * value));
IL2CPP_REGISTER_METHOD(0x026C59C0, AkChannelConfig *, get_channelConfig, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C5BD0, void, set_uBitsPerSample, (AkAudioFormat * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C5D00, uint32_t, get_uBitsPerSample, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C5E20, void, set_uBlockAlign, (AkAudioFormat * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C5F50, uint32_t, get_uBlockAlign, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C6070, void, set_uTypeID, (AkAudioFormat * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C61A0, uint32_t, get_uTypeID, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C62C0, void, set_uInterleaveID, (AkAudioFormat * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C63F0, uint32_t, get_uInterleaveID, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C6510, uint32_t, GetNumChannels, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C6630, uint32_t, GetBitsPerSample, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C6750, uint32_t, GetBlockAlign, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C6870, uint32_t, GetTypeID, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C6990, uint32_t, GetInterleaveID, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C6AB0, void, SetAll, (AkAudioFormat * __this, uint32_t in_uSampleRate, AkChannelConfig * in_channelConfig, uint32_t in_uBitsPerSample, uint32_t in_uBlockAlign, uint32_t in_uTypeID, uint32_t in_uInterleaveID));
IL2CPP_REGISTER_METHOD(0x026C6C20, bool, IsChannelConfigSupported, (AkAudioFormat * __this));
IL2CPP_REGISTER_METHOD(0x026C6D50, void, __ctor, (AkAudioFormat * __this));
}
