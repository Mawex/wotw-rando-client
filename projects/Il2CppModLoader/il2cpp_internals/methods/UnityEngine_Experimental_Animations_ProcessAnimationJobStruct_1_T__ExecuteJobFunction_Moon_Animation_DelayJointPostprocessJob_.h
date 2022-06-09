#include <interception_macros.h>

namespace app::methods::UnityEngine_Experimental_Animations::ProcessAnimationJobStruct_1_T__ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02264EB0, void, Invoke, (app::ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_ * this_ptr, app::DelayJointPostprocessJob * data, app::void * animation_stream_ptr, app::void * unused_ptr, app::JobRanges * ranges, int32_t job_index));
IL2CPP_REGISTER_METHOD(0x02ACAD70, IAsyncResult *, BeginInvoke, (app::ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_ * this_ptr, app::DelayJointPostprocessJob * data, app::void * animation_stream_ptr, app::void * unused_ptr, app::JobRanges * ranges, int32_t job_index, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::ProcessAnimationJobStruct_1_T_ExecuteJobFunction_Moon_Animation_DelayJointPostprocessJob_ * this_ptr, app::DelayJointPostprocessJob * data, app::JobRanges * ranges, app::IAsyncResult * result));
}
