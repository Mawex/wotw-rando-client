#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::WebResources {
IL2CPP_REGISTER_METHOD(0x01674140, void, SendResponse, (WebResources * __this, int32_t id, Byte__Array * data, String * mimeType));
IL2CPP_REGISTER_METHOD(0x01674310, void, SendResponse, (WebResources * __this, int32_t id, String * text, String * mimeType));
IL2CPP_REGISTER_METHOD(0x01674500, void, SendError, (WebResources * __this, int32_t id, String * html, int32_t errorCode));
IL2CPP_REGISTER_METHOD(0x01674700, void, SendFile, (WebResources * __this, int32_t id, FileInfo * file, bool forceDownload));
IL2CPP_REGISTER_METHOD(0x01674A30, void, SendPreamble, (WebResources * __this, int32_t id, WebResources_ResponsePreamble * pre));
IL2CPP_REGISTER_METHOD(0x01674F90, void, SendData, (WebResources * __this, int32_t id, Byte__Array * data, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x04712D18, WebResources_SendData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016751E0, void, SendEnd, (WebResources * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WebResources * __this));
IL2CPP_REGISTER_METHOD(0x016753A0, void, __cctor, ());
}
