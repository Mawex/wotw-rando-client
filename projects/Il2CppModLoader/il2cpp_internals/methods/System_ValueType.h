using namespace app;

namespace app::methods::System::ValueType {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ValueType * __this));
IL2CPP_REGISTER_METHOD(0x0314B030, bool, InternalEquals, (Object * o1, Object * o2, Object__Array * * fields));
IL2CPP_REGISTER_METHOD(0x0314B040, bool, DefaultEquals, (Object * o1, Object * o2));
IL2CPP_REGISTER_METHOD(0x01A13D40, bool, Equals, (ValueType * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0314B1E0, int32_t, InternalGetHashCode, (Object * o, Object__Array * * fields));
IL2CPP_REGISTER_METHOD(0x0314B1F0, int32_t, GetHashCode, (ValueType * __this));
IL2CPP_REGISTER_METHOD(0x0314B280, String *, ToString, (ValueType * __this));
}
