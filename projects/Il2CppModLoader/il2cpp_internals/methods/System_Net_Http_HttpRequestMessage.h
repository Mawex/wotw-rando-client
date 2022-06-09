#include <interception_macros.h>

namespace app::methods::System_Net_Http::HttpRequestMessage {
IL2CPP_REGISTER_METHOD(0x002FB9D0, HttpContent *, get_Content, (app::HttpRequestMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02D1C550, HttpRequestHeaders *, get_Headers, (app::HttpRequestMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, Uri *, get_RequestUri, (app::HttpRequestMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02D1C730, Version *, get_Version, (app::HttpRequestMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x020A4270, void, Dispose_1, (app::HttpRequestMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02D1C7E0, void, Dispose_2, (app::HttpRequestMessage * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x02D1C810, String *, ToString, (app::HttpRequestMessage * this_ptr));
}
