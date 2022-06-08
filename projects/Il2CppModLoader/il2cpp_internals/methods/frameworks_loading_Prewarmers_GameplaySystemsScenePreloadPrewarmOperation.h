using namespace app;

namespace app::methods::frameworks::loading::Prewarmers::GameplaySystemsScenePreloadPrewarmOperation {
IL2CPP_REGISTER_METHOD(0x00F5F9B0, void, __ctor, (GameplaySystemsScenePreloadPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5FA80, bool, Begin, (GameplaySystemsScenePreloadPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5FB50, AsyncOperation_1 *, LoadScene, (GameplaySystemsScenePreloadPrewarmOperation * __this, String * sceneName));
IL2CPP_REGISTER_METHOD(0x00F5FC20, bool, Update, (GameplaySystemsScenePreloadPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, FinishImmediately, (GameplaySystemsScenePreloadPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (GameplaySystemsScenePreloadPrewarmOperation * __this, int32_t xbegin, int32_t ybegin));
}
