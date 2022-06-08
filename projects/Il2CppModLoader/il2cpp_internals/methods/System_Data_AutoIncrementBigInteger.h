#include <interception_macros.h>

namespace app::methods::System::Data::AutoIncrementBigInteger {
IL2CPP_REGISTER_METHOD(0x021492F0, Object *, get_Current, (AutoIncrementBigInteger * __this));
IL2CPP_REGISTER_METHOD(0x02149380, void, set_Current, (AutoIncrementBigInteger * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02149430, Type *, get_DataType, (AutoIncrementBigInteger * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_Seed, (AutoIncrementBigInteger * __this));
IL2CPP_REGISTER_METHOD(0x021494D0, void, set_Seed, (AutoIncrementBigInteger * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x02149640, int64_t, get_Step, (AutoIncrementBigInteger * __this));
IL2CPP_REGISTER_METHOD(0x021496F0, void, set_Step, (AutoIncrementBigInteger * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x047980C8, AutoIncrementBigInteger_set_Step__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021499F0, void, MoveAfter, (AutoIncrementBigInteger * __this));
IL2CPP_REGISTER_METHOD(0x02149AD0, void, SetCurrent, (AutoIncrementBigInteger * __this, Object * value, IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHOD(0x02149B00, void, SetCurrentAndIncrement, (AutoIncrementBigInteger * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02149C40, bool, BoundaryCheck, (AutoIncrementBigInteger * __this, BigInteger_2 value));
IL2CPP_REGISTER_METHOD(0x02149DF0, void, __ctor, (AutoIncrementBigInteger * __this));
}
