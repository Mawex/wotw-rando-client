using namespace app;

namespace app::methods::RootMotion::FinalIK::Grounder {
IL2CPP_REGISTER_METHOD(0x020654E0, Vector3, GetSpineOffsetTarget, (Grounder * __this));
IL2CPP_REGISTER_METHOD(0x02050110, void, LogWarning, (Grounder * __this, String * message));
IL2CPP_REGISTER_METHOD(0x020656C0, Vector3, GetLegSpineBendVector, (Grounder * __this, Grounding_Leg * leg));
IL2CPP_REGISTER_METHOD(0x020659C0, Vector3, GetLegSpineTangent, (Grounder * __this, Grounding_Leg * leg));
IL2CPP_REGISTER_METHOD(0x02065D00, void, __ctor, (Grounder * __this));
}
