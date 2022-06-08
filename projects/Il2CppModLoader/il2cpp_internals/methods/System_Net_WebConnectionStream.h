using namespace app;

namespace app::methods::System::Net::WebConnectionStream {
IL2CPP_REGISTER_METHOD(0x01D6A890, void, __ctor, (WebConnectionStream * __this, WebConnection * cnc, WebConnectionData * data));
IL2CPP_REGISTER_METHODINFO(0x04760AD0, WebConnectionStream__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6ADF0, void, __ctor, (WebConnectionStream * __this, WebConnection * cnc, HttpWebRequest * request));
IL2CPP_REGISTER_METHOD(0x01D6B260, bool, CheckAuthHeader, (WebConnectionStream * __this, String * headerName));
IL2CPP_REGISTER_METHOD(0x01D6B370, bool, IsNtlmAuth, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6B490, void, CheckResponseInBuffer, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, HttpWebRequest *, get_Request, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, WebConnection *, get_Connection, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanTimeout, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x00855600, int32_t, get_ReadTimeout, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6B4E0, void, set_ReadTimeout, (WebConnectionStream * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04776048, WebConnectionStream_set_ReadTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_WriteTimeout, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6B5A0, void, set_WriteTimeout, (WebConnectionStream * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04765EB8, WebConnectionStream_set_WriteTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6B660, bool, get_CompleteRequestWritten, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x003FBE60, void, set_SendChunked, (WebConnectionStream * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_ReadBuffer, (WebConnectionStream * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_ReadBufferOffset, (WebConnectionStream * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00843E80, void, set_ReadBufferSize, (WebConnectionStream * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01D6B670, Byte__Array *, get_WriteBuffer, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6B6A0, int32_t, get_WriteBufferLength, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6B6D0, void, ForceCompletion, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6B720, void, CheckComplete, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6B760, void, ReadAll, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F348, WebConnectionStream_ReadAll__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6BC60, void, WriteCallbackWrapper, (WebConnectionStream * __this, IAsyncResult * r));
IL2CPP_REGISTER_METHODINFO(0x04752908, WebConnectionStream_WriteCallbackWrapper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6BDE0, void, ReadCallbackWrapper, (WebConnectionStream * __this, IAsyncResult * r));
IL2CPP_REGISTER_METHODINFO(0x04710D78, WebConnectionStream_ReadCallbackWrapper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6BF60, int32_t, Read, (WebConnectionStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0474A058, WebConnectionStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6C130, IAsyncResult *, BeginRead, (WebConnectionStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0475B458, WebConnectionStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6C620, int32_t, EndRead, (WebConnectionStream * __this, IAsyncResult * r));
IL2CPP_REGISTER_METHODINFO(0x04725780, WebConnectionStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6CA30, void, WriteAsyncCB, (WebConnectionStream * __this, IAsyncResult * r));
IL2CPP_REGISTER_METHODINFO(0x04769498, WebConnectionStream_WriteAsyncCB__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6CD90, IAsyncResult *, BeginWrite, (WebConnectionStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04708790, WebConnectionStream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6D8F0, void, CheckWriteOverflow, (WebConnectionStream * __this, int64_t contentLength, int64_t totalWritten, int64_t size));
IL2CPP_REGISTER_METHODINFO(0x0474DF70, WebConnectionStream_CheckWriteOverflow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6DA00, void, EndWrite, (WebConnectionStream * __this, IAsyncResult * r));
IL2CPP_REGISTER_METHODINFO(0x04714550, WebConnectionStream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6DCD0, void, Write, (WebConnectionStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x04752138, WebConnectionStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6DEB0, void, SetHeadersAsync, (WebConnectionStream * __this, bool setInternalLength, SimpleAsyncCallback * callback));
IL2CPP_REGISTER_METHOD(0x01D6E100, bool, SetHeadersAsync, (WebConnectionStream * __this, SimpleAsyncResult * result, bool setInternalLength));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_RequestWritten, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6E6C0, SimpleAsyncResult *, WriteRequestAsync, (WebConnectionStream * __this, SimpleAsyncCallback * callback));
IL2CPP_REGISTER_METHOD(0x01D6E800, bool, WriteRequestAsync, (WebConnectionStream * __this, SimpleAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x0477A528, WebConnectionStream_WriteRequestAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A48970, void, InternalClose, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_GetResponseOnClose, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x009CA210, void, set_GetResponseOnClose, (WebConnectionStream * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01D6EB90, void, Close, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04772340, WebConnectionStream_Close__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006DF410, void, KillBuffer, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6EF70, int64_t, Seek, (WebConnectionStream * __this, int64_t a, SeekOrigin__Enum b));
IL2CPP_REGISTER_METHODINFO(0x04772280, WebConnectionStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6EFC0, void, SetLength, (WebConnectionStream * __this, int64_t a));
IL2CPP_REGISTER_METHODINFO(0x04759628, WebConnectionStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6F010, bool, get_CanRead, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6F030, bool, get_CanWrite, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHOD(0x01D6F050, int64_t, get_Length, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHODINFO(0x047572F0, WebConnectionStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6F100, int64_t, get_Position, (WebConnectionStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F020, WebConnectionStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6F150, void, set_Position, (WebConnectionStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04723890, WebConnectionStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D6F1A0, void, __cctor, (MethodInfo * method));
}
