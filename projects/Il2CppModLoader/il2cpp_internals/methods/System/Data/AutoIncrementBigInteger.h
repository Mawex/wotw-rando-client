#include <interception_macros.h>

namespace app::methods::System::Data::AutoIncrementBigInteger {
    IL2CPP_REGISTER_METHOD(0x021492F0, app::Object *, get_Current, (app::AutoIncrementBigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02149380, void, set_Current, (app::AutoIncrementBigInteger * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02149430, app::Type *, get_DataType, (app::AutoIncrementBigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_Seed, (app::AutoIncrementBigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021494D0, void, set_Seed, (app::AutoIncrementBigInteger * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHOD(0x02149640, int64_t, get_Step, (app::AutoIncrementBigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021496F0, void, set_Step, (app::AutoIncrementBigInteger * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x047980C8, AutoIncrementBigInteger_set_Step__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x021499F0, void, MoveAfter, (app::AutoIncrementBigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02149AD0, void, SetCurrent, (app::AutoIncrementBigInteger * this_ptr, app::Object * value, app::IFormatProvider * format_provider));
    IL2CPP_REGISTER_METHOD(0x02149B00, void, SetCurrentAndIncrement, (app::AutoIncrementBigInteger * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02149C40, bool, BoundaryCheck, (app::AutoIncrementBigInteger * this_ptr, app::BigInteger_2 value));
    IL2CPP_REGISTER_METHOD(0x02149DF0, void, __ctor, (app::AutoIncrementBigInteger * this_ptr));
}
