#include <interception_macros.h>

namespace app::methods::Door {
    IL2CPP_REGISTER_METHOD(0x00B9C830, GameObject*, get_Target, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9C8A0, Vector3, get_ClosedPosition, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9C8F0, Vector3, get_OpenPosition, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9C940, void, OnEnable, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9C9E0, void, OnDisable, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9CA80, void, PerformStateTransition, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9CC40, void, Apply, (app::Door * this_ptr, app::UberStateApplyContext__Enum context));
    IL2CPP_REGISTER_METHOD(0x00B9CDF0, IUberState__Array*, get_AffectingUberStates, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9CF20, List_1_UnityEngine_GameObject_*, get_AllTargets, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9D0F0, IDesiredUberState*, GetRequirementsForTimeline, (app::Door * this_ptr, app::MoonTimeline* timeline));
    IL2CPP_REGISTER_METHOD(0x00B9D190, void, StopTransitions, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B9D1B0, void, __ctor, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_1, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_2, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_3, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_4, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_5, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_6, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_7, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_8, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_9, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_10, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_11, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_12, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_13, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_14, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_15, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_16, (app::Door * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, IMoonTypeResolver*, GetResolverForType_17, (app::Door * this_ptr));
} // namespace app::methods::Door
