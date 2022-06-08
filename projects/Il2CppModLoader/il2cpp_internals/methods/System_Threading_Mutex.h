using namespace app;

namespace app::methods::System::Threading::Mutex {
IL2CPP_REGISTER_METHOD(0x027E0FD0, bool, ReleaseMutex_internal, (void * handle));
IL2CPP_REGISTER_METHOD(0x027E0FF0, void *, CreateMutex_internal, (bool initiallyOwned, String * name, bool * created));
IL2CPP_REGISTER_METHOD(0x027E10C0, void, __ctor, (Mutex * __this));
IL2CPP_REGISTER_METHOD(0x027E11B0, void, ReleaseMutex, (Mutex * __this));
IL2CPP_REGISTER_METHODINFO(0x04703600, Mutex_ReleaseMutex__MethodInfo);
}
