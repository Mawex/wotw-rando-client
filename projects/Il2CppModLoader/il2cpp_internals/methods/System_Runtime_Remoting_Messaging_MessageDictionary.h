#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::MessageDictionary {
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (MessageDictionary * __this, IMethodMessage * message));
IL2CPP_REGISTER_METHOD(0x02312630, bool, HasUserData, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02312750, IDictionary *, get_InternalDictionary, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_MethodKeys, (MessageDictionary * __this, String__Array * value));
IL2CPP_REGISTER_METHOD(0x02312850, IDictionary *, AllocInternalProperties, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x023129A0, IDictionary *, GetInternalProperties, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x023129D0, bool, IsOverridenKey, (MessageDictionary * __this, String * key));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02312A70, Object *, get_Item, (MessageDictionary * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02312BF0, void, set_Item, (MessageDictionary * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x02312C00, Object *, GetMethodProperty, (MessageDictionary * __this, String * key));
IL2CPP_REGISTER_METHOD(0x02313070, void, SetMethodProperty, (MessageDictionary * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x02313280, ICollection *, get_Keys, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x023136A0, ICollection *, get_Values, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02313AE0, void, Add, (MessageDictionary * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x02313CA0, void, Clear, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x02313D30, bool, Contains, (MessageDictionary * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02313EA0, void, Remove, (MessageDictionary * __this, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04767510, MessageDictionary_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02314030, int32_t, get_Count, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x023140F0, void, CopyTo, (MessageDictionary * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x023141A0, IEnumerator *, IEnumerable_GetEnumerator, (MessageDictionary * __this));
IL2CPP_REGISTER_METHOD(0x023142F0, IDictionaryEnumerator *, GetEnumerator, (MessageDictionary * __this));
}
