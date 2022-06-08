#include <interception_macros.h>

namespace app::methods::WeightedGroup_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x0243AC00, int32_t, get_Count, (WeightedGroup_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (WeightedGroup_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ACF490, void, __ctor, (WeightedGroup_1_System_Object_ * __this, List_1_System_Object_ * elements, List_1_System_Single_ * weights));
IL2CPP_REGISTER_METHOD(0x02ACF4C0, void, Initialize, (WeightedGroup_1_System_Object_ * __this, List_1_System_Object_ * elements, List_1_System_Single_ * weights));
IL2CPP_REGISTER_METHOD(0x02ACF7F0, void, SetElements, (WeightedGroup_1_System_Object_ * __this, List_1_System_Object_ * elements, List_1_System_Single_ * weights));
IL2CPP_REGISTER_METHOD(0x02ACF910, void, SetWeights, (WeightedGroup_1_System_Object_ * __this, Dictionary_2_System_Object_System_Single_ * newWeights));
IL2CPP_REGISTER_METHOD(0x02ACFA70, void, RemoveElement, (WeightedGroup_1_System_Object_ * __this, Object * element));
IL2CPP_REGISTER_METHOD(0x02ACFC60, void, SetAllWeights, (WeightedGroup_1_System_Object_ * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02ACFDA0, void, SetWeight, (WeightedGroup_1_System_Object_ * __this, Object * element, float weight));
IL2CPP_REGISTER_METHOD(0x02ACFF10, float, GetWeight, (WeightedGroup_1_System_Object_ * __this, Object * element));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, GetTotalWeight, (WeightedGroup_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD0070, void, RecalculateWeighting, (WeightedGroup_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02AD0150, Object *, GetRandomElement, (WeightedGroup_1_System_Object_ * __this));
}
