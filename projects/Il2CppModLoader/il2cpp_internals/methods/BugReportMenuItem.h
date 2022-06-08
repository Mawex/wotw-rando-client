#include <interception_macros.h>

namespace app::methods::BugReportMenuItem {
IL2CPP_REGISTER_METHOD(0x00807A70, String *, get_Name, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00807AF0, String *, get_Path, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Path, (BugReportMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Text, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Text, (BugReportMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00807B70, String *, get_HelpText, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HelpText, (BugReportMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00807BF0, bool, Draw, (BugReportMenuItem * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00807DD0, void, OnSelectedFixedUpdate, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Func_1_String_ *, get_DynamicText, (BugReportMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (BugReportMenuItem * __this));
}
