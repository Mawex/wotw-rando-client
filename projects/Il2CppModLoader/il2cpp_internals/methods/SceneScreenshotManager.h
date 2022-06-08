#include <interception_macros.h>

namespace app::methods::SceneScreenshotManager {
IL2CPP_REGISTER_METHOD(0x00BBC8E0, void, add_OnAfterCreate, (Action_1_SceneScreenshotManager_ * value));
IL2CPP_REGISTER_METHOD(0x00BBCA20, void, remove_OnAfterCreate, (Action_1_SceneScreenshotManager_ * value));
IL2CPP_REGISTER_METHOD(0x00BBCB60, void, add_OnBeforeDelete, (Action_1_SceneScreenshotManager_ * value));
IL2CPP_REGISTER_METHOD(0x00BBCCA0, void, remove_OnBeforeDelete, (Action_1_SceneScreenshotManager_ * value));
IL2CPP_REGISTER_METHOD(0x00BBCDE0, void, add_OnScreenshotsUpdated, (Action_1_System_Collections_Generic_List_1_ * value));
IL2CPP_REGISTER_METHOD(0x00BBCF20, void, remove_OnScreenshotsUpdated, (Action_1_System_Collections_Generic_List_1_ * value));
IL2CPP_REGISTER_METHOD(0x00BBD060, void, __ctor, (SceneScreenshotManager * __this));
IL2CPP_REGISTER_METHOD(0x00BBD2A0, void, __cctor, ());
}
