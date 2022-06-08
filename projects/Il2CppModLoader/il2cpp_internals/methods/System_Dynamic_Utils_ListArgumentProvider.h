#include <interception_macros.h>

namespace app::methods::System::Dynamic::Utils::ListArgumentProvider {
IL2CPP_REGISTER_METHOD(0x01F95A70, void, __ctor, (ListArgumentProvider * __this, IArgumentProvider * provider, Expression * arg0));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_First, (ListArgumentProvider * __this));
IL2CPP_REGISTER_METHOD(0x01F95B10, int32_t, get_ElementCount, (ListArgumentProvider * __this));
IL2CPP_REGISTER_METHOD(0x01F95BA0, Expression *, GetElement, (ListArgumentProvider * __this, int32_t index));
}
