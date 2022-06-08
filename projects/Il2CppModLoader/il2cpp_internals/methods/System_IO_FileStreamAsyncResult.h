using namespace app;

namespace app::methods::System::IO::FileStreamAsyncResult {
IL2CPP_REGISTER_METHOD(0x0236F0A0, void, __ctor, (FileStreamAsyncResult * __this, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHOD(0x0236F2E0, void, CBWrapper, (IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x047115B0, FileStreamAsyncResult_CBWrapper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_AsyncState, (FileStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_CompletedSynchronously, (FileStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, WaitHandle *, get_AsyncWaitHandle, (FileStreamAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsCompleted, (FileStreamAsyncResult * __this));
}
