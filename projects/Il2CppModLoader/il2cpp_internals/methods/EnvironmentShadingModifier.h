using namespace app;

namespace app::methods::EnvironmentShadingModifier {
IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_FadeTime, (EnvironmentShadingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CA9F10, float, get_CurFade, (EnvironmentShadingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CAA030, Rect, get_RendererRect, (EnvironmentShadingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CAA180, void, Update, (EnvironmentShadingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00CAA6F0, void, StartFade, (EnvironmentShadingModifier * __this, EnvironmentLight * from));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (EnvironmentShadingModifier * __this));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (EnvironmentShadingModifier * __this));
}
