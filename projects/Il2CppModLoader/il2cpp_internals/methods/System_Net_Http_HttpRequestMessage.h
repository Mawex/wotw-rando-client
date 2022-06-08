#include <interception_macros.h>

namespace app::methods::System::Net::Http::HttpRequestMessage {
IL2CPP_REGISTER_METHOD(0x002FB9D0, HttpContent *, get_Content, (HttpRequestMessage * __this));
IL2CPP_REGISTER_METHOD(0x02D1C550, HttpRequestHeaders *, get_Headers, (HttpRequestMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Uri *, get_RequestUri, (HttpRequestMessage * __this));
IL2CPP_REGISTER_METHOD(0x02D1C730, Version *, get_Version, (HttpRequestMessage * __this));
IL2CPP_REGISTER_METHOD(0x020A4270, void, Dispose, (HttpRequestMessage * __this));
IL2CPP_REGISTER_METHOD(0x02D1C7E0, void, Dispose, (HttpRequestMessage * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02D1C810, String *, ToString, (HttpRequestMessage * __this));
}
