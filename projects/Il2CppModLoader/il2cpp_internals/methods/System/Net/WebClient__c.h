#include <interception_macros.h>

namespace app::methods::System::Net::WebClient___c {
    IL2CPP_REGISTER_METHOD(0x01D5DF80, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::WebClient_c * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::String *, _DownloadStringTaskAsync_b__219_1, (app::WebClient_c * this_ptr, app::DownloadStringCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x0470B280, WebClient_c__DownloadStringTaskAsync_b__219_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E0F0, void, _DownloadStringTaskAsync_b__219_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::DownloadStringCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x0470D100, WebClient_c__DownloadStringTaskAsync_b__219_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Stream *, _OpenReadTaskAsync_b__221_1, (app::WebClient_c * this_ptr, app::OpenReadCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x04776EE0, WebClient_c__OpenReadTaskAsync_b__221_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E120, void, _OpenReadTaskAsync_b__221_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::OpenReadCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x0477C518, WebClient_c__OpenReadTaskAsync_b__221_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Stream *, _OpenWriteTaskAsync_b__225_1, (app::WebClient_c * this_ptr, app::OpenWriteCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x04765308, WebClient_c__OpenWriteTaskAsync_b__225_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E150, void, _OpenWriteTaskAsync_b__225_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::OpenWriteCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x0474D628, WebClient_c__OpenWriteTaskAsync_b__225_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::String *, _UploadStringTaskAsync_b__229_1, (app::WebClient_c * this_ptr, app::UploadStringCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x0471DE70, WebClient_c__UploadStringTaskAsync_b__229_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E180, void, _UploadStringTaskAsync_b__229_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::UploadStringCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x047690F0, WebClient_c__UploadStringTaskAsync_b__229_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Byte__Array *, _DownloadDataTaskAsync_b__231_1, (app::WebClient_c * this_ptr, app::DownloadDataCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x04770C40, WebClient_c__DownloadDataTaskAsync_b__231_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E1B0, void, _DownloadDataTaskAsync_b__231_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::DownloadDataCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x04706208, WebClient_c__DownloadDataTaskAsync_b__231_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object *, _DownloadFileTaskAsync_b__233_1, (app::WebClient_c * this_ptr, app::AsyncCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x0470AB10, WebClient_c__DownloadFileTaskAsync_b__233_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E1E0, void, _DownloadFileTaskAsync_b__233_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::AsyncCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x047424A8, WebClient_c__DownloadFileTaskAsync_b__233_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Byte__Array *, _UploadDataTaskAsync_b__237_1, (app::WebClient_c * this_ptr, app::UploadDataCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x047221D0, WebClient_c__UploadDataTaskAsync_b__237_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E210, void, _UploadDataTaskAsync_b__237_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::UploadDataCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x04709E68, WebClient_c__UploadDataTaskAsync_b__237_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Byte__Array *, _UploadFileTaskAsync_b__241_1, (app::WebClient_c * this_ptr, app::UploadFileCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x04790758, WebClient_c__UploadFileTaskAsync_b__241_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E240, void, _UploadFileTaskAsync_b__241_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::UploadFileCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x04766788, WebClient_c__UploadFileTaskAsync_b__241_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E0C0, app::Byte__Array *, _UploadValuesTaskAsync_b__245_1, (app::WebClient_c * this_ptr, app::UploadValuesCompletedEventArgs * args));
    IL2CPP_REGISTER_METHODINFO(0x04756948, WebClient_c__UploadValuesTaskAsync_b__245_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D5E270, void, _UploadValuesTaskAsync_b__245_2, (app::WebClient_c * this_ptr, app::WebClient * web_client, app::UploadValuesCompletedEventHandler * completion));
    IL2CPP_REGISTER_METHODINFO(0x04758AE0, WebClient_c__UploadValuesTaskAsync_b__245_2__MethodInfo);
}
