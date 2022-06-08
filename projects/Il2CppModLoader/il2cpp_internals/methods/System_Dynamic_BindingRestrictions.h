using namespace app;

namespace app::methods::System::Dynamic::BindingRestrictions {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BindingRestrictions * __this));
IL2CPP_REGISTER_METHOD(0x01F88370, BindingRestrictions *, Merge, (BindingRestrictions * __this, BindingRestrictions * restrictions));
IL2CPP_REGISTER_METHOD(0x01F885C0, BindingRestrictions *, GetTypeRestriction, (Expression * expression, Type * type));
IL2CPP_REGISTER_METHOD(0x01F887B0, BindingRestrictions *, GetTypeRestriction, (DynamicMetaObject * obj));
IL2CPP_REGISTER_METHOD(0x01F888C0, BindingRestrictions *, GetInstanceRestriction, (Expression * expression, Object * instance));
IL2CPP_REGISTER_METHOD(0x00980110, Expression *, ToExpression, (BindingRestrictions * __this));
IL2CPP_REGISTER_METHOD(0x01F88AA0, String *, get_DebugView, (BindingRestrictions * __this));
IL2CPP_REGISTER_METHOD(0x01F88AE0, void, __cctor, (MethodInfo * method));
}
