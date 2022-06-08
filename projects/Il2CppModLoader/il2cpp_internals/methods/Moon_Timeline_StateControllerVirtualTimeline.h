#include <interception_macros.h>

namespace app::methods::Moon::Timeline::StateControllerVirtualTimeline {
IL2CPP_REGISTER_METHOD(0x002FBBE0, NewSetupStateController *, get_StateController, (StateControllerVirtualTimeline * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_StateController, (StateControllerVirtualTimeline * __this, NewSetupStateController * value));
IL2CPP_REGISTER_METHOD(0x01E82610, void, __ctor, (StateControllerVirtualTimeline * __this, NewSetupStateController * stateController));
IL2CPP_REGISTER_METHOD(0x01E82660, void, Reset, (StateControllerVirtualTimeline * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E82720, EntityOperationPermit__Enum, OnBeforeAddChild, (StateControllerVirtualTimeline * __this, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E82830, EntityId, CustomAddChild, (StateControllerVirtualTimeline * __this, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E82A70, void, OnStateAdded, (StateControllerVirtualTimeline * __this));
IL2CPP_REGISTER_METHOD(0x01E82B10, void, OnModifierAdded, (StateControllerVirtualTimeline * __this, IUberStateModifierDataVirtualAnimator * entity));
IL2CPP_REGISTER_METHOD(0x01E82BE0, EntityOperationPermit__Enum, OnBeforeRemoveChild, (StateControllerVirtualTimeline * __this, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E82D10, void, CustomRemoveChild, (StateControllerVirtualTimeline * __this, EntityId id, ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E82FF0, void, OnStateRemoved, (StateControllerVirtualTimeline * __this, SetupState * state));
IL2CPP_REGISTER_METHOD(0x01E83020, void, OnModifierRemoved, (StateControllerVirtualTimeline * __this, SetupStateModifier * modifier));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RebuildHierarchy, (StateControllerVirtualTimeline * __this));
}
