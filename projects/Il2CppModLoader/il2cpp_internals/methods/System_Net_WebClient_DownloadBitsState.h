#include <interception_macros.h>

namespace app::methods::System::Net::WebClient_DownloadBitsState {
IL2CPP_REGISTER_METHOD(0x01D60120, void, __ctor, (WebClient_DownloadBitsState * __this, WebRequest * request, Stream * writeStream, CompletionDelegate * completionDelegate, AsyncOperation * asyncOp, WebClient_ProgressData * progress, WebClient * webClient));
IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_Async, (WebClient_DownloadBitsState * __this));
IL2CPP_REGISTER_METHOD(0x01D60160, int32_t, SetResponse, (WebClient_DownloadBitsState * __this, WebResponse * response));
IL2CPP_REGISTER_METHODINFO(0x047797F0, WebClient_DownloadBitsState_SetResponse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D605F0, bool, RetrieveBytes, (WebClient_DownloadBitsState * __this, int32_t * bytesRetrieved));
IL2CPP_REGISTER_METHOD(0x01D60AD0, void, Close, (WebClient_DownloadBitsState * __this));
}
