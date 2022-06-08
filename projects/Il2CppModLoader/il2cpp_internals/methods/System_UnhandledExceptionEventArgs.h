#include <interception_macros.h>

namespace app::methods::System::UnhandledExceptionEventArgs {
IL2CPP_REGISTER_METHOD(0x027C5BD0, void, __ctor, (UnhandledExceptionEventArgs * __this, Object * exception, bool isTerminating));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_ExceptionObject, (UnhandledExceptionEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsTerminating, (UnhandledExceptionEventArgs * __this));
}
