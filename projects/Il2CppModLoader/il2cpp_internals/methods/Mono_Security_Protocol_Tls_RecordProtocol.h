#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::RecordProtocol {
IL2CPP_REGISTER_METHOD(0x002FB930, Context_1 *, get_Context, (RecordProtocol * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Context, (RecordProtocol * __this, Context_1 * value));
IL2CPP_REGISTER_METHOD(0x01F77320, void, __ctor, (RecordProtocol * __this, Stream * innerStream, Context_1 * context));
IL2CPP_REGISTER_METHOD(0x01F77350, void, SendRecord, (RecordProtocol * __this, HandshakeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F77380, void, ProcessChangeCipherSpec, (RecordProtocol * __this));
IL2CPP_REGISTER_METHOD(0x01F774A0, HandshakeMessage *, GetMessage, (RecordProtocol * __this, HandshakeType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x047816F0, RecordProtocol_GetMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F774F0, IAsyncResult *, BeginReceiveRecord, (RecordProtocol * __this, Stream * record, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0472A430, RecordProtocol_BeginReceiveRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F77940, void, InternalReceiveRecordCallback, (RecordProtocol * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04790BF0, RecordProtocol_InternalReceiveRecordCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F77E00, Byte__Array *, EndReceiveRecord, (RecordProtocol * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04733768, RecordProtocol_EndReceiveRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F77FB0, Byte__Array *, ReceiveRecord, (RecordProtocol * __this, Stream * record));
IL2CPP_REGISTER_METHODINFO(0x04778B20, RecordProtocol_ReceiveRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F784B0, Byte__Array *, ReadRecordBuffer, (RecordProtocol * __this, int32_t contentType, Stream * record));
IL2CPP_REGISTER_METHODINFO(0x04706C18, RecordProtocol_ReadRecordBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F78840, void, ProcessAlert, (RecordProtocol * __this, AlertLevel__Enum alertLevel, AlertDescription__Enum_1 alertDesc));
IL2CPP_REGISTER_METHODINFO(0x0474AC28, RecordProtocol_ProcessAlert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F78920, void, SendAlert, (RecordProtocol * __this, Exception * * ex));
IL2CPP_REGISTER_METHOD(0x01F78BF0, void, SendAlert, (RecordProtocol * __this, AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x01F78D60, void, SendAlert, (RecordProtocol * __this, AlertLevel__Enum level, AlertDescription__Enum_1 description));
IL2CPP_REGISTER_METHOD(0x01F78ED0, void, SendAlert, (RecordProtocol * __this, Alert * alert));
IL2CPP_REGISTER_METHOD(0x01F79020, void, SendChangeCipherSpec, (RecordProtocol * __this));
IL2CPP_REGISTER_METHOD(0x01F79190, void, SendChangeCipherSpec, (RecordProtocol * __this, Stream * recordStream));
IL2CPP_REGISTER_METHOD(0x01F79340, IAsyncResult *, BeginSendChangeCipherSpec, (RecordProtocol * __this, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01F79430, void, EndSendChangeCipherSpec, (RecordProtocol * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x01F79560, IAsyncResult *, BeginSendRecord, (RecordProtocol * __this, HandshakeType__Enum handshakeType, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01F79920, void, InternalSendRecordCallback, (RecordProtocol * __this, IAsyncResult * ar));
IL2CPP_REGISTER_METHODINFO(0x047701A8, RecordProtocol_InternalSendRecordCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F79AD0, IAsyncResult *, BeginSendRecord, (RecordProtocol * __this, ContentType__Enum contentType, Byte__Array * recordData, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04773DD8, RecordProtocol_BeginSendRecord_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F79C40, void, EndSendRecord, (RecordProtocol * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04721DA0, RecordProtocol_EndSendRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F79DE0, void, SendRecord, (RecordProtocol * __this, ContentType__Enum contentType, Byte__Array * recordData));
IL2CPP_REGISTER_METHOD(0x01F79E10, Byte__Array *, EncodeRecord, (RecordProtocol * __this, ContentType__Enum contentType, Byte__Array * recordData));
IL2CPP_REGISTER_METHOD(0x01F79E40, Byte__Array *, EncodeRecord, (RecordProtocol * __this, ContentType__Enum contentType, Byte__Array * recordData, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047449A8, RecordProtocol_EncodeRecord_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F7A180, Byte__Array *, EncodeHandshakeRecord, (RecordProtocol * __this, HandshakeType__Enum handshakeType));
IL2CPP_REGISTER_METHOD(0x01F7A280, Byte__Array *, encryptRecordFragment, (RecordProtocol * __this, ContentType__Enum contentType, Byte__Array * fragment));
IL2CPP_REGISTER_METHOD(0x01F7A440, Byte__Array *, decryptRecordFragment, (RecordProtocol * __this, ContentType__Enum contentType, Byte__Array * fragment));
IL2CPP_REGISTER_METHODINFO(0x04706E10, RecordProtocol_decryptRecordFragment__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F7A750, bool, Compare, (RecordProtocol * __this, Byte__Array * array1, Byte__Array * array2));
IL2CPP_REGISTER_METHOD(0x01F7A7D0, void, __cctor, ());
}
