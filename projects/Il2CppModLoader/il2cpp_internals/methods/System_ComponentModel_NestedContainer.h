using namespace app;

namespace app::methods::System::ComponentModel::NestedContainer {
IL2CPP_REGISTER_METHOD(0x029900E0, void, __ctor, (NestedContainer * __this, IComponent * owner));
IL2CPP_REGISTER_METHODINFO(0x0475DAA0, NestedContainer__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9D0, IComponent *, get_Owner, (NestedContainer * __this));
IL2CPP_REGISTER_METHOD(0x02990390, String *, get_OwnerName, (NestedContainer * __this));
IL2CPP_REGISTER_METHOD(0x029904B0, ISite *, CreateSite, (NestedContainer * __this, IComponent * component, String * name));
IL2CPP_REGISTER_METHODINFO(0x04773CB8, NestedContainer_CreateSite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02990650, void, Dispose, (NestedContainer * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x029907F0, Object *, GetService, (NestedContainer * __this, Type * service));
IL2CPP_REGISTER_METHOD(0x024AB610, void, OnOwnerDisposed, (NestedContainer * __this, Object * sender, EventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x047531F0, NestedContainer_OnOwnerDisposed__MethodInfo);
}
