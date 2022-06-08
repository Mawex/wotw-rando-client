#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::XR::MeshGenerationResult {
IL2CPP_REGISTER_METHOD(0x001D9980, TrackableId, get_MeshId, (MeshGenerationResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FBBA0, Mesh *, get_Mesh, (MeshGenerationResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FBBB0, MeshCollider *, get_MeshCollider, (MeshGenerationResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00244640, MeshGenerationStatus__Enum, get_Status, (MeshGenerationResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00229300, MeshVertexAttributes__Enum, get_Attributes, (MeshGenerationResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024AC60, bool, Equals, (MeshGenerationResult__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0024AD50, bool, Equals, (MeshGenerationResult__Boxed * __this, MeshGenerationResult other));
IL2CPP_REGISTER_METHOD(0x0024AD90, int32_t, GetHashCode, (MeshGenerationResult__Boxed * __this));
}
