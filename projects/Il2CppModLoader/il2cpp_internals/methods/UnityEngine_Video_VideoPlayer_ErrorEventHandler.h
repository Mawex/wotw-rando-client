using namespace app;

namespace app::methods::UnityEngine::Video::VideoPlayer_ErrorEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (VideoPlayer_ErrorEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (VideoPlayer_ErrorEventHandler * __this, VideoPlayer * source, String * message));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (VideoPlayer_ErrorEventHandler * __this, VideoPlayer * source, String * message, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (VideoPlayer_ErrorEventHandler * __this, IAsyncResult * result));
}
