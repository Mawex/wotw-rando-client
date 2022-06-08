#include <interception_macros.h>

namespace app::methods::KuPushWall {
IL2CPP_REGISTER_METHOD(0x01245850, void, OnSetReferenceToKu, (KuPushWall * __this));
IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, (KuPushWall * __this));
IL2CPP_REGISTER_METHOD(0x01245880, void, UpdateState, (KuPushWall * __this));
IL2CPP_REGISTER_METHOD(0x01245A40, bool, ShouldPlayPushWall, (KuPushWall * __this));
IL2CPP_REGISTER_METHODINFO(0x04776078, KuPushWall_ShouldPlayPushWall__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (KuPushWall * __this));
}
