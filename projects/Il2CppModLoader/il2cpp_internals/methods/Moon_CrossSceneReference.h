#include <interception_macros.h>

namespace app::methods::Moon::CrossSceneReference {
IL2CPP_REGISTER_METHOD(0x031BA200, void, AddCrossSceneObject, (CrossSceneReferenceId referenceId, Object_1 * crossSceneObject));
IL2CPP_REGISTER_METHOD(0x031BA300, void, RemoveCrossSceneObject, (CrossSceneReferenceId referenceId));
IL2CPP_REGISTER_METHOD(0x031BA3D0, bool, TryGetCrossSceneReference, (CrossSceneReferenceId referenceId, Object_1 * * crossSceneObject));
IL2CPP_REGISTER_METHOD(0x031BA520, bool, IsObjectWithGuidLoaded, (CrossSceneReferenceId referenceId));
IL2CPP_REGISTER_METHOD(0x031BA610, void, __cctor, ());
}
