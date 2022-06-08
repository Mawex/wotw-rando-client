#include <interception_macros.h>

namespace app::methods::Moon::DynamicDataLinkUtils {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x02F885A0, void, WarmAttributeCacheTestExternal, ());
IL2CPP_REGISTER_METHOD(0x02F886D0, void, WarmAttributeCache, ());
IL2CPP_REGISTER_METHOD(0x02F890F0, void, WarmPropertyCache, (int32_t classID, Type * type));
IL2CPP_REGISTER_METHOD(0x02F8A060, IRuntimeDynamicDataLink *, CreateRuntimeDynamicDataLinkFromData, (DynamicDataLinkSerializedData data));
IL2CPP_REGISTER_METHOD(0x02F8A890, DynamicDataLinkUtils_InfoStruct, GetMemberInfoFromString, (DynamicDataLinkSerializedData data));
IL2CPP_REGISTER_METHOD(0x02F8AED0, DynamicDataLinkUtils_InfoStruct, GetMemberInfoFromString, (DynamicDataLinkUtils_DataTargetMemberType__Enum memberType, Type * targetObjectType, String * memberName));
IL2CPP_REGISTER_METHOD(0x02F8B4B0, DynamicDataLinkUtils_InfoStruct, GetMemberInfoFromID, (DynamicDataLinkSerializedData data));
IL2CPP_REGISTER_METHODINFO(0x04774C70, DynamicDataLinkUtils_GetMemberInfoFromID__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02F8BA70, bool, IsValidMethod, (MethodInfo_1 * methodInfo));
IL2CPP_REGISTER_METHOD(0x02F8BBD0, Type *, HackGetType, (String * name));
IL2CPP_REGISTER_METHOD(0x02F8BEF0, int32_t, GetClassID, (Type * targetObjectType, MemberInfo_1 * targetMemberInfo));
IL2CPP_REGISTER_METHOD(0x02F8C1E0, int32_t, GetFieldID, (Type * targetObjectType, MemberInfo_1 * targetMemberInfo));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
