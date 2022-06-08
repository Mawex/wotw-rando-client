using namespace app;

namespace app::methods::Unity::Jobs::JobHandle {
IL2CPP_REGISTER_METHOD(0x001EAEC0, void, Complete, (JobHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EAED0, bool, get_IsCompleted, (JobHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x024193E0, void, ScheduleBatchedJobs, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02419430, void, ScheduleBatchedJobsAndComplete, (JobHandle * job));
IL2CPP_REGISTER_METHOD(0x02419480, bool, ScheduleBatchedJobsAndIsCompleted, (JobHandle * job));
}
