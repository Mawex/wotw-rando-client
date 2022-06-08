#include <interception_macros.h>

namespace app::methods::UberTypeTracker_DerivedTypeTracker_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02263A00, Type__Array *, get_AllDerivedTypes, (UberTypeTracker_DerivedTypeTracker_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02264200, Dictionary_2_System_Int32_System_Type_ *, get_IdToTypes, (UberTypeTracker_DerivedTypeTracker_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02263A30, void, BuildTypeArray, (UberTypeTracker_DerivedTypeTracker_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02264230, Type *, GetTypeFromID, (UberTypeTracker_DerivedTypeTracker_1_System_Object_ * __this, int32_t typeId));
IL2CPP_REGISTER_METHOD(0x02264360, void, AddToMap, (UberTypeTracker_DerivedTypeTracker_1_System_Object_ * __this, Dictionary_2_System_Int32_System_Type_ * idToTypeMap));
IL2CPP_REGISTER_METHOD(0x02264610, void, AddMapEntriesFromType, (UberTypeTracker_DerivedTypeTracker_1_System_Object_ * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (UberTypeTracker_DerivedTypeTracker_1_System_Object_ * __this));
}
