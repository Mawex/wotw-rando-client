#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::RecordProtocol_SendRecordAsyncResult {
IL2CPP_REGISTER_METHOD(0x01F7AF80, void, __ctor, (RecordProtocol_SendRecordAsyncResult * __this, AsyncCallback * userCallback, Object * userState, HandshakeMessage * message));
IL2CPP_REGISTER_METHOD(0x002FB9B0, HandshakeMessage *, get_Message, (RecordProtocol_SendRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_AsyncState, (RecordProtocol_SendRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Exception *, get_AsyncException, (RecordProtocol_SendRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F7B0E0, bool, get_CompletedWithError, (RecordProtocol_SendRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F7B110, WaitHandle *, get_AsyncWaitHandle, (RecordProtocol_SendRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CompletedSynchronously, (RecordProtocol_SendRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F7B360, bool, get_IsCompleted, (RecordProtocol_SendRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F7B450, void, SetComplete, (RecordProtocol_SendRecordAsyncResult * __this, Exception * ex));
IL2CPP_REGISTER_METHOD(0x01F7B570, void, SetComplete, (RecordProtocol_SendRecordAsyncResult * __this));
}
