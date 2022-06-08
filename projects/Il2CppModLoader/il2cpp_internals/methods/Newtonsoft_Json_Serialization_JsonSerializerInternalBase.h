#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
IL2CPP_REGISTER_METHOD(0x01873D40, void, __ctor, (JsonSerializerInternalBase * __this, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01873E00, BidirectionalDictionary_2_System_String_System_Object_ *, get_DefaultReferenceMappings, (JsonSerializerInternalBase * __this));
IL2CPP_REGISTER_METHOD(0x01874110, NullValueHandling__Enum, ResolvedNullValueHandling, (JsonSerializerInternalBase * __this, JsonObjectContract * containerContract, JsonProperty * property));
IL2CPP_REGISTER_METHOD(0x018741F0, ErrorContext *, GetErrorContext, (JsonSerializerInternalBase * __this, Object * currentObject, Object * member, String * path, Exception * error));
IL2CPP_REGISTER_METHODINFO(0x0476B0E8, JsonSerializerInternalBase_GetErrorContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018743C0, void, ClearErrorContext, (JsonSerializerInternalBase * __this));
IL2CPP_REGISTER_METHODINFO(0x04774610, JsonSerializerInternalBase_ClearErrorContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01874480, bool, IsErrorHandled, (JsonSerializerInternalBase * __this, Object * currentObject, JsonContract * contract, Object * keyValue, IJsonLineInfo * lineInfo, String * path, Exception * ex));
}
