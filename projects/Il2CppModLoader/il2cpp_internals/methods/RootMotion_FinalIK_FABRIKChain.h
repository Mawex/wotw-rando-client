#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::FABRIKChain {
IL2CPP_REGISTER_METHOD(0x02053C10, bool, IsValid, (FABRIKChain * __this, String * * message));
IL2CPP_REGISTER_METHOD(0x02053D20, void, Initiate, (FABRIKChain * __this));
IL2CPP_REGISTER_METHOD(0x02053D80, void, Stage1, (FABRIKChain * __this, FABRIKChain__Array * chain));
IL2CPP_REGISTER_METHOD(0x02053F10, void, Stage2, (FABRIKChain * __this, Vector3 rootPosition, FABRIKChain__Array * chain));
IL2CPP_REGISTER_METHOD(0x02054230, Vector3, GetCentroid, (FABRIKChain * __this, FABRIKChain__Array * chain));
IL2CPP_REGISTER_METHOD(0x020546D0, void, __ctor, (FABRIKChain * __this));
}
