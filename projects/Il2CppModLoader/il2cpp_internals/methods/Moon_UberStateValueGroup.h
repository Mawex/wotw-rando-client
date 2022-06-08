#include <interception_macros.h>

namespace app::methods::Moon::UberStateValueGroup {
IL2CPP_REGISTER_METHOD(0x01B6D8A0, void, __ctor, (UberStateValueGroup * __this, UberID * id));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsInitialized, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x01B6DDE0, void, set_IsInitialized, (UberStateValueGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB950, IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Object_ *, get_ObjectStateMap, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Boolean_ *, get_BoolStateMap, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Single_ *, get_FloatStateMap, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Int32_ *, get_IntStateMap, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IEnumerable_1_KeyValuePair_2_Moon_UberID_System_Byte_ *, get_ByteStateMap, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_ID, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x01B6DE20, bool, TryGetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, Object * * uberState));
IL2CPP_REGISTER_METHOD(0x01B6DEF0, bool, TryGetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, bool * uberState));
IL2CPP_REGISTER_METHOD(0x01B6DFC0, bool, TryGetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, float * uberState));
IL2CPP_REGISTER_METHOD(0x01B6E090, bool, TryGetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, int32_t * uberState));
IL2CPP_REGISTER_METHOD(0x01B6E160, bool, TryGetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, uint8_t * uberState));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Debug, (UberStateValueGroup * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01B6E290, void, SetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, Object * uberState));
IL2CPP_REGISTER_METHOD(0x01B6E380, void, SetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, bool uberState));
IL2CPP_REGISTER_METHOD(0x01B6E480, void, SetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, float uberState));
IL2CPP_REGISTER_METHOD(0x01B6E570, void, SetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, int32_t uberState));
IL2CPP_REGISTER_METHOD(0x01B6E660, void, SetState, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, uint8_t uberState));
IL2CPP_REGISTER_METHOD(0x00617EB0, void, SetDirty, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsDirty, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, int64_t, get_HeaderSize, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x01B6E760, int64_t, get_DataSize, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x01B6E790, int64_t, get_FullSize, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x01B6E7C0, void, SetClean, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x01B6E7E0, void, CalculateDataSize, (UberStateValueGroup * __this));
IL2CPP_REGISTER_METHOD(0x01B6EA50, void, Save, (UberStateValueGroup * __this, UberStateArchive * archive));
IL2CPP_REGISTER_METHOD(0x01B6F970, void, Load, (UberStateValueGroup * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHODINFO(0x0473BBC8, UberStateValueGroup_Load__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B6FB30, void, SetStateInternal, (UberStateValueGroup * __this, ISerializedUberState * uberStateDescriptor, Object * uberState));
IL2CPP_REGISTER_METHOD(0x01B6FEF0, void, SimulateReadingType, (UberStateValueGroup * __this, UberStateArchive * archive, UberStateHeader_UberStateType__Enum headerType));
}
