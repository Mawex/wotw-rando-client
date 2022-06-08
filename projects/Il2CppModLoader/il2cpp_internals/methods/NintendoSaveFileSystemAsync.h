using namespace app;

namespace app::methods::NintendoSaveFileSystemAsync {
IL2CPP_REGISTER_METHOD(0x031120B0, void, SubmitWriteRequestAsync, (String * path, Byte__Array * data, int32_t fileSizeInBytes, bool overwrite, bool isFromCopyRequest));
IL2CPP_REGISTER_METHOD(0x03112340, void, SubmitCopyRequestAsync, (String * source, String * dest, bool overwrite));
IL2CPP_REGISTER_METHOD(0x03112630, void, Main, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03112960, void, FlushQueue, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03112B70, void, HandleQueueLockFree, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03112CF0, void, Write, (NSAsyncQueueInfo * info));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Copy, (NSAsyncQueueInfo * info));
IL2CPP_REGISTER_METHOD(0x03112D80, void, Debug, (String * text));
IL2CPP_REGISTER_METHOD(0x03112E20, void, DebugError, (String * text));
IL2CPP_REGISTER_METHOD(0x03112EC0, void, DebugException, (Exception * e));
IL2CPP_REGISTER_METHOD(0x03112F60, void, LockDebug, (String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NintendoSaveFileSystemAsync * __this));
IL2CPP_REGISTER_METHOD(0x03113040, void, __cctor, (MethodInfo * method));
}
