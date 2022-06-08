#include <interception_macros.h>

namespace app::methods::System::Threading::Volatile {
IL2CPP_REGISTER_METHOD(0x0234B710, bool, Read, (bool * location));
IL2CPP_REGISTER_METHOD(0x0234B720, int32_t, Read, (int32_t * location));
IL2CPP_REGISTER_METHOD(0x0234B730, void, Write, (int32_t * location, int32_t value));
IL2CPP_REGISTER_METHOD(0x0157AB60, Object *, Read, (Object * * location));
IL2CPP_REGISTER_METHOD(0x015E1D30, void, Write, (Object * * location, Object * value));
}
