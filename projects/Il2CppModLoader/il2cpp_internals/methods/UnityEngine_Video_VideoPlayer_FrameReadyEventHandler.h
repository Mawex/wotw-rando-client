#include <interception_macros.h>

namespace app::methods::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (VideoPlayer_FrameReadyEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (VideoPlayer_FrameReadyEventHandler * __this, VideoPlayer * source, int64_t frameIdx));
IL2CPP_REGISTER_METHOD(0x031B7F90, IAsyncResult *, BeginInvoke, (VideoPlayer_FrameReadyEventHandler * __this, VideoPlayer * source, int64_t frameIdx, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (VideoPlayer_FrameReadyEventHandler * __this, IAsyncResult * result));
}
