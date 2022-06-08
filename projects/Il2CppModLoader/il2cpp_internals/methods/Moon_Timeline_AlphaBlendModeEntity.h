using namespace app;

namespace app::methods::Moon::Timeline::AlphaBlendModeEntity {
IL2CPP_REGISTER_METHOD(0x010C7360, IAlphaBlendModeController *, get_EffectiveTarget, (AlphaBlendModeEntity * __this));
IL2CPP_REGISTER_METHOD(0x00738690, float, get_CurrentTime, (AlphaBlendModeEntity * __this));
IL2CPP_REGISTER_METHOD(0x010C74D0, void, OnStartPlayback, (AlphaBlendModeEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (AlphaBlendModeEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (AlphaBlendModeEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (AlphaBlendModeEntity * __this));
IL2CPP_REGISTER_METHOD(0x010C74E0, void, OnUpdateEntity, (AlphaBlendModeEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010C7500, void, HandleActivations, (AlphaBlendModeEntity * __this));
IL2CPP_REGISTER_METHOD(0x010C76D0, bool, ShowGenericTarget, (AlphaBlendModeEntity * __this));
IL2CPP_REGISTER_METHOD(0x010C76E0, void, __ctor, (AlphaBlendModeEntity * __this));
}
