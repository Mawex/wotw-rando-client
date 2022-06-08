#include <interception_macros.h>

namespace app::methods::Moon::Wwise::PositionSyncTask {
IL2CPP_REGISTER_METHOD(0x00ABE2D0, SoundListenerReference, get_AsListener, (PositionSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x0270A8E0, void, set_AsListener, (PositionSyncTask * __this, SoundListenerReference value));
IL2CPP_REGISTER_METHOD(0x0270A8F0, void, __ctor, (PositionSyncTask * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x0270AA80, bool, get_IsValid, (PositionSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x0270A820, bool, get_ShouldBeUpdatedThisFrame, (PositionSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x0270AA90, void, Reset, (PositionSyncTask * __this));
IL2CPP_REGISTER_METHOD(0x0270ABB0, void, Bind, (PositionSyncTask * __this, SoundHostReference host, int32_t frameQuantinization));
}
