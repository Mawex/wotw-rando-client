using namespace app;

namespace app::methods::Unity::Jobs::IJobParallelForExtensions {
IL2CPP_REGISTER_METHOD(0x02FF7470, JobHandle, Schedule, (MoonTrailSystem_SimulateJob jobData, int32_t arrayLength, int32_t innerloopBatchCount, JobHandle dependsOn));
IL2CPP_REGISTER_METHODINFO(0x0476FAC0, IJobParallelForExtensions_Schedule__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF7470, JobHandle, Schedule, (VerletPhysicsAnimationPostprocess_Job jobData, int32_t arrayLength, int32_t innerloopBatchCount, JobHandle dependsOn));
IL2CPP_REGISTER_METHODINFO(0x04751728, IJobParallelForExtensions_Schedule_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF7570, JobHandle, Schedule, (SoundZoneProcessor_Job jobData, int32_t arrayLength, int32_t innerloopBatchCount, JobHandle dependsOn));
IL2CPP_REGISTER_METHODINFO(0x0476BD30, IJobParallelForExtensions_Schedule_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF7370, JobHandle, Schedule, (BlendGradientColorsJob jobData, int32_t arrayLength, int32_t innerloopBatchCount, JobHandle dependsOn));
IL2CPP_REGISTER_METHODINFO(0x047362B0, IJobParallelForExtensions_Schedule_3__MethodInfo);
}
