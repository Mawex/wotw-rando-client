#include <interception_macros.h>

namespace app::methods::AkEmitterSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkEmitterSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026E2350, void *, getCPtr, (AkEmitterSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkEmitterSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026E23E0, void, Finalize, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E2460, void, Dispose, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E2670, void, __ctor, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E2790, void, set_reflectAuxBusID, (AkEmitterSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E28C0, uint32_t, get_reflectAuxBusID, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E29E0, void, set_reflectionMaxPathLength, (AkEmitterSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E2B10, float, get_reflectionMaxPathLength, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E2C30, void, set_reflectionsAuxBusGain, (AkEmitterSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E2D60, float, get_reflectionsAuxBusGain, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E2E80, void, set_reflectionsOrder, (AkEmitterSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E2FB0, uint32_t, get_reflectionsOrder, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E30D0, void, set_reflectorFilterMask, (AkEmitterSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E3200, uint32_t, get_reflectorFilterMask, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E3320, void, set_roomReverbAuxBusGain, (AkEmitterSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E3450, float, get_roomReverbAuxBusGain, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E3570, void, set_diffractionMaxEdges, (AkEmitterSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E36A0, uint32_t, get_diffractionMaxEdges, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E37C0, void, set_diffractionMaxPaths, (AkEmitterSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E38F0, uint32_t, get_diffractionMaxPaths, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E3A10, void, set_diffractionMaxPathLength, (AkEmitterSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026E3B40, float, get_diffractionMaxPathLength, (AkEmitterSettings * __this));
IL2CPP_REGISTER_METHOD(0x026E3C60, void, set_useImageSources, (AkEmitterSettings * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026E3D90, uint8_t, get_useImageSources, (AkEmitterSettings * __this));
}
