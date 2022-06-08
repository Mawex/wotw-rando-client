#include <interception_macros.h>

namespace app::methods::UnityEngine::AssetBundle {
IL2CPP_REGISTER_METHOD(0x031C3A30, void, __ctor, (AssetBundle * __this));
IL2CPP_REGISTER_METHOD(0x031C3AC0, Object_1 *, get_mainAsset, (AssetBundle * __this));
IL2CPP_REGISTER_METHOD(0x031C3AC0, Object_1 *, returnMainAsset, (AssetBundle * bundle));
IL2CPP_REGISTER_METHOD(0x031C3B10, AssetBundle *, LoadFromMemory_Internal, (Byte__Array * binary, uint32_t crc));
IL2CPP_REGISTER_METHOD(0x031C3B70, AssetBundle *, LoadFromMemory, (Byte__Array * binary));
}
