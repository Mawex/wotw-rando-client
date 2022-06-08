using namespace app;

namespace app::methods::System::ComponentModel::DesignerAttribute {
IL2CPP_REGISTER_METHOD(0x01FE6280, void, __ctor, (DesignerAttribute * __this, String * designerTypeName));
IL2CPP_REGISTER_METHOD(0x01FE63A0, void, __ctor, (DesignerAttribute * __this, Type * designerType));
IL2CPP_REGISTER_METHOD(0x01FE64A0, void, __ctor, (DesignerAttribute * __this, String * designerTypeName, String * designerBaseTypeName));
IL2CPP_REGISTER_METHOD(0x01FE6570, void, __ctor, (DesignerAttribute * __this, String * designerTypeName, Type * designerBaseType));
IL2CPP_REGISTER_METHOD(0x01FE6660, void, __ctor, (DesignerAttribute * __this, Type * designerType, Type * designerBaseType));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_DesignerBaseTypeName, (DesignerAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_DesignerTypeName, (DesignerAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FE4CC0, Object *, get_TypeId, (DesignerAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FE66D0, bool, Equals, (DesignerAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01FE67F0, int32_t, GetHashCode, (DesignerAttribute * __this));
}
