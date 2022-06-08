#include <interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::HandleCollector {
IL2CPP_REGISTER_METHOD(0x021BBD50, void, __ctor, (HandleCollector * __this, String * name, int32_t initialThreshold));
IL2CPP_REGISTER_METHOD(0x021BBE70, void, __ctor, (HandleCollector * __this, String * name, int32_t initialThreshold, int32_t maximumThreshold));
IL2CPP_REGISTER_METHODINFO(0x0475B380, HandleCollector__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Count, (HandleCollector * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_InitialThreshold, (HandleCollector * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_MaximumThreshold, (HandleCollector * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (HandleCollector * __this));
IL2CPP_REGISTER_METHOD(0x021BC030, void, Add, (HandleCollector * __this));
IL2CPP_REGISTER_METHODINFO(0x04767A00, HandleCollector_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BC360, void, Remove, (HandleCollector * __this));
IL2CPP_REGISTER_METHODINFO(0x0476A7E0, HandleCollector_Remove__MethodInfo);
}
