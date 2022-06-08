using namespace app;

namespace app::methods::Equipment {
IL2CPP_REGISTER_METHOD(0x00CAAF90, Equipment_Category__Enum, EquipmentTypeToCategory, (EquipmentType__Enum type));
IL2CPP_REGISTER_METHOD(0x00CAAFD0, AbilityType__Enum, EquipmentTypeToAbilityType, (EquipmentType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x047951D0, Equipment_EquipmentTypeToAbilityType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CAB2F0, EquipmentType__Enum, AbilityTypeToEquipmentType, (AbilityType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0476A078, Equipment_AbilityTypeToEquipmentType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CAB7C0, bool, CanBeSharded, (Equipment_Category__Enum category));
IL2CPP_REGISTER_METHOD(0x00CAB7D0, bool, CanBeSharded, (EquipmentType__Enum type));
}
