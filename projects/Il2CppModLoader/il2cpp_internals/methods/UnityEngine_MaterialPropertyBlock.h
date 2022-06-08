#include <interception_macros.h>

namespace app::methods::UnityEngine::MaterialPropertyBlock {
IL2CPP_REGISTER_METHOD(0x02533D50, void, __ctor, (MaterialPropertyBlock * __this));
IL2CPP_REGISTER_METHOD(0x02533DB0, void, SetFloatImpl, (MaterialPropertyBlock * __this, int32_t name, float value));
IL2CPP_REGISTER_METHOD(0x02533E20, void, SetVectorImpl, (MaterialPropertyBlock * __this, int32_t name, Vector4 value));
IL2CPP_REGISTER_METHOD(0x02533E90, void, SetTextureImpl, (MaterialPropertyBlock * __this, int32_t name, Texture * value));
IL2CPP_REGISTER_METHOD(0x02533F00, void, SetBufferImpl, (MaterialPropertyBlock * __this, int32_t name, ComputeBuffer * value));
IL2CPP_REGISTER_METHOD(0x02533F70, void *, CreateImpl, ());
IL2CPP_REGISTER_METHOD(0x02533FC0, void, DestroyImpl, (void * mpb));
IL2CPP_REGISTER_METHOD(0x02534010, void, Finalize, (MaterialPropertyBlock * __this));
IL2CPP_REGISTER_METHOD(0x02534160, void, Dispose, (MaterialPropertyBlock * __this));
IL2CPP_REGISTER_METHOD(0x02533DB0, void, SetFloat, (MaterialPropertyBlock * __this, int32_t nameID, float value));
IL2CPP_REGISTER_METHOD(0x02534260, void, SetVector, (MaterialPropertyBlock * __this, int32_t nameID, Vector4 value));
IL2CPP_REGISTER_METHOD(0x02533F00, void, SetBuffer, (MaterialPropertyBlock * __this, int32_t nameID, ComputeBuffer * value));
IL2CPP_REGISTER_METHOD(0x02533E90, void, SetTexture, (MaterialPropertyBlock * __this, int32_t nameID, Texture * value));
IL2CPP_REGISTER_METHOD(0x025342D0, void, SetVectorImpl_Injected, (MaterialPropertyBlock * __this, int32_t name, Vector4 * value));
}
