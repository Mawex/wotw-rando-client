#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::RecordProtocol_ReceiveRecordAsyncResult {
IL2CPP_REGISTER_METHOD(0x01F7A930, void, __ctor, (RecordProtocol_ReceiveRecordAsyncResult * __this, AsyncCallback * userCallback, Object * userState, Byte__Array * initialBuffer, Stream * record));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Stream *, get_Record, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Byte__Array *, get_ResultingBuffer, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Byte__Array *, get_InitialBuffer, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_AsyncState, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Exception *, get_AsyncException, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F7AAA0, bool, get_CompletedWithError, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F7AAD0, WaitHandle *, get_AsyncWaitHandle, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CompletedSynchronously, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F7AD20, bool, get_IsCompleted, (RecordProtocol_ReceiveRecordAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01F7AE10, void, SetComplete, (RecordProtocol_ReceiveRecordAsyncResult * __this, Exception * ex, Byte__Array * resultingBuffer));
IL2CPP_REGISTER_METHOD(0x01F7AF50, void, SetComplete, (RecordProtocol_ReceiveRecordAsyncResult * __this, Exception * ex));
IL2CPP_REGISTER_METHOD(0x01F7AF60, void, SetComplete, (RecordProtocol_ReceiveRecordAsyncResult * __this, Byte__Array * resultingBuffer));
IL2CPP_REGISTER_METHOD(0x01F7AF70, void, SetComplete, (RecordProtocol_ReceiveRecordAsyncResult * __this));
}
