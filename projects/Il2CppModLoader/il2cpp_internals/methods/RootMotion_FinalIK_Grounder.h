#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::Grounder {
IL2CPP_REGISTER_METHOD(0x020654E0, Vector3, GetSpineOffsetTarget, (app::Grounder * this_ptr));
IL2CPP_REGISTER_METHOD(0x02050110, void, LogWarning, (app::Grounder * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x020656C0, Vector3, GetLegSpineBendVector, (app::Grounder * this_ptr, app::Grounding_Leg * leg));
IL2CPP_REGISTER_METHOD(0x020659C0, Vector3, GetLegSpineTangent, (app::Grounder * this_ptr, app::Grounding_Leg * leg));
IL2CPP_REGISTER_METHOD(0x02065D00, void, __ctor, (app::Grounder * this_ptr));
}
