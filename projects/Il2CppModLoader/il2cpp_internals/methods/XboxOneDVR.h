using namespace app;

namespace app::methods::XboxOneDVR {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanUseDVR, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597BE0, bool, get_EnableDVR, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00597C80, void, set_EnableDVR, (bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_WaitingForClip, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_WaitingForClip, (bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RecordPast, (float seconds, String * clipName, bool cancelExisting));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RecordFuture, (float seconds, String * clipName, bool cancelExisting));
IL2CPP_REGISTER_METHOD(0x00417870, bool, StartRecording, (bool cancelExisting));
IL2CPP_REGISTER_METHOD(0x00417870, bool, StopRecording, (String * clipName));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CancelRecording, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxOneDVR * __this));
IL2CPP_REGISTER_METHOD(0x00597D30, void, __cctor, (MethodInfo * method));
}
