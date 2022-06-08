#include <interception_macros.h>

namespace app::methods::ScrollUIAction {
IL2CPP_REGISTER_METHOD(0x01069730, void, Perform, (ScrollUIAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01069740, void, Update, (ScrollUIAction * __this));
IL2CPP_REGISTER_METHOD(0x01069CB0, void, MouseScroll, (ScrollUIAction * __this));
IL2CPP_REGISTER_METHOD(0x01069DF0, void, SetHeight, (ScrollUIAction * __this));
IL2CPP_REGISTER_METHOD(0x01069FF0, void, Scroll, (ScrollUIAction * __this, bool up));
IL2CPP_REGISTER_METHOD(0x0106A130, void, __ctor, (ScrollUIAction * __this));
}
