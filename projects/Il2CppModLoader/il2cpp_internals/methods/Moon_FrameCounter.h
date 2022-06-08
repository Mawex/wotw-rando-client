#include <interception_macros.h>

namespace app::methods::Moon::FrameCounter {
IL2CPP_REGISTER_METHOD(0x01489790, void, Awake, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHOD(0x01489830, void, OnDestroy, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHOD(0x01489AB0, void, Initialize, (FrameCounter_1 * __this, IProfilingDataProvider * dataProvider));
IL2CPP_REGISTER_METHOD(0x01489DD0, void, _preEndFrame, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04744280, FrameCounter_1__preEndFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01489DE0, void, _checkExceedSecondBoundary, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHOD(0x01489E60, bool, _tick, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHOD(0x0148A230, void, _handlePauseResume, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHOD(0x0148A3B0, void, _handleProfilerWrap, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHOD(0x0148A4D0, void, _advanceToNextSecond, (FrameCounter_1 * __this, float curTime));
IL2CPP_REGISTER_METHOD(0x01489DD0, void, _postBeginFrame, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04739030, FrameCounter_1__postBeginFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0148A830, void, Update, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHOD(0x0148A8B0, void, FixedUpdate, (FrameCounter_1 * __this));
IL2CPP_REGISTER_METHOD(0x0148A930, int32_t, GetSecondIndexForProfilerFrame, (FrameCounter_1 * __this, int32_t frameIndex));
IL2CPP_REGISTER_METHOD(0x0148A9B0, FrameCounter_SecondInfo *, GetSecondById, (FrameCounter_1 * __this, int32_t secondId));
IL2CPP_REGISTER_METHOD(0x0148AA20, void, __ctor, (FrameCounter_1 * __this));
}
