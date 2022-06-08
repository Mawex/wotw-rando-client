using namespace app;

namespace app::methods::System::Threading::AsyncLocal_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02775090, Object *, get_Value, (AsyncLocal_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x027751A0, void, set_Value, (AsyncLocal_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x019D6B90, void, __ctor, (AsyncLocal_1_System_Object_ * __this, Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2 * valueChangedHandler));
IL2CPP_REGISTER_METHOD(0x02775260, void, IAsyncLocal_OnValueChanged, (AsyncLocal_1_System_Object_ * __this, Object * previousValueObj, Object * currentValueObj, bool contextChanged));
}
