using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::LabelScopeInfo {
IL2CPP_REGISTER_METHOD(0x01CE43D0, void, __ctor, (LabelScopeInfo * __this, LabelScopeInfo * parent, LabelScopeKind__Enum kind));
IL2CPP_REGISTER_METHOD(0x01CE43E0, bool, get_CanJumpInto, (LabelScopeInfo * __this));
IL2CPP_REGISTER_METHOD(0x01CE43F0, bool, ContainsTarget, (LabelScopeInfo * __this, LabelTarget * target));
IL2CPP_REGISTER_METHOD(0x01CE4510, bool, TryGetLabelInfo, (LabelScopeInfo * __this, LabelTarget * target, LabelInfo * * info));
IL2CPP_REGISTER_METHOD(0x01CE45D0, void, AddLabelInfo, (LabelScopeInfo * __this, LabelTarget * target, LabelInfo * info));
}
