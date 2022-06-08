#include <interception_macros.h>

namespace app::methods::TimesliceJobTracker {
IL2CPP_REGISTER_METHOD(0x00AF3960, String *, get_TestName, (TimesliceJobTracker * __this));
IL2CPP_REGISTER_METHOD(0x00AF39E0, void, StartTest, (TimesliceJobTracker * __this));
IL2CPP_REGISTER_METHOD(0x00AF3F40, void, StopTest, (TimesliceJobTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateTest, (TimesliceJobTracker * __this));
IL2CPP_REGISTER_METHOD(0x00AF4260, String *, CollectData, (TimesliceJobTracker * __this));
IL2CPP_REGISTER_METHOD(0x00AF43E0, String *, get_CSVHeader, (TimesliceJobTracker * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, TestTagHelper_TestTypeTag__Enum, get_Tag, (TimesliceJobTracker * __this));
IL2CPP_REGISTER_METHOD(0x00AF4460, void, DumpFile, (TimesliceJobTracker * __this));
IL2CPP_REGISTER_METHOD(0x00AF4850, void, OnSliceExecute, (TimesliceJobTracker * __this, SliceExecutionStats stats));
IL2CPP_REGISTER_METHODINFO(0x04745188, TimesliceJobTracker_OnSliceExecute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AF4A70, void, OnReportOverhadPeak, (TimesliceJobTracker * __this, double duration));
IL2CPP_REGISTER_METHODINFO(0x047235B0, TimesliceJobTracker_OnReportOverhadPeak__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TimesliceJobTracker * __this));
}
