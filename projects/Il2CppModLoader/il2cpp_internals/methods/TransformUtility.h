using namespace app;

namespace app::methods::TransformUtility {
IL2CPP_REGISTER_METHOD(0x00B09D70, void, SetParentMaintainingLocalTransform, (Transform * transform, Transform * parent));
IL2CPP_REGISTER_METHOD(0x00B09FC0, void, SetParentMaintainingLocalPosition, (Transform * transform, Transform * parent));
IL2CPP_REGISTER_METHOD(0x00B0A0B0, void, SetParentMaintainingLocalPositionAndRotation, (Transform * transform, Transform * parent));
IL2CPP_REGISTER_METHOD(0x00B0A250, void, SetParentMaintainingRotationAndScale, (Transform * transform, Transform * parent));
}
