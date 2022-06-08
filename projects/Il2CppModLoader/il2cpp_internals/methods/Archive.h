using namespace app;

namespace app::methods::Archive {
IL2CPP_REGISTER_METHOD(0x002FA280, MemoryStream *, get_MemoryStream, (Archive * __this));
IL2CPP_REGISTER_METHOD(0x005082A0, void, set_MemoryStream, (Archive * __this, MemoryStream * value));
IL2CPP_REGISTER_METHOD(0x00508510, void, __ctor, (Archive * __this));
IL2CPP_REGISTER_METHOD(0x00508730, void, WriteMemoryStreamToBinaryWriter, (Archive * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x005087D0, void, ReadMemoryStreamFromBinaryReader, (Archive * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x00508880, bool, get_Reading, (Archive * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Writing, (Archive * __this));
IL2CPP_REGISTER_METHOD(0x00508890, void, ResetStream, (Archive * __this));
IL2CPP_REGISTER_METHOD(0x005088C0, void, WriteMode, (Archive * __this));
IL2CPP_REGISTER_METHOD(0x00508900, void, ReadMode, (Archive * __this));
IL2CPP_REGISTER_METHOD(0x00508940, void, Serialize, (Archive * __this, float * value));
IL2CPP_REGISTER_METHOD(0x00508960, void, Serialize, (Archive * __this, int32_t * value));
IL2CPP_REGISTER_METHOD(0x005089E0, void, Serialize, (Archive * __this, bool * value));
IL2CPP_REGISTER_METHOD(0x00508A60, void, Serialize, (Archive * __this, String * * value));
IL2CPP_REGISTER_METHOD(0x00508AE0, void, Serialize, (Archive * __this, Vector2 * value));
IL2CPP_REGISTER_METHOD(0x00508B40, void, Serialize, (Archive * __this, Vector3 * value));
IL2CPP_REGISTER_METHOD(0x00508BD0, void, Serialize, (Archive * __this, Quaternion * value));
IL2CPP_REGISTER_METHOD(0x00508CA0, float, Serialize, (Archive * __this, float value));
IL2CPP_REGISTER_METHOD(0x00508D10, int32_t, Serialize, (Archive * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00508D70, bool, Serialize, (Archive * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00508DD0, String *, Serialize, (Archive * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00508E30, Vector2, Serialize, (Archive * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00508E80, Vector3, Serialize, (Archive * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00508F30, Quaternion, Serialize, (Archive * __this, Quaternion value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SerializeVersion, (Archive * __this, int32_t * version));
}
