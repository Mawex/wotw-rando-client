using namespace app;

namespace app::methods::System::Xml::Schema::SelectorActiveAxis {
IL2CPP_REGISTER_METHOD(0x01AB90E0, int32_t, get_lastDepth, (SelectorActiveAxis * __this));
IL2CPP_REGISTER_METHOD(0x01AB9220, void, __ctor, (SelectorActiveAxis * __this, Asttree * axisTree, ConstraintStruct * cs));
IL2CPP_REGISTER_METHOD(0x01AB9380, bool, EndElement, (SelectorActiveAxis * __this, String * localname, String * URN));
IL2CPP_REGISTER_METHOD(0x01AB93D0, int32_t, PushKS, (SelectorActiveAxis * __this, int32_t errline, int32_t errcol));
IL2CPP_REGISTER_METHOD(0x01AB9B40, KeySequence *, PopKS, (SelectorActiveAxis * __this));
}
