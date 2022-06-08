#include <interception_macros.h>

namespace app::methods::FullSerializer::fsAotCompilationManager {
IL2CPP_REGISTER_METHOD(0x01505520, bool, HasMember, (fsAotVersionInfo versionInfo, fsAotVersionInfo_Member member));
IL2CPP_REGISTER_METHOD(0x015055E0, bool, IsAotModelUpToDate, (fsMetaType * currentModel, fsIAotConverter * aotModel));
IL2CPP_REGISTER_METHOD(0x015057F0, String *, RunAotCompilationForType, (fsConfig * config, Type * type));
IL2CPP_REGISTER_METHOD(0x01505900, String *, EmitVersionInfo, (String * prefix, Type * type, fsMetaProperty__Array * members, bool isConstructorPublic));
IL2CPP_REGISTER_METHOD(0x01505DA0, String *, GetConverterString, (fsMetaProperty * member));
IL2CPP_REGISTER_METHOD(0x01505ED0, String *, GetQualifiedConverterNameForType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01505FF0, String *, GenerateDirectConverterForTypeInCSharp, (Type * type, fsMetaProperty__Array * members, bool isConstructorPublic));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsAotCompilationManager * __this));
IL2CPP_REGISTER_METHOD(0x01507310, void, __cctor, ());
}
