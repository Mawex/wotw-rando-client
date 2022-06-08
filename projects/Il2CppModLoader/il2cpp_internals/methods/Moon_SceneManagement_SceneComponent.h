#include <interception_macros.h>

namespace app::methods::Moon::SceneManagement::SceneComponent {
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Path, (SceneComponent * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Path, (SceneComponent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Group, (SceneComponent * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Group, (SceneComponent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Name, (SceneComponent * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Name, (SceneComponent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (SceneComponent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshData, (SceneComponent * __this));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (SceneComponent * __this));
}
