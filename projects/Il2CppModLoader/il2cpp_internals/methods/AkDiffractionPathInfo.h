using namespace app;

namespace app::methods::AkDiffractionPathInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkDiffractionPathInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026DF2E0, void *, getCPtr, (AkDiffractionPathInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkDiffractionPathInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026DF370, void, Finalize, (AkDiffractionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x026DF3F0, void, Dispose, (AkDiffractionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x026DF600, void, set_virtualPos, (AkDiffractionPathInfo * __this, AkTransform * value));
IL2CPP_REGISTER_METHOD(0x026DF740, AkTransform *, get_virtualPos, (AkDiffractionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x026DF950, void, set_nodeCount, (AkDiffractionPathInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026DFA80, uint32_t, get_nodeCount, (AkDiffractionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x026DFBA0, void, set_diffraction, (AkDiffractionPathInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x026DFCD0, float, get_diffraction, (AkDiffractionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x026DFDF0, void, set_totLength, (AkDiffractionPathInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x026DFF20, float, get_totLength, (AkDiffractionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E0040, void, set_obstructionValue, (AkDiffractionPathInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E0170, float, get_obstructionValue, (AkDiffractionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E0290, int32_t, GetSizeOf, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026E0320, AkVector *, GetNodes, (AkDiffractionPathInfo * __this, uint32_t idx));
IL2CPP_REGISTER_METHOD(0x026E0540, float, GetAngles, (AkDiffractionPathInfo * __this, uint32_t idx));
IL2CPP_REGISTER_METHOD(0x026E0670, uint64_t, GetPortals, (AkDiffractionPathInfo * __this, uint32_t idx));
IL2CPP_REGISTER_METHOD(0x026E07A0, uint64_t, GetRooms, (AkDiffractionPathInfo * __this, uint32_t idx));
IL2CPP_REGISTER_METHOD(0x026E08D0, void, Clone, (AkDiffractionPathInfo * __this, AkDiffractionPathInfo * other));
IL2CPP_REGISTER_METHOD(0x026E09F0, void, __ctor, (AkDiffractionPathInfo * __this));
}
