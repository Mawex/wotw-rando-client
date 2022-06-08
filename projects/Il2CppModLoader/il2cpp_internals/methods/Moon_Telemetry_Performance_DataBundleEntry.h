#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::DataBundleEntry {
IL2CPP_REGISTER_METHOD(0x00E33B50, void, __ctor, (DataBundleEntry * __this, String * path));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Path, (DataBundleEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Path, (DataBundleEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (DataBundleEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Name, (DataBundleEntry * __this, String * value));
}
