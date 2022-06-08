using namespace app;

namespace app::methods::System::Net::TrackingValidationObjectDictionary {
IL2CPP_REGISTER_METHOD(0x020AA220, void, __ctor, (TrackingValidationObjectDictionary * __this, IDictionary_2_System_String_System_Net_TrackingValidationObjectDictionary_ValidateAndParseValue_ * validators));
IL2CPP_REGISTER_METHOD(0x020AA250, void, PersistValue, (TrackingValidationObjectDictionary * __this, String * key, String * value, bool addValue));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsChanged, (TrackingValidationObjectDictionary * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_IsChanged, (TrackingValidationObjectDictionary * __this, bool value));
IL2CPP_REGISTER_METHOD(0x020AA5C0, Object *, InternalGet, (TrackingValidationObjectDictionary * __this, String * key));
IL2CPP_REGISTER_METHOD(0x020AA6A0, void, InternalSet, (TrackingValidationObjectDictionary * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x020AA130, String *, get_Item, (TrackingValidationObjectDictionary * __this, String * key));
IL2CPP_REGISTER_METHOD(0x020AA890, void, set_Item, (TrackingValidationObjectDictionary * __this, String * key, String * value));
IL2CPP_REGISTER_METHOD(0x020AA8B0, void, Add, (TrackingValidationObjectDictionary * __this, String * key, String * value));
IL2CPP_REGISTER_METHOD(0x020AA8D0, void, Clear, (TrackingValidationObjectDictionary * __this));
IL2CPP_REGISTER_METHOD(0x020AA980, void, Remove, (TrackingValidationObjectDictionary * __this, String * key));
}
