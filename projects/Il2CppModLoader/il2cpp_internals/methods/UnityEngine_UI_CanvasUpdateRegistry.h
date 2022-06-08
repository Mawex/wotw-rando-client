using namespace app;

namespace app::methods::UnityEngine::UI::CanvasUpdateRegistry {
IL2CPP_REGISTER_METHOD(0x01F2CEB0, void, __ctor, (CanvasUpdateRegistry * __this));
IL2CPP_REGISTER_METHOD(0x01F2D260, CanvasUpdateRegistry *, get_instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F2D450, bool, ObjectValidForUpdate, (CanvasUpdateRegistry * __this, ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2D590, void, CleanInvalidItems, (CanvasUpdateRegistry * __this));
IL2CPP_REGISTER_METHOD(0x01F2D830, void, PerformUpdate, (CanvasUpdateRegistry * __this));
IL2CPP_REGISTER_METHODINFO(0x04794DE8, CanvasUpdateRegistry_PerformUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F2E230, int32_t, ParentCount, (Transform * child));
IL2CPP_REGISTER_METHOD(0x01F2E3B0, int32_t, SortLayoutList, (ICanvasElement * x, ICanvasElement * y));
IL2CPP_REGISTER_METHODINFO(0x04771FD8, CanvasUpdateRegistry_SortLayoutList__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F2E4B0, void, RegisterCanvasElementForLayoutRebuild, (ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2E560, bool, TryRegisterCanvasElementForLayoutRebuild, (ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2E610, bool, InternalRegisterCanvasElementForLayoutRebuild, (CanvasUpdateRegistry * __this, ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2E700, void, RegisterCanvasElementForGraphicRebuild, (ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2E7B0, bool, TryRegisterCanvasElementForGraphicRebuild, (ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2E860, bool, InternalRegisterCanvasElementForGraphicRebuild, (CanvasUpdateRegistry * __this, ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2E990, void, UnRegisterCanvasElementForRebuild, (ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2ED00, void, InternalUnRegisterCanvasElementForLayoutRebuild, (CanvasUpdateRegistry * __this, ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2EE90, void, InternalUnRegisterCanvasElementForGraphicRebuild, (CanvasUpdateRegistry * __this, ICanvasElement * element));
IL2CPP_REGISTER_METHOD(0x01F2F020, bool, IsRebuildingLayout, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F2F0C0, bool, IsRebuildingGraphics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F2F160, void, __cctor, (MethodInfo * method));
}
