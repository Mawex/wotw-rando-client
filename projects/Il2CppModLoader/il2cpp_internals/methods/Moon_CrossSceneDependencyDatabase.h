using namespace app;

namespace app::methods::Moon::CrossSceneDependencyDatabase {
IL2CPP_REGISTER_METHOD(0x00CCF4F0, void, AddObject, (CrossSceneDependency * crossSceneDependency));
IL2CPP_REGISTER_METHOD(0x00CCF640, void, RemoveObject, (CrossSceneDependency * crossSceneDependency));
IL2CPP_REGISTER_METHOD(0x00CCF710, CrossSceneDependency *, GetByID, (int32_t objectID));
IL2CPP_REGISTER_METHOD(0x00CCF830, void, AddInjector, (CrossSceneDependencyInjector * injector));
IL2CPP_REGISTER_METHOD(0x00CCFB90, void, RemoveInjector, (CrossSceneDependencyInjector * injector));
IL2CPP_REGISTER_METHOD(0x00CCFD00, List_1_Moon_CrossSceneDependencyInjector_ *, GetInjectors, (int32_t objectID));
IL2CPP_REGISTER_METHOD(0x00CCFE20, void, OnEnable, (CrossSceneDependencyDatabase * __this));
IL2CPP_REGISTER_METHOD(0x00CCFF40, void, __ctor, (CrossSceneDependencyDatabase * __this));
IL2CPP_REGISTER_METHOD(0x00CD0190, void, __cctor, (MethodInfo * method));
}
