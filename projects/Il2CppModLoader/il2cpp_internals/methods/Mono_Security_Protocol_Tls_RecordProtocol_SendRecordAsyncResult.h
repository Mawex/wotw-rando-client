#include <interception_macros.h>

namespace app::methods::Mono_Security_Protocol_Tls::RecordProtocol_SendRecordAsyncResult {
IL2CPP_REGISTER_METHOD(0x01F7AF80, void, __ctor, (app::RecordProtocol_SendRecordAsyncResult * this_ptr, app::AsyncCallback * user_callback, app::Object * user_state, app::HandshakeMessage * message));
IL2CPP_REGISTER_METHOD(0x002FB9B0, HandshakeMessage *, get_Message, (app::RecordProtocol_SendRecordAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_AsyncState, (app::RecordProtocol_SendRecordAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Exception *, get_AsyncException, (app::RecordProtocol_SendRecordAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F7B0E0, bool, get_CompletedWithError, (app::RecordProtocol_SendRecordAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F7B110, WaitHandle *, get_AsyncWaitHandle, (app::RecordProtocol_SendRecordAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CompletedSynchronously, (app::RecordProtocol_SendRecordAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F7B360, bool, get_IsCompleted, (app::RecordProtocol_SendRecordAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F7B450, void, SetComplete_1, (app::RecordProtocol_SendRecordAsyncResult * this_ptr, app::Exception * ex));
IL2CPP_REGISTER_METHOD(0x01F7B570, void, SetComplete_2, (app::RecordProtocol_SendRecordAsyncResult * this_ptr));
}
