#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Linq::JPropertyKeyedCollection {
IL2CPP_REGISTER_METHOD(0x01F0EA40, void, __ctor, (JPropertyKeyedCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F0EBB0, void, AddKey, (JPropertyKeyedCollection * __this, String * key, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F0EC80, void, ClearItems, (JPropertyKeyedCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F0ED60, bool, Contains, (JPropertyKeyedCollection * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x04769460, JPropertyKeyedCollection_Contains__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F0EE60, void, EnsureDictionary, (JPropertyKeyedCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F0F010, String *, GetKeyForItem, (JPropertyKeyedCollection * __this, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F0F120, void, InsertItem, (JPropertyKeyedCollection * __this, int32_t index, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F0F220, void, RemoveItem, (JPropertyKeyedCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F0F320, void, RemoveKey, (JPropertyKeyedCollection * __this, String * key));
IL2CPP_REGISTER_METHOD(0x01F0F3C0, void, SetItem, (JPropertyKeyedCollection * __this, int32_t index, JToken * item));
IL2CPP_REGISTER_METHOD(0x01F0F5A0, bool, TryGetValue, (JPropertyKeyedCollection * __this, String * key, JToken * * value));
IL2CPP_REGISTER_METHOD(0x01F0F660, ICollection_1_System_String_ *, get_Keys, (JPropertyKeyedCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F0F700, int32_t, IndexOfReference, (JPropertyKeyedCollection * __this, JToken * t));
IL2CPP_REGISTER_METHOD(0x01F0F850, void, __cctor, ());
}
