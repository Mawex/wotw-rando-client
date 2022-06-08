using namespace app;

namespace app::methods::WaterPoisonCloud {
IL2CPP_REGISTER_METHOD(0x008D8D00, void, EditorInitializeMesh, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008D8E50, void, AddBlob, (WaterPoisonCloud * __this, WaterPoisonCloud_Blob blob));
IL2CPP_REGISTER_METHOD(0x008D95B0, int32_t, BlobCount, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008D9640, WaterPoisonCloud_Blob, GetBlob, (WaterPoisonCloud * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x008D9710, void, SetBlob, (WaterPoisonCloud * __this, WaterPoisonCloud_Blob blob, int32_t i));
IL2CPP_REGISTER_METHOD(0x008D9800, void, RemoveBlob, (WaterPoisonCloud * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x008D9BA0, void, Clear, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008D9D70, void, Awake, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008DA0A0, void, OnEnable, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008DA170, void, OnDisable, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008DA230, Damage *, GetDamageForPosition, (WaterPoisonCloud * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x008DA550, bool, GetNearestBlob, (WaterPoisonCloud * __this, Vector3 position, WaterPoisonCloud_Blob * blob, float sizeMultiplier));
IL2CPP_REGISTER_METHOD(0x008DA780, void, SetDestroyOnCleared, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008DA820, void, UpdateMesh, (WaterPoisonCloud * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x008DAA60, void, InitializeMesh, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008DACB0, void, UpdateBlobData, (WaterPoisonCloud * __this, int32_t i, float deltaTime));
IL2CPP_REGISTER_METHOD(0x008DC750, void, SetMeshData, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008DCB70, void, DestroyCloud, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008DCC60, void, OnDrawGizmos, (WaterPoisonCloud * __this));
IL2CPP_REGISTER_METHOD(0x008DCD60, void, __ctor, (WaterPoisonCloud * __this));
}
