#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Contexts::DynamicPropertyCollection {
IL2CPP_REGISTER_METHOD(0x02305550, bool, get_HasProperties, (DynamicPropertyCollection * __this));
IL2CPP_REGISTER_METHOD(0x02305580, bool, RegisterDynamicProperty, (DynamicPropertyCollection * __this, IDynamicProperty * prop));
IL2CPP_REGISTER_METHODINFO(0x0476AB10, DynamicPropertyCollection_RegisterDynamicProperty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02305930, bool, UnregisterDynamicProperty, (DynamicPropertyCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0478D518, DynamicPropertyCollection_UnregisterDynamicProperty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02305B00, void, NotifyMessage, (DynamicPropertyCollection * __this, bool start, IMessage * msg, bool client_site, bool async));
IL2CPP_REGISTER_METHOD(0x02306000, int32_t, FindProperty, (DynamicPropertyCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x023061F0, void, __ctor, (DynamicPropertyCollection * __this));
}
