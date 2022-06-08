#include <interception_macros.h>

namespace app::methods::System::Net::HttpListenerException {
IL2CPP_REGISTER_METHOD(0x01D45800, void, __ctor, (HttpListenerException * __this));
IL2CPP_REGISTER_METHOD(0x01D45900, void, __ctor, (HttpListenerException * __this, int32_t errorCode));
IL2CPP_REGISTER_METHOD(0x01D459B0, void, __ctor, (HttpListenerException * __this, int32_t errorCode, String * message));
IL2CPP_REGISTER_METHOD(0x01D45A70, void, __ctor, (HttpListenerException * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ErrorCode, (HttpListenerException * __this));
}
