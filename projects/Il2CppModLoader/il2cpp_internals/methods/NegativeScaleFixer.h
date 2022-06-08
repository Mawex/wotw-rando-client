#include <interception_macros.h>

namespace app::methods::NegativeScaleFixer {
IL2CPP_REGISTER_METHOD(0x0088AD00, Transform *, GetCauseOfNegativeGlobalScale, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x0088AE50, bool, HasNegativeScale, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x0088AFA0, void, Fix, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x0088C190, void, FlipMesh, (Mesh * sharedMesh, Vector3 meshFlipMultiplier));
IL2CPP_REGISTER_METHOD(0x0088C3B0, void, AddChildren, (Transform * transform, List_1_NegativeScaleFixer_TransformAndWorldMatrix_ * transformsToUpdate));
}
