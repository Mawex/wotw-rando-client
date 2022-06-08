#include <interception_macros.h>

namespace app::methods::KwolokBossEntity_ModifyCameraTargetsDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (KwolokBossEntity_ModifyCameraTargetsDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (KwolokBossEntity_ModifyCameraTargetsDelegate * __this, List_1_Moon_CameraTargetSettings_ * targets));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (KwolokBossEntity_ModifyCameraTargetsDelegate * __this, List_1_Moon_CameraTargetSettings_ * targets, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (KwolokBossEntity_ModifyCameraTargetsDelegate * __this, IAsyncResult * result));
}
