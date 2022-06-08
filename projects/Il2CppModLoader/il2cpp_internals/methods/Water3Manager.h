#include <interception_macros.h>

namespace app::methods::Water3Manager {
IL2CPP_REGISTER_METHOD(0x02D76130, void, SetDisplacementHeightMap, (Water3Manager * __this, Texture2D * map, int32_t index));
IL2CPP_REGISTER_METHOD(0x02D76260, Texture2D *, GetDisplacementHeightMap, (Water3Manager * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02D76270, Water3Manager *, Instance, ());
IL2CPP_REGISTER_METHOD(0x00A3C8D0, void, OnEnable, (Water3Manager * __this));
IL2CPP_REGISTER_METHOD(0x02D76450, void, Start, (Water3Manager * __this));
IL2CPP_REGISTER_METHOD(0x02D76590, void, Update, (Water3Manager * __this));
IL2CPP_REGISTER_METHOD(0x02D766F0, Color, GetMaterialColor, (Water3Manager * __this, int32_t name));
IL2CPP_REGISTER_METHOD(0x02D76790, void, SetMaterialColor, (Water3Manager * __this, int32_t name, Color color));
IL2CPP_REGISTER_METHOD(0x02D76810, Vector4, GetMaterialVector, (Water3Manager * __this, int32_t name));
IL2CPP_REGISTER_METHOD(0x02D768B0, void, SetMaterialVector, (Water3Manager * __this, int32_t name, Vector4 vector));
IL2CPP_REGISTER_METHOD(0x02D76960, Texture *, GetMaterialTexture, (Water3Manager * __this, int32_t theName));
IL2CPP_REGISTER_METHOD(0x02D769D0, void, SetMaterialTexture, (Water3Manager * __this, int32_t theName, Texture * parameter));
IL2CPP_REGISTER_METHOD(0x02D76A50, float, GetDisplaceMeshAmountAt, (Water3Manager * __this, Vector3 pos, Transform * t));
IL2CPP_REGISTER_METHOD(0x02D76A90, void, FillWithGradiant, (Water3Manager * __this, Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x02D76C40, bool, DisplaceMesh, (Water3Manager * __this, Mesh * m, Transform * t));
IL2CPP_REGISTER_METHOD(0x02D772A0, float, DisplaceMeshAmountAt, (Water3Manager * __this, Vector3 pos, Transform * t));
IL2CPP_REGISTER_METHOD(0x02D77470, void, OnApplicationQuit, (Water3Manager * __this));
IL2CPP_REGISTER_METHOD(0x02D77510, void, __ctor, (Water3Manager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
