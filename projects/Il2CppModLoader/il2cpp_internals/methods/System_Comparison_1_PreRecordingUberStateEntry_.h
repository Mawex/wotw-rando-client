#include <interception_macros.h>

namespace app::methods::System::Comparison_1_PreRecordingUberStateEntry_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_PreRecordingUberStateEntry_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_PreRecordingUberStateEntry_ * this_ptr, app::PreRecordingUberStateEntry x, app::PreRecordingUberStateEntry y));
IL2CPP_REGISTER_METHOD(0x02C7B740, IAsyncResult *, BeginInvoke, (app::Comparison_1_PreRecordingUberStateEntry_ * this_ptr, app::PreRecordingUberStateEntry x, app::PreRecordingUberStateEntry y, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_PreRecordingUberStateEntry_ * this_ptr, app::IAsyncResult * result));
}
