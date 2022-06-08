#include <interception_macros.h>

namespace app::methods::PlayFab::Json::PocoJsonSerializerStrategy {
IL2CPP_REGISTER_METHOD(0x0184C8A0, void, __ctor, (PocoJsonSerializerStrategy * __this));
IL2CPP_REGISTER_METHOD(0x0184CE20, String *, MapClrMemberNameToJsonFieldName, (PocoJsonSerializerStrategy * __this, MemberInfo_1 * memberInfo));
IL2CPP_REGISTER_METHOD(0x0184CFC0, void, MapClrMemberNameToJsonFieldName, (PocoJsonSerializerStrategy * __this, MemberInfo_1 * memberInfo, String * * jsonName, JsonProperty_1 * * jsonProp));
IL2CPP_REGISTER_METHOD(0x0184D190, ReflectionUtils_ConstructorDelegate *, ContructorDelegateFactory, (PocoJsonSerializerStrategy * __this, Type * key));
IL2CPP_REGISTER_METHOD(0x0184D2C0, IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate_ *, GetterValueFactory, (PocoJsonSerializerStrategy * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0184D820, IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate_ *, SetterValueFactory, (PocoJsonSerializerStrategy * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0184DE30, bool, TrySerializeNonPrimitiveObject, (PocoJsonSerializerStrategy * __this, Object * input, Object * * output));
IL2CPP_REGISTER_METHOD(0x0184DEA0, Object *, DeserializeObject, (PocoJsonSerializerStrategy * __this, Object * value, Type * type));
IL2CPP_REGISTER_METHODINFO(0x04712238, PocoJsonSerializerStrategy_DeserializeObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0184F6A0, Object *, SerializeEnum, (PocoJsonSerializerStrategy * __this, Enum p));
IL2CPP_REGISTER_METHOD(0x0184F790, bool, TrySerializeKnownTypes, (PocoJsonSerializerStrategy * __this, Object * input, Object * * output));
IL2CPP_REGISTER_METHOD(0x0184FAE0, bool, TrySerializeUnknownTypes, (PocoJsonSerializerStrategy * __this, Object * input, Object * * output));
IL2CPP_REGISTER_METHODINFO(0x047225B8, PocoJsonSerializerStrategy_TrySerializeUnknownTypes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0184FF90, void, __cctor, ());
}
