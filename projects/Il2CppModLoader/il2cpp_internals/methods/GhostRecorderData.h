#include <interception_macros.h>

namespace app::methods::GhostRecorderData {
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_FlushedFramesCount, (GhostRecorderData * __this));
IL2CPP_REGISTER_METHOD(0x007E29C0, GhostFrame *, GetFrame, (GhostRecorderData * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x007E2A90, GhostFrame *, get_LastFrame, (GhostRecorderData * __this));
IL2CPP_REGISTER_METHOD(0x007E2B50, void, LoadFromFile, (GhostRecorderData * __this, String * filePath));
IL2CPP_REGISTER_METHOD(0x007E2E80, void, LoadFromReplay, (GhostRecorderData * __this, String * replay));
IL2CPP_REGISTER_METHOD(0x007E3240, void, BeginTimeslicedLoadFromReplay, (GhostRecorderData * __this, String * replay));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ContinueTimeslicedLoadFromReplay, (GhostRecorderData * __this, double * timeLeft));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishTimeslicedLoadFromReplay, (GhostRecorderData * __this));
IL2CPP_REGISTER_METHOD(0x007E37A0, void, LoadFromBinaryReader, (GhostRecorderData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007E3CB0, void, __ctor, (GhostRecorderData * __this));
}
