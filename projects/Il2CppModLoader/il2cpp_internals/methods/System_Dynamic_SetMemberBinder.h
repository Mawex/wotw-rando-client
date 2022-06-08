using namespace app;

namespace app::methods::System::Dynamic::SetMemberBinder {
IL2CPP_REGISTER_METHOD(0x01F939D0, void, __ctor, (SetMemberBinder * __this, String * name, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x01F93A80, Type *, get_ReturnType, (SetMemberBinder * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (SetMemberBinder * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IgnoreCase, (SetMemberBinder * __this));
IL2CPP_REGISTER_METHOD(0x01F93B20, DynamicMetaObject *, Bind, (SetMemberBinder * __this, DynamicMetaObject * target, DynamicMetaObject__Array * args));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStandardBinder, (SetMemberBinder * __this));
IL2CPP_REGISTER_METHOD(0x01F93C40, DynamicMetaObject *, FallbackSetMember, (SetMemberBinder * __this, DynamicMetaObject * target, DynamicMetaObject * value));
}
