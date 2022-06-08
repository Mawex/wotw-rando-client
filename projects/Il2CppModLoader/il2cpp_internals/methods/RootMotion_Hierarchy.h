using namespace app;

namespace app::methods::RootMotion::Hierarchy {
IL2CPP_REGISTER_METHOD(0x02A29070, bool, HierarchyIsValid, (Transform__Array * bones));
IL2CPP_REGISTER_METHOD(0x02A29110, Object_1 *, ContainsDuplicate, (Object_1__Array * objects));
IL2CPP_REGISTER_METHOD(0x02A29280, bool, IsAncestor, (Transform * transform, Transform * ancestor));
IL2CPP_REGISTER_METHOD(0x02A29470, bool, ContainsChild, (Transform * transform, Transform * child));
IL2CPP_REGISTER_METHOD(0x02A295D0, void, AddAncestors, (Transform * transform, Transform * blocker, Transform__Array * * array));
IL2CPP_REGISTER_METHOD(0x02A29AC0, Transform *, GetAncestor, (Transform * transform, int32_t minChildCount));
IL2CPP_REGISTER_METHOD(0x02A29CE0, Transform *, GetFirstCommonAncestor, (Transform * t1, Transform * t2));
IL2CPP_REGISTER_METHOD(0x02A29F00, Transform *, GetFirstCommonAncestor, (Transform__Array * transforms));
IL2CPP_REGISTER_METHOD(0x02A2A0D0, Transform *, GetFirstCommonAncestorRecursive, (Transform * transform, Transform__Array * transforms));
IL2CPP_REGISTER_METHOD(0x02A2A2C0, bool, IsCommonAncestor, (Transform * transform, Transform__Array * transforms));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Hierarchy * __this));
}
