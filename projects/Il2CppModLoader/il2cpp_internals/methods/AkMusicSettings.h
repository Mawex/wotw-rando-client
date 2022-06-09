#include <interception_macros.h>

namespace app::methods::AkMusicSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor_1, (app::AkMusicSettings * this_ptr, app::void * c_ptr, bool c_memory_own));
IL2CPP_REGISTER_METHOD(0x01882960, void *, getCPtr, (app::AkMusicSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMusicSettings * this_ptr, app::void * c_ptr));
IL2CPP_REGISTER_METHOD(0x018829F0, void, Finalize, (app::AkMusicSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01882A70, void, Dispose, (app::AkMusicSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01882C80, void, set_fStreamingLookAheadRatio, (app::AkMusicSettings * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01882DB0, float, get_fStreamingLookAheadRatio, (app::AkMusicSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x01882ED0, void, __ctor_2, (app::AkMusicSettings * this_ptr));
}
