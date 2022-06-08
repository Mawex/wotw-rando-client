using namespace app;

namespace app::methods::Moon::Telemetry::Performance::ReportMetadata {
IL2CPP_REGISTER_METHOD(0x00E39DE0, void, __ctor, (ReportMetadata * __this));
IL2CPP_REGISTER_METHOD(0x00E39FB0, void, __ctor, (ReportMetadata * __this, ReportMetadata * meta));
IL2CPP_REGISTER_METHOD(0x00E3A1E0, void, AddDataBundle, (ReportMetadata * __this, String * bundlePath));
IL2CPP_REGISTER_METHOD(0x00E3A330, void, AddDataEntry, (ReportMetadata * __this, DataBundleEntry * entry));
IL2CPP_REGISTER_METHOD(0x00E3A410, void, Copy, (ReportMetadata * __this, ReportMetadata * meta));
IL2CPP_REGISTER_METHOD(0x00E3A4C0, DateTime, get_RevisionDate, (ReportMetadata * __this));
IL2CPP_REGISTER_METHOD(0x00E3A700, bool, Equals, (ReportMetadata * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00E3A8C0, bool, Equals, (ReportMetadata * __this, ReportMetadata * other));
IL2CPP_REGISTER_METHOD(0x00E3A980, int32_t, GetHashCode, (ReportMetadata * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, DataBundle *, get_DataBundle, (ReportMetadata * __this));
}
