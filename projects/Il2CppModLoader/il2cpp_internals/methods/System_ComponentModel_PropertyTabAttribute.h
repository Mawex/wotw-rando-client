using namespace app;

namespace app::methods::System::ComponentModel::PropertyTabAttribute {
IL2CPP_REGISTER_METHOD(0x029975B0, void, __ctor, (PropertyTabAttribute * __this));
IL2CPP_REGISTER_METHOD(0x02997650, void, __ctor, (PropertyTabAttribute * __this, Type * tabClass));
IL2CPP_REGISTER_METHOD(0x02997780, void, __ctor, (PropertyTabAttribute * __this, String * tabClassName));
IL2CPP_REGISTER_METHOD(0x029978B0, void, __ctor, (PropertyTabAttribute * __this, Type * tabClass, PropertyTabScope__Enum tabScope));
IL2CPP_REGISTER_METHODINFO(0x0476A9F0, PropertyTabAttribute__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02997A40, void, __ctor, (PropertyTabAttribute * __this, String * tabClassName, PropertyTabScope__Enum tabScope));
IL2CPP_REGISTER_METHODINFO(0x04710630, PropertyTabAttribute__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02997BD0, Type__Array *, get_TabClasses, (PropertyTabAttribute * __this));
IL2CPP_REGISTER_METHODINFO(0x04700C20, PropertyTabAttribute_get_TabClasses__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02998020, String__Array *, get_TabClassNames, (PropertyTabAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, PropertyTabScope__Enum__Array *, get_TabScopes, (PropertyTabAttribute * __this));
IL2CPP_REGISTER_METHOD(0x02998170, bool, Equals, (PropertyTabAttribute * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x029982A0, bool, Equals, (PropertyTabAttribute * __this, PropertyTabAttribute * other));
IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (PropertyTabAttribute * __this));
IL2CPP_REGISTER_METHOD(0x02998500, void, InitializeArrays, (PropertyTabAttribute * __this, String__Array * tabClassNames, PropertyTabScope__Enum__Array * tabScopes));
IL2CPP_REGISTER_METHOD(0x02998520, void, InitializeArrays, (PropertyTabAttribute * __this, Type__Array * tabClasses, PropertyTabScope__Enum__Array * tabScopes));
IL2CPP_REGISTER_METHOD(0x02998540, void, InitializeArrays, (PropertyTabAttribute * __this, String__Array * tabClassNames, Type__Array * tabClasses, PropertyTabScope__Enum__Array * tabScopes));
IL2CPP_REGISTER_METHODINFO(0x0470AE88, PropertyTabAttribute_InitializeArrays_2__MethodInfo);
}
