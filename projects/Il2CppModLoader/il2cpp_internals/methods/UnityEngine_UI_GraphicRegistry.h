using namespace app;

namespace app::methods::UnityEngine::UI::GraphicRegistry {
IL2CPP_REGISTER_METHOD(0x024B4140, void, __ctor, (GraphicRegistry * __this));
IL2CPP_REGISTER_METHOD(0x024B4590, GraphicRegistry *, get_instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x024B4780, void, RegisterGraphicForCanvas, (Canvas * c, Graphic * graphic));
IL2CPP_REGISTER_METHOD(0x024B4AD0, void, UnregisterGraphicForCanvas, (Canvas * c, Graphic * graphic));
IL2CPP_REGISTER_METHOD(0x024B4CE0, IList_1_UnityEngine_UI_Graphic_ *, GetGraphicsForCanvas, (Canvas * canvas));
IL2CPP_REGISTER_METHOD(0x024B4E40, void, __cctor, (MethodInfo * method));
}
