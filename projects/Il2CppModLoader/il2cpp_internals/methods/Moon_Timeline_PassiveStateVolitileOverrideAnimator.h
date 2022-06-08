#include <interception_macros.h>

namespace app::methods::Moon::Timeline::PassiveStateVolitileOverrideAnimator {
IL2CPP_REGISTER_METHOD(0x01E78F40, IPassiveStateDescriptor *, get_ResolvedDescriptor, (PassiveStateVolitileOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E79050, void, OnValidate, (PassiveStateVolitileOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartPlayback, (PassiveStateVolitileOverrideAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (PassiveStateVolitileOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E79160, void, OnUpdateEntity, (PassiveStateVolitileOverrideAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E791B0, void, SynchronizePad, (PassiveStateVolitileOverrideAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (PassiveStateVolitileOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E79290, void, __ctor, (PassiveStateVolitileOverrideAnimator * __this));
}
