#include <interception_macros.h>

namespace app::methods::System::UncNameHelper {
IL2CPP_REGISTER_METHOD(0x02A7C140, String *, ParseCanonicalName, (app::String * str, int32_t start, int32_t end, app::bool * loopback));
IL2CPP_REGISTER_METHOD(0x02A7C150, bool, IsValid, (app::uint16_t * name, uint16_t start, app::int32_t * returned_end, bool not_implicit_file));
}
