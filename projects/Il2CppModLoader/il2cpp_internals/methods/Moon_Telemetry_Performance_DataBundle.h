#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::DataBundle {
IL2CPP_REGISTER_METHOD(0x00E338F0, void, __ctor, (DataBundle * __this, String * path));
IL2CPP_REGISTER_METHOD(0x00E33A80, void, AddEntry, (DataBundle * __this, DataBundleEntry * entry));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Path, (DataBundle * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Path, (DataBundle * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA280, IReadOnlyDictionary_2_System_String_Moon_Telemetry_Performance_DataBundleEntry_ *, get_Entries, (DataBundle * __this));
}
