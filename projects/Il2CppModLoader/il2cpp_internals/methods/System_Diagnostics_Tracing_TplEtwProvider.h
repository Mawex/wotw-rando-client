using namespace app;

namespace app::methods::System::Diagnostics::Tracing::TplEtwProvider {
IL2CPP_REGISTER_METHOD(0x01A09360, bool, get_Debug, (TplEtwProvider * __this));
IL2CPP_REGISTER_METHOD(0x01A09390, void, DebugFacilityMessage, (TplEtwProvider * __this, String * Facility, String * Message));
IL2CPP_REGISTER_METHOD(0x01A093C0, void, DebugFacilityMessage1, (TplEtwProvider * __this, String * Facility, String * Message, String * Arg));
IL2CPP_REGISTER_METHOD(0x01A093F0, void, SetActivityId, (TplEtwProvider * __this, Guid Id));
IL2CPP_REGISTER_METHOD(0x01A09520, void, __ctor, (TplEtwProvider * __this));
IL2CPP_REGISTER_METHOD(0x01A095C0, void, __cctor, (MethodInfo * method));
}
