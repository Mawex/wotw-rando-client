using namespace app;

namespace app::methods::Unity::Jobs::LowLevel::Unsafe::JobsUtility {
IL2CPP_REGISTER_METHOD(0x024194D0, void, GetJobRange, (JobRanges * ranges, int32_t jobIndex, int32_t * beginIndex, int32_t * endIndex));
IL2CPP_REGISTER_METHOD(0x024194F0, bool, GetWorkStealingRange, (JobRanges * ranges, int32_t jobIndex, int32_t * beginIndex, int32_t * endIndex));
IL2CPP_REGISTER_METHOD(0x02419570, JobHandle, Schedule, (JobsUtility_JobScheduleParameters * parameters));
IL2CPP_REGISTER_METHOD(0x024195F0, JobHandle, ScheduleParallelFor, (JobsUtility_JobScheduleParameters * parameters, int32_t arrayLength, int32_t innerloopBatchCount));
IL2CPP_REGISTER_METHOD(0x02419690, JobHandle, ScheduleParallelForTransform, (JobsUtility_JobScheduleParameters * parameters, void * transfromAccesssArray));
IL2CPP_REGISTER_METHOD(0x02419720, void *, CreateJobReflectionData, (Type * wrapperJobType, Type * userJobType, JobType__Enum jobType, Object * managedJobFunction0, Object * managedJobFunction1, Object * managedJobFunction2));
IL2CPP_REGISTER_METHOD(0x024197B0, void *, CreateJobReflectionData, (Type * type, JobType__Enum jobType, Object * managedJobFunction0, Object * managedJobFunction1, Object * managedJobFunction2));
IL2CPP_REGISTER_METHOD(0x02419840, void, Schedule_Injected, (JobsUtility_JobScheduleParameters * parameters, JobHandle * ret));
IL2CPP_REGISTER_METHOD(0x024198A0, void, ScheduleParallelFor_Injected, (JobsUtility_JobScheduleParameters * parameters, int32_t arrayLength, int32_t innerloopBatchCount, JobHandle * ret));
IL2CPP_REGISTER_METHOD(0x02419920, void, ScheduleParallelForTransform_Injected, (JobsUtility_JobScheduleParameters * parameters, void * transfromAccesssArray, JobHandle * ret));
}
