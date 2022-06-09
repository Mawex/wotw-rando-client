#include <interception_macros.h>

namespace app::methods::System_Threading::Volatile {
IL2CPP_REGISTER_METHOD(0x0234B710, bool, Read_1, (app::bool * location));
IL2CPP_REGISTER_METHOD(0x0234B720, int32_t, Read_2, (app::int32_t * location));
IL2CPP_REGISTER_METHOD(0x0234B730, void, Write_1, (app::int32_t * location, int32_t value));
IL2CPP_REGISTER_METHOD(0x0157AB60, Object *, Read_3, (app::Object * * location));
IL2CPP_REGISTER_METHOD(0x015E1D30, void, Write_2, (app::Object * * location, app::Object * value));
}
