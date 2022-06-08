using namespace app;

namespace app::methods::UnityEngine::Video::VideoPlayer_TimeEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (VideoPlayer_TimeEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x031B8060, void, Invoke, (VideoPlayer_TimeEventHandler * __this, VideoPlayer * source, double seconds));
IL2CPP_REGISTER_METHOD(0x031B85A0, IAsyncResult *, BeginInvoke, (VideoPlayer_TimeEventHandler * __this, VideoPlayer * source, double seconds, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (VideoPlayer_TimeEventHandler * __this, IAsyncResult * result));
}
