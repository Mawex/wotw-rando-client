#include <interception_macros.h>

namespace app::methods::AkReflectionPathInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkReflectionPathInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x01893410, void *, getCPtr, (AkReflectionPathInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkReflectionPathInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x018934A0, void, Finalize, (AkReflectionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x01893520, void, Dispose, (AkReflectionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x01893730, void, set_imageSource, (AkReflectionPathInfo * __this, AkVector * value));
IL2CPP_REGISTER_METHOD(0x01893870, AkVector *, get_imageSource, (AkReflectionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x01893A80, void, set_numPathPoints, (AkReflectionPathInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01893BB0, uint32_t, get_numPathPoints, (AkReflectionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x01893CD0, void, set_numReflections, (AkReflectionPathInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01893E00, uint32_t, get_numReflections, (AkReflectionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x01893F20, void, set_level, (AkReflectionPathInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01894050, float, get_level, (AkReflectionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x01894170, void, set_isOccluded, (AkReflectionPathInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x018942A0, bool, get_isOccluded, (AkReflectionPathInfo * __this));
IL2CPP_REGISTER_METHOD(0x018943D0, int32_t, GetSizeOf, ());
IL2CPP_REGISTER_METHOD(0x01894460, AkVector *, GetPathPoint, (AkReflectionPathInfo * __this, uint32_t idx));
IL2CPP_REGISTER_METHOD(0x01894680, AkAcousticSurface *, GetAcousticSurface, (AkReflectionPathInfo * __this, uint32_t idx));
IL2CPP_REGISTER_METHOD(0x01894880, float, GetDiffraction, (AkReflectionPathInfo * __this, uint32_t idx));
IL2CPP_REGISTER_METHOD(0x018949B0, void, Clone, (AkReflectionPathInfo * __this, AkReflectionPathInfo * other));
IL2CPP_REGISTER_METHOD(0x01894AD0, void, __ctor, (AkReflectionPathInfo * __this));
}
