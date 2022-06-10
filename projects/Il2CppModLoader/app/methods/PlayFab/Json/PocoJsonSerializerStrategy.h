#pragma once
#include <interception_macros.h>

namespace app::methods::PlayFab::Json::PocoJsonSerializerStrategy {
    IL2CPP_REGISTER_METHOD(0x0184C8A0, void, ctor, (app::PocoJsonSerializerStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0184CE20, app::String *, MapClrMemberNameToJsonFieldName_1, (app::PocoJsonSerializerStrategy * this_ptr, app::MemberInfo_1 * member_info))
    IL2CPP_REGISTER_METHOD(0x0184CFC0, void, MapClrMemberNameToJsonFieldName_2, (app::PocoJsonSerializerStrategy * this_ptr, app::MemberInfo_1 * member_info, app::String * * json_name, app::JsonProperty_1 * * json_prop))
    IL2CPP_REGISTER_METHOD(0x0184D190, app::ReflectionUtils_ConstructorDelegate *, ContructorDelegateFactory, (app::PocoJsonSerializerStrategy * this_ptr, app::Type * key))
    IL2CPP_REGISTER_METHOD(0x0184D2C0, app::IDictionary_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate_ *, GetterValueFactory, (app::PocoJsonSerializerStrategy * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0184D820, app::IDictionary_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate_ *, SetterValueFactory, (app::PocoJsonSerializerStrategy * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0184DE30, bool, TrySerializeNonPrimitiveObject, (app::PocoJsonSerializerStrategy * this_ptr, app::Object * input, app::Object * * output))
    IL2CPP_REGISTER_METHOD(0x0184DEA0, app::Object *, DeserializeObject, (app::PocoJsonSerializerStrategy * this_ptr, app::Object * value, app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x04712238, PocoJsonSerializerStrategy_DeserializeObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0184F6A0, app::Object *, SerializeEnum, (app::PocoJsonSerializerStrategy * this_ptr, app::Enum p))
    IL2CPP_REGISTER_METHOD(0x0184F790, bool, TrySerializeKnownTypes, (app::PocoJsonSerializerStrategy * this_ptr, app::Object * input, app::Object * * output))
    IL2CPP_REGISTER_METHOD(0x0184FAE0, bool, TrySerializeUnknownTypes, (app::PocoJsonSerializerStrategy * this_ptr, app::Object * input, app::Object * * output))
    IL2CPP_REGISTER_METHODINFO(0x047225B8, PocoJsonSerializerStrategy_TrySerializeUnknownTypes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0184FF90, void, cctor, ())
}
