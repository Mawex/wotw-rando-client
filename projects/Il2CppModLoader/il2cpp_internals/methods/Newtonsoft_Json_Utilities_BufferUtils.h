#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Utilities::BufferUtils {
IL2CPP_REGISTER_METHOD(0x01C009C0, Char__Array *, RentBuffer, (app::IArrayPool_1_System_Char_ * buffer_pool, int32_t min_size));
IL2CPP_REGISTER_METHOD(0x01C00A70, void, ReturnBuffer, (app::IArrayPool_1_System_Char_ * buffer_pool, app::Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01C00B00, Char__Array *, EnsureBufferSize, (app::IArrayPool_1_System_Char_ * buffer_pool, int32_t size, app::Char__Array * buffer));
}
