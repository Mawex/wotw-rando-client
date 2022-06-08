using namespace app;

namespace app::methods::TurbulenceManagerBinder {
IL2CPP_REGISTER_METHOD(0x00B17270, Texture2D *, CombineTexture, (TurbulenceManagerBinder * __this, Texture2D * tex1, Texture2D * tex2, float tweenTime));
IL2CPP_REGISTER_METHOD(0x00B177C0, TurbulenceManagerBinder_CurrentShaderSettings, TweenSettings, (TurbulenceManagerBinder * __this, TurbulenceSettings * from, TurbulenceSettings * to, float tweenTime, float time, float strMult, float speedMult));
IL2CPP_REGISTER_METHOD(0x00B17BD0, TurbulenceManagerBinder_CurrentShaderSettings, Bind, (TurbulenceManagerBinder * __this, TurbulenceSettings * from, TurbulenceSettings * to, float tweenTime, float time, float strMult, float speedMult));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TurbulenceManagerBinder * __this));
}
