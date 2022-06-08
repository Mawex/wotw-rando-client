using namespace app;

namespace app::methods::Moon::Network::Web::WebResponse {
IL2CPP_REGISTER_METHOD(0x02E99D90, void, __ctor, (WebResponse_1 * __this, Byte__Array * data, Exception * error));
IL2CPP_REGISTER_METHOD(0x02E99DA0, void, __ctor, (WebResponse_1 * __this, String * data, Exception * error));
IL2CPP_REGISTER_METHOD(0x02E99DB0, void, __ctor, (WebResponse_1 * __this, Byte__Array * data, Exception * error, int32_t statusCode));
IL2CPP_REGISTER_METHOD(0x02E99DC0, void, DispatchError, (WebResponse_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Byte__Array *, get_ByteData, (WebResponse_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_StringData, (WebResponse_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Exception *, get_Error, (WebResponse_1 * __this));
IL2CPP_REGISTER_METHOD(0x02E99DD0, bool, get_IsSucceeded, (WebResponse_1 * __this));
IL2CPP_REGISTER_METHOD(0x02E99DE0, bool, get_IsFailed, (WebResponse_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_StatusCode, (WebResponse_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, SetStatusCode, (WebResponse_1 * __this, HttpStatusCode__Enum statusCode));
IL2CPP_REGISTER_METHOD(0x02E99DF0, HttpStatusCode__Enum, get_Status, (WebResponse_1 * __this));
}
