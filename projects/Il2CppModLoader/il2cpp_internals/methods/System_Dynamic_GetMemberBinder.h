#include <interception_macros.h>

namespace app::methods::System::Dynamic::GetMemberBinder {
IL2CPP_REGISTER_METHOD(0x01F93770, void, __ctor, (GetMemberBinder * __this, String * name, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x01F93820, Type *, get_ReturnType, (GetMemberBinder * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (GetMemberBinder * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IgnoreCase, (GetMemberBinder * __this));
IL2CPP_REGISTER_METHOD(0x01F938C0, DynamicMetaObject *, FallbackGetMember, (GetMemberBinder * __this, DynamicMetaObject * target));
IL2CPP_REGISTER_METHOD(0x01F938E0, DynamicMetaObject *, Bind, (GetMemberBinder * __this, DynamicMetaObject * target, DynamicMetaObject__Array * args));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStandardBinder, (GetMemberBinder * __this));
}
