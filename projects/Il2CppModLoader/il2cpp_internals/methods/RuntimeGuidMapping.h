using namespace app;

namespace app::methods::RuntimeGuidMapping {
IL2CPP_REGISTER_METHOD(0x02719EB0, void, ForceRefresh, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintResults, (RuntimeGuidMapping * __this));
IL2CPP_REGISTER_METHOD(0x02719EF0, RuntimeGuidMapping *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (RuntimeGuidMapping * __this));
IL2CPP_REGISTER_METHOD(0x0271A190, void, Refresh, (RuntimeGuidMapping * __this));
IL2CPP_REGISTER_METHOD(0x0271A1A0, void, Parse, (RuntimeGuidMapping * __this));
IL2CPP_REGISTER_METHOD(0x0271A460, Byte__Array *, ReadFileWithWWW, (RuntimeGuidMapping * __this, String * filePath));
IL2CPP_REGISTER_METHODINFO(0x04799FC8, RuntimeGuidMapping_ReadFileWithWWW__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0271A7F0, uint32_t, Get, (RuntimeGuidMapping * __this, uint32_t hash, Byte__Array * guidBytes));
IL2CPP_REGISTER_METHOD(0x0271AA30, bool, TryGet, (RuntimeGuidMapping * __this, uint32_t hash, Byte__Array * guidBytes, uint32_t * result));
IL2CPP_REGISTER_METHOD(0x0271ACC0, bool, IsNullGuid, (RuntimeGuidMapping * __this, Byte__Array * guidBytes));
IL2CPP_REGISTER_METHOD(0x0271AD10, void, AddMapping, (RuntimeGuidMapping * __this, Byte__Array * guidBytes, uint32_t hash, uint32_t id));
IL2CPP_REGISTER_METHOD(0x0271AF20, void, __ctor, (RuntimeGuidMapping * __this));
}
