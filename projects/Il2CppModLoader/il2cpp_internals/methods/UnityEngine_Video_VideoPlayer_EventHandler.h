using namespace app;

namespace app::methods::UnityEngine::Video::VideoPlayer_EventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (VideoPlayer_EventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (VideoPlayer_EventHandler * __this, VideoPlayer * source));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (VideoPlayer_EventHandler * __this, VideoPlayer * source, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (VideoPlayer_EventHandler * __this, IAsyncResult * result));
}
