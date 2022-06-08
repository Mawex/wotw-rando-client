#include <interception_macros.h>

namespace app::methods::ErrorMessageController {
IL2CPP_REGISTER_METHOD(0x00982100, void, Awake, (ErrorMessageController * __this));
IL2CPP_REGISTER_METHOD(0x00982190, void, OnDestroy, (ErrorMessageController * __this));
IL2CPP_REGISTER_METHOD(0x00982210, void, ReportSaveFailed, (int32_t errorCode));
IL2CPP_REGISTER_METHOD(0x009823C0, void, ReportFailedToLoad, ());
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ErrorMessageController * __this));
}
