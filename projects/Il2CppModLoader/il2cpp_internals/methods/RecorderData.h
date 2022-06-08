using namespace app;

namespace app::methods::RecorderData {
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_FlushedFramesCount, (RecorderData * __this));
IL2CPP_REGISTER_METHOD(0x008EE620, RecorderFrame *, GetFrame, (RecorderData * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x008EE6F0, RecorderFrame *, get_LastFrame, (RecorderData * __this));
IL2CPP_REGISTER_METHOD(0x008EE7B0, void, LoadFromFile, (RecorderData * __this, String * filePath));
IL2CPP_REGISTER_METHOD(0x008EEAC0, void, LoadFrom, (RecorderData * __this, BinaryReader * reader));
IL2CPP_REGISTER_METHOD(0x008EF290, void, WriteSplitReplay, (RecorderData * __this, String * folderPath));
IL2CPP_REGISTER_METHOD(0x008EF720, void, LoadFromBytes, (RecorderData * __this, Byte__Array * bytes));
IL2CPP_REGISTER_METHOD(0x008EFA40, void, __ctor, (RecorderData * __this));
}
