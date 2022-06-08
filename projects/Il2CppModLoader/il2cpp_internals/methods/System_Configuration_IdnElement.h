#include <interception_macros.h>

namespace app::methods::System::Configuration::IdnElement {
IL2CPP_REGISTER_METHOD(0x02961B40, void, __ctor, (IdnElement * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A4B8, IdnElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961B70, UriIdnScope__Enum, get_Enabled, (IdnElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047443B0, IdnElement_get_Enabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961BA0, void, set_Enabled, (IdnElement * __this, UriIdnScope__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0473A228, IdnElement_set_Enabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961BD0, ConfigurationPropertyCollection *, get_Properties, (IdnElement * __this));
IL2CPP_REGISTER_METHODINFO(0x047712E0, IdnElement_get_Properties__MethodInfo);
}
