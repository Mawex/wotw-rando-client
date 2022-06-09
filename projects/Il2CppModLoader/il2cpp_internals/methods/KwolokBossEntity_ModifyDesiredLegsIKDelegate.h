#include <interception_macros.h>

namespace app::methods::KwolokBossEntity_ModifyDesiredLegsIKDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate * this_ptr, app::float * fl, app::float * fr, app::float * bl, app::float * br));
IL2CPP_REGISTER_METHOD(0x012DE2E0, IAsyncResult *, BeginInvoke, (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate * this_ptr, app::float * fl, app::float * fr, app::float * bl, app::float * br, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x012DE400, void, EndInvoke, (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate * this_ptr, app::float * fl, app::float * fr, app::float * bl, app::float * br, app::IAsyncResult * result));
}
