using namespace app;

namespace app::methods::FullSerializer::Internal::fsVersionManager {
IL2CPP_REGISTER_METHOD(0x01502EE0, fsResult, GetVersionImportPath, (String * currentVersion, fsVersionedType targetVersion, List_1_FullSerializer_Internal_fsVersionedType_ * * path));
IL2CPP_REGISTER_METHOD(0x015033E0, bool, GetVersionImportPathRecursive, (List_1_FullSerializer_Internal_fsVersionedType_ * path, String * currentVersion, fsVersionedType current));
IL2CPP_REGISTER_METHOD(0x015035B0, fsOption_1_fsVersionedType_, GetVersionedType, (Type * type));
IL2CPP_REGISTER_METHODINFO(0x04714B68, fsVersionManager_GetVersionedType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01503A70, void, VerifyConstructors, (fsVersionedType type));
IL2CPP_REGISTER_METHODINFO(0x04717D08, fsVersionManager_VerifyConstructors__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01503CF0, void, VerifyUniqueVersionStrings, (fsVersionedType type));
IL2CPP_REGISTER_METHODINFO(0x047206B8, fsVersionManager_VerifyUniqueVersionStrings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015041D0, void, __cctor, (MethodInfo * method));
}
