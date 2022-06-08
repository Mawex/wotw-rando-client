using namespace app;

namespace app::methods::Context {
IL2CPP_REGISTER_METHOD(0x011E77D0, void, SendContextToGameObject, (GameObject * target, IContext * context));
IL2CPP_REGISTER_METHOD(0x011E79B0, void, SendContextToGameObjectAndChildren, (GameObject * target, IContext * context));
}
