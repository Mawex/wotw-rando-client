#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::BufferUtils {
IL2CPP_REGISTER_METHOD(0x01C009C0, Char__Array *, RentBuffer, (IArrayPool_1_System_Char_ * bufferPool, int32_t minSize));
IL2CPP_REGISTER_METHOD(0x01C00A70, void, ReturnBuffer, (IArrayPool_1_System_Char_ * bufferPool, Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01C00B00, Char__Array *, EnsureBufferSize, (IArrayPool_1_System_Char_ * bufferPool, int32_t size, Char__Array * buffer));
}
