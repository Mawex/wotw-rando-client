#include <interception_macros.h>

namespace app::methods::Moon::Timeline::UberStateVolitileOverrideAnimator {
IL2CPP_REGISTER_METHOD(0x01E904A0, IGenericUberState *, get_ResolvedUberState, (UberStateVolitileOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E90570, void, OnStartPlayback, (UberStateVolitileOverrideAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (UberStateVolitileOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E90570, void, OnUpdateEntity, (UberStateVolitileOverrideAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E905C0, void, SynchronizePad, (UberStateVolitileOverrideAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record, TimelineEntity * entity, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (UberStateVolitileOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01E906A0, void, __ctor, (UberStateVolitileOverrideAnimator * __this));
}
