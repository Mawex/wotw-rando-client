#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x0198C0C0, ChangeStateInteractionNodeDecorator_StateConditionSetupData *, get_DesiredState, (ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x0198C170, void, CacheSetupStates, (ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x0198C240, void, Perform, (ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * __this, ChangeStateInteractionNodeDecorator_StateConditionSetupData * state));
IL2CPP_REGISTER_METHOD(0x0198C340, void, __ctor, (ChangeStateInteractionNodeDecorator_StateConditionSetupHolder * __this));
}
