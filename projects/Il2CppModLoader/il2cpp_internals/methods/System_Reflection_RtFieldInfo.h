using namespace app;

namespace app::methods::System::Reflection::RtFieldInfo {
IL2CPP_REGISTER_METHOD(0x02690A30, Object *, UnsafeGetValue, (RtFieldInfo * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x026963E0, void, CheckConsistency, (RtFieldInfo * __this, Object * target));
IL2CPP_REGISTER_METHODINFO(0x04736458, RtFieldInfo_CheckConsistency__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026965D0, void, UnsafeSetValue, (RtFieldInfo * __this, Object * obj, Object * value, BindingFlags__Enum invokeAttr, Binder * binder, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x02696620, void, SetValueDirect, (RtFieldInfo * __this, TypedReference obj, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04754488, RtFieldInfo_SetValueDirect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RtFieldInfo * __this));
}
