#include <interception_macros.h>

namespace app::methods::System::Threading::AsyncLocalValueChangedArgs_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x00107C00, Object *, get_PreviousValue, (AsyncLocalValueChangedArgs_1_System_Object___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_PreviousValue, (AsyncLocalValueChangedArgs_1_System_Object___Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x00107C10, Object *, get_CurrentValue, (AsyncLocalValueChangedArgs_1_System_Object___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_CurrentValue, (AsyncLocalValueChangedArgs_1_System_Object___Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001C0320, void, set_ThreadContextChanged, (AsyncLocalValueChangedArgs_1_System_Object___Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x001FFB80, void, __ctor, (AsyncLocalValueChangedArgs_1_System_Object___Boxed * __this, Object * previousValue, Object * currentValue, bool contextChanged));
}
