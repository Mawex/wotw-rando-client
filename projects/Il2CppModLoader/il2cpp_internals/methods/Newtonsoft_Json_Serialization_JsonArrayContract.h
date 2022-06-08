#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonArrayContract {
IL2CPP_REGISTER_METHOD(0x002FBD00, Type *, get_CollectionItemType, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x003FFD00, bool, get_IsMultidimensionalArray, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x008A6E90, bool, get_IsArray, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x0186C330, bool, get_ShouldCreateWrapper, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x0186C340, bool, get_CanDeserialize, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x0186C350, void, set_CanDeserialize, (JsonArrayContract * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0186C360, ObjectConstructor_1_System_Object_ *, get_ParameterizedCreator, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x0065FBA0, ObjectConstructor_1_System_Object_ *, get_OverrideCreator, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x0186C430, void, set_OverrideCreator, (JsonArrayContract * __this, ObjectConstructor_1_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_HasParameterizedCreator, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x00801AD0, void, set_HasParameterizedCreator, (JsonArrayContract * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0186C440, bool, get_HasParameterizedCreatorInternal, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x0186C500, void, __ctor, (JsonArrayContract * __this, Type * underlyingType));
IL2CPP_REGISTER_METHOD(0x0186D460, IWrappedCollection *, CreateWrapper, (JsonArrayContract * __this, Object * list));
IL2CPP_REGISTER_METHOD(0x0186D920, IList *, CreateTemporaryCollection, (JsonArrayContract * __this));
IL2CPP_REGISTER_METHOD(0x0186DBB0, void, StoreFSharpListCreatorIfNecessary, (JsonArrayContract * __this, Type * underlyingType));
}
