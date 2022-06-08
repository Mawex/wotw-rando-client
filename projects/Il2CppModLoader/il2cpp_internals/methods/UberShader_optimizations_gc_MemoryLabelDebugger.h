#include <interception_macros.h>

namespace app::methods::UberShader::optimizations::gc::MemoryLabelDebugger {
IL2CPP_REGISTER_METHOD(0x018FDB20, MemoryLabelDebugger_MemoryManagerDataCache *, get_LastKnownInfo, ());
IL2CPP_REGISTER_METHOD(0x018FDBC0, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x018FDC60, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x018FDD80, void, Update, ());
IL2CPP_REGISTER_METHOD(0x018FDF70, void, InitLocalCache, ());
IL2CPP_REGISTER_METHOD(0x018FE9B0, void, UpdateCache, ());
IL2CPP_REGISTER_METHOD(0x018FEDA0, void, WriteCSV, (String * outputFile));
IL2CPP_REGISTER_METHOD(0x018FF660, int32_t, GetIndexForLabelName, (String * label));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MemoryLabelDebugger * __this));
IL2CPP_REGISTER_METHOD(0x018FF8E0, void, __cctor, ());
}
