using namespace app;

namespace app::methods::UberShader::optimizations::gc::NvnMemoryDebugger {
IL2CPP_REGISTER_METHOD(0x01900D80, NvnMemoryDebugger_NvnDataCache *, get_LastKnownInfo, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01900E20, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01900EC0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x01900FE0, void, Update, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x019011D0, void, InitLocalCache, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01901AF0, void, UpdateCache, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NvnMemoryDebugger * __this));
IL2CPP_REGISTER_METHOD(0x01902050, void, __cctor, (MethodInfo * method));
}
