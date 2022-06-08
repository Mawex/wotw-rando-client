#include <interception_macros.h>

namespace app::methods::System::Data::AutoIncrementInt64 {
IL2CPP_REGISTER_METHOD(0x02149EB0, Object *, get_Current, (AutoIncrementInt64 * __this));
IL2CPP_REGISTER_METHOD(0x02149F40, void, set_Current, (AutoIncrementInt64 * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02149FF0, Type *, get_DataType, (AutoIncrementInt64 * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_Seed, (AutoIncrementInt64 * __this));
IL2CPP_REGISTER_METHOD(0x0214A090, void, set_Seed, (AutoIncrementInt64 * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_Step, (AutoIncrementInt64 * __this));
IL2CPP_REGISTER_METHOD(0x0214A180, void, set_Step, (AutoIncrementInt64 * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04762118, AutoIncrementInt64_set_Step__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0214A260, void, MoveAfter, (AutoIncrementInt64 * __this));
IL2CPP_REGISTER_METHOD(0x0214A270, void, SetCurrent, (AutoIncrementInt64 * __this, Object * value, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHOD(0x0214A330, void, SetCurrentAndIncrement, (AutoIncrementInt64 * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0214A4D0, bool, BoundaryCheck, (AutoIncrementInt64 * __this, BigInteger_2 value));
IL2CPP_REGISTER_METHOD(0x0214A600, void, __ctor, (AutoIncrementInt64 * __this));
}
