#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonDictionaryContract {
IL2CPP_REGISTER_METHOD(0x002FBD00, Func_2_String_String_ *, get_DictionaryKeyResolver, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_DictionaryKeyResolver, (JsonDictionaryContract * __this, Func_2_String_String_ * value));
IL2CPP_REGISTER_METHOD(0x002FBD20, Type *, get_DictionaryKeyType, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBD40, Type *, get_DictionaryValueType, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBD60, JsonContract *, get_KeyContract, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_KeyContract, (JsonDictionaryContract * __this, JsonContract * value));
IL2CPP_REGISTER_METHOD(0x00AE6060, bool, get_ShouldCreateWrapper, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x0186F970, ObjectConstructor_1_System_Object_ *, get_ParameterizedCreator, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x0065FBC0, ObjectConstructor_1_System_Object_ *, get_OverrideCreator, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_OverrideCreator, (JsonDictionaryContract * __this, ObjectConstructor_1_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_HasParameterizedCreator, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x00757000, void, set_HasParameterizedCreator, (JsonDictionaryContract * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0186FA40, bool, get_HasParameterizedCreatorInternal, (JsonDictionaryContract * __this));
IL2CPP_REGISTER_METHOD(0x0186FB00, void, __ctor, (JsonDictionaryContract * __this, Type * underlyingType));
IL2CPP_REGISTER_METHOD(0x018706C0, IWrappedDictionary *, CreateWrapper, (JsonDictionaryContract * __this, Object * dictionary));
IL2CPP_REGISTER_METHOD(0x01870A50, IDictionary *, CreateTemporaryDictionary, (JsonDictionaryContract * __this));
}
