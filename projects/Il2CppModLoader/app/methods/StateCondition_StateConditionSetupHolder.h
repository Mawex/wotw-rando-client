#pragma once
#include <interception_macros.h>

namespace app::methods::StateCondition_StateConditionSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDesiredValues, (app::StateCondition_StateConditionSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B5160, app::StateCondition_StateConditionSetupData *, get_Pass, (app::StateCondition_StateConditionSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B5210, void, CacheSetupStates, (app::StateCondition_StateConditionSetupHolder * this_ptr, app::List_1_IIndexedItem_ * cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x009B5340, void, ctor, (app::StateCondition_StateConditionSetupHolder * this_ptr))
}
