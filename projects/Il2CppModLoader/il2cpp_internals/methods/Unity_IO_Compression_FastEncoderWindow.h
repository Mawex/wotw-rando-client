#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::FastEncoderWindow {
IL2CPP_REGISTER_METHOD(0x02B775B0, void, __ctor, (FastEncoderWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B775C0, int32_t, get_BytesAvailable, (FastEncoderWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B775D0, DeflateInput *, get_UnprocessedInput, (FastEncoderWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B775B0, void, FlushWindow, (FastEncoderWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B77730, void, ResetWindow, (FastEncoderWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B777F0, int32_t, get_FreeWindowSpace, (FastEncoderWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B77800, void, CopyBytes, (FastEncoderWindow * __this, Byte__Array * inputBuffer, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x02B77850, void, MoveWindows, (FastEncoderWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B779A0, uint32_t, HashValue, (FastEncoderWindow * __this, uint32_t hash, uint8_t b));
IL2CPP_REGISTER_METHOD(0x02B779B0, uint32_t, InsertString, (FastEncoderWindow * __this, uint32_t * hash));
IL2CPP_REGISTER_METHOD(0x02B77A80, void, InsertStrings, (FastEncoderWindow * __this, uint32_t * hash, int32_t matchLen));
IL2CPP_REGISTER_METHOD(0x02B77BA0, bool, GetNextSymbolOrMatch, (FastEncoderWindow * __this, Match_1 * match));
IL2CPP_REGISTER_METHOD(0x02B77E70, int32_t, FindMatch, (FastEncoderWindow * __this, int32_t search, int32_t * matchPos, int32_t searchDepth, int32_t niceLength));
IL2CPP_REGISTER_METHOD(0x02B78070, void, VerifyHashes, (FastEncoderWindow * __this));
IL2CPP_REGISTER_METHOD(0x02B78130, uint32_t, RecalculateHash, (FastEncoderWindow * __this, int32_t position));
}
