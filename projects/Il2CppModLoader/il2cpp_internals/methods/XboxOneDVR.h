#include <interception_macros.h>

namespace app::methods::XboxOneDVR {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanUseDVR, ());
IL2CPP_REGISTER_METHOD(0x00597BE0, bool, get_EnableDVR, ());
IL2CPP_REGISTER_METHOD(0x00597C80, void, set_EnableDVR, (bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_WaitingForClip, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_WaitingForClip, (bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RecordPast, (float seconds, String * clipName, bool cancelExisting));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RecordFuture, (float seconds, String * clipName, bool cancelExisting));
IL2CPP_REGISTER_METHOD(0x00417870, bool, StartRecording, (bool cancelExisting));
IL2CPP_REGISTER_METHOD(0x00417870, bool, StopRecording, (String * clipName));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CancelRecording, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxOneDVR * __this));
IL2CPP_REGISTER_METHOD(0x00597D30, void, __cctor, ());
}
