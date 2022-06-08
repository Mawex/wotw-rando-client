using namespace app;

namespace app::methods::System::Xml::Schema::ActiveAxis {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_CurrentDepth, (ActiveAxis * __this));
IL2CPP_REGISTER_METHOD(0x0199FCF0, void, Reactivate, (ActiveAxis * __this));
IL2CPP_REGISTER_METHOD(0x0199FD00, void, __ctor, (ActiveAxis * __this, Asttree * axisTree));
IL2CPP_REGISTER_METHOD(0x019A00B0, bool, MoveToStartElement, (ActiveAxis * __this, String * localname, String * URN));
IL2CPP_REGISTER_METHOD(0x019A0290, bool, EndElement, (ActiveAxis * __this, String * localname, String * URN));
IL2CPP_REGISTER_METHOD(0x019A0460, bool, MoveToAttribute, (ActiveAxis * __this, String * localname, String * URN));
}
