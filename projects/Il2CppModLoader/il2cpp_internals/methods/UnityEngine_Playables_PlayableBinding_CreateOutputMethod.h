using namespace app;

namespace app::methods::UnityEngine::Playables::PlayableBinding_CreateOutputMethod {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PlayableBinding_CreateOutputMethod * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02964470, PlayableOutput, Invoke, (PlayableBinding_CreateOutputMethod * __this, PlayableGraph graph, String * name));
IL2CPP_REGISTER_METHOD(0x02964950, IAsyncResult *, BeginInvoke, (PlayableBinding_CreateOutputMethod * __this, PlayableGraph graph, String * name, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x01C7A680, PlayableOutput, EndInvoke, (PlayableBinding_CreateOutputMethod * __this, IAsyncResult * result));
}
