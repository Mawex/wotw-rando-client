using namespace app;

namespace app::methods::System::Net::WebClient_UploadBitsState {
IL2CPP_REGISTER_METHOD(0x01D60B60, void, __ctor, (WebClient_UploadBitsState * __this, WebRequest * request, Stream * readStream, Byte__Array * buffer, int32_t chunkSize, Byte__Array * header, Byte__Array * footer, CompletionDelegate * uploadCompletionDelegate, CompletionDelegate * downloadCompletionDelegate, AsyncOperation * asyncOp, WebClient_ProgressData * progress, WebClient * webClient));
IL2CPP_REGISTER_METHOD(0x01D60C50, bool, get_FileUpload, (WebClient_UploadBitsState * __this));
IL2CPP_REGISTER_METHOD(0x00938890, bool, get_Async, (WebClient_UploadBitsState * __this));
IL2CPP_REGISTER_METHOD(0x01D60C60, void, SetRequestStream, (WebClient_UploadBitsState * __this, Stream * writeStream));
IL2CPP_REGISTER_METHOD(0x01D60EA0, bool, WriteBytes, (WebClient_UploadBitsState * __this));
IL2CPP_REGISTER_METHOD(0x01D61190, void, Close, (WebClient_UploadBitsState * __this));
}
