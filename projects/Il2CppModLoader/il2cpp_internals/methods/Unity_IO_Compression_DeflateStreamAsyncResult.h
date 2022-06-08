#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::DeflateStreamAsyncResult {
IL2CPP_REGISTER_METHOD(0x02B75330, void, __ctor, (DeflateStreamAsyncResult * __this, Object * asyncObject, Object * asyncState, AsyncCallback * asyncCallback, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x002FB990, Object *, get_AsyncState, (DeflateStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x02B75360, WaitHandle *, get_AsyncWaitHandle, (DeflateStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_CompletedSynchronously, (DeflateStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x02B75520, bool, get_IsCompleted, (DeflateStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Object *, get_Result, (DeflateStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x02B75530, void, Close, (DeflateStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x02B755E0, void, InvokeCallback, (DeflateStreamAsyncResult * __this, bool completedSynchronously, Object * result));
IL2CPP_REGISTER_METHOD(0x02B75600, void, InvokeCallback, (DeflateStreamAsyncResult * __this, Object * result));
IL2CPP_REGISTER_METHOD(0x02B755E0, void, Complete, (DeflateStreamAsyncResult * __this, bool completedSynchronously, Object * result));
IL2CPP_REGISTER_METHOD(0x02B75610, void, Complete, (DeflateStreamAsyncResult * __this, Object * result));
}
