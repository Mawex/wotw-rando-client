#include <interception_macros.h>

namespace app::methods::LeftMenuManager {
IL2CPP_REGISTER_METHOD(0x015C7CD0, void, OnEnable, (LeftMenuManager * __this));
IL2CPP_REGISTER_METHOD(0x015C81F0, void, OnDisable, (LeftMenuManager * __this));
IL2CPP_REGISTER_METHOD(0x00911620, void, OnButtonAPressed, (LeftMenuManager * __this, UIContext * context));
IL2CPP_REGISTER_METHODINFO(0x0470B480, LeftMenuManager_OnButtonAPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonBPressed, (LeftMenuManager * __this, UIContext * context));
IL2CPP_REGISTER_METHODINFO(0x04759570, LeftMenuManager_OnButtonBPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonCPressed, (LeftMenuManager * __this, UIContext * context));
IL2CPP_REGISTER_METHODINFO(0x04780BD8, LeftMenuManager_OnButtonCPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonDPressed, (LeftMenuManager * __this, UIContext * context));
IL2CPP_REGISTER_METHODINFO(0x04753E70, LeftMenuManager_OnButtonDPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015C8710, void, __ctor, (LeftMenuManager * __this));
}
