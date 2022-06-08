using namespace app;

namespace app::methods::System::Xml::ValidateNames {
IL2CPP_REGISTER_METHOD(0x019536B0, int32_t, ParseNmtoken, (String * s, int32_t offset));
IL2CPP_REGISTER_METHOD(0x019537D0, int32_t, ParseNmtokenNoNamespaces, (String * s, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01953900, int32_t, ParseNameNoNamespaces, (String * s, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01953AC0, bool, IsNameNoNamespaces, (String * s));
IL2CPP_REGISTER_METHOD(0x01953B80, int32_t, ParseNCName, (String * s, int32_t offset));
IL2CPP_REGISTER_METHOD(0x01953D20, int32_t, ParseNCName, (String * s));
IL2CPP_REGISTER_METHOD(0x01953DC0, int32_t, ParseQName, (String * s, int32_t offset, int32_t * colonOffset));
IL2CPP_REGISTER_METHOD(0x01953EF0, void, ParseQNameThrow, (String * s, String * * prefix, String * * localName));
IL2CPP_REGISTER_METHOD(0x01954040, void, ThrowInvalidName, (String * s, int32_t offsetStartChar, int32_t offsetBadChar));
IL2CPP_REGISTER_METHODINFO(0x0472CAC0, ValidateNames_ThrowInvalidName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01954260, Exception *, GetInvalidNameException, (String * s, int32_t offsetStartChar, int32_t offsetBadChar));
IL2CPP_REGISTER_METHOD(0x01954690, void, SplitQName, (String * name, String * * prefix, String * * lname));
IL2CPP_REGISTER_METHODINFO(0x0471D448, ValidateNames_SplitQName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01954800, void, __cctor, (MethodInfo * method));
}
