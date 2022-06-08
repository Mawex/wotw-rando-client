#include <interception_macros.h>

namespace app::methods::SmartInput::InputCacheManager {
IL2CPP_REGISTER_METHOD(0x006CB5A0, void, DeclareSource, (InputCacheManager * __this, ICachableInput * input));
IL2CPP_REGISTER_METHOD(0x006CB720, void, PreDeclare, (InputCacheManager * __this));
IL2CPP_REGISTER_METHOD(0x006CB870, void, PostDeclare, (InputCacheManager * __this));
IL2CPP_REGISTER_METHOD(0x006CCA80, void, SetDirtyReaders, (InputCacheManager * __this, int32_t sourceIndex));
IL2CPP_REGISTER_METHOD(0x006CCC00, void, Refresh, (InputCacheManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InputCacheManager * __this));
}
