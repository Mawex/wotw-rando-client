using namespace app;

namespace app::methods::Moon::UI::UIInteractable {
IL2CPP_REGISTER_METHOD(0x0118B670, void, Awake, (UIInteractable * __this));
IL2CPP_REGISTER_METHOD(0x0118B680, void, Initialize, (UIInteractable * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_Selected, (UIInteractable * __this));
IL2CPP_REGISTER_METHOD(0x0118B890, void, set_Selected, (UIInteractable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (UIInteractable * __this));
IL2CPP_REGISTER_METHOD(0x015F3540, Object *, FindTypeInHierarchy, (UIInteractable * __this));
IL2CPP_REGISTER_METHOD(0x015F3540, Window *, FindTypeInHierarchy, (UIInteractable * __this));
IL2CPP_REGISTER_METHODINFO(0x04705800, UIInteractable_FindTypeInHierarchy_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F3540, ItemSelectionManager *, FindTypeInHierarchy, (UIInteractable * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F360, UIInteractable_FindTypeInHierarchy_2__MethodInfo);
}
