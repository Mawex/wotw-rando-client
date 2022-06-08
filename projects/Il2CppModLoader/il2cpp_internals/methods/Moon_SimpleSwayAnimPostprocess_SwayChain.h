#include <interception_macros.h>

namespace app::methods::Moon::SimpleSwayAnimPostprocess_SwayChain {
IL2CPP_REGISTER_METHOD(0x02121820, void, CopyPerFrameDataToJob, (SimpleSwayAnimPostprocess_SwayChain * __this, SimpleSwayAnimPostprocess_PerFrameReadOnly common));
IL2CPP_REGISTER_METHOD(0x02121950, void, CopyPerFrameDataFromJob, (SimpleSwayAnimPostprocess_SwayChain * __this));
IL2CPP_REGISTER_METHOD(0x02121AF0, void, Allocate, (SimpleSwayAnimPostprocess_SwayChain * __this, JointChains_Chain * chain));
IL2CPP_REGISTER_METHOD(0x02121B30, void, Dispose, (SimpleSwayAnimPostprocess_SwayChain * __this));
IL2CPP_REGISTER_METHOD(0x02121B40, void, Init, (SimpleSwayAnimPostprocess_SwayChain * __this, JointChains_Chain * chain, SimpleSwayAnimPostprocess_Params p));
IL2CPP_REGISTER_METHOD(0x02122420, void, GetJointTransforms, (SimpleSwayAnimPostprocess_SwayChain * __this, JointChains_Chain * chain));
IL2CPP_REGISTER_METHOD(0x02122560, void, ScheduleJob, (SimpleSwayAnimPostprocess_SwayChain * __this, JointChains_Chain * chain, SimpleSwayAnimPostprocess_PerFrameReadOnly common));
IL2CPP_REGISTER_METHOD(0x021228A0, void, CompleteJob, (SimpleSwayAnimPostprocess_SwayChain * __this, JointChains_Chain * chain));
IL2CPP_REGISTER_METHOD(0x02122DA0, void, UpdateParams, (SimpleSwayAnimPostprocess_SwayChain * __this, SimpleSwayAnimPostprocess_Params p));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SimpleSwayAnimPostprocess_SwayChain * __this));
}
