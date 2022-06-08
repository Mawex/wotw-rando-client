#include <interception_macros.h>

namespace app::methods::Ionic::Zlib::DeflateManager {
IL2CPP_REGISTER_METHOD(0x03065460, void, __ctor, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03065860, void, _InitializeLazyMatch, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03065A50, void, _InitializeTreeData, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03065BF0, void, _InitializeBlocks, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03065E70, void, pqdownheap, (DeflateManager * __this, Int16__Array * tree, int32_t k));
IL2CPP_REGISTER_METHOD(0x03066140, bool, _IsSmaller, (Int16__Array * tree, int32_t n, int32_t m, SByte__Array * depth));
IL2CPP_REGISTER_METHOD(0x03066200, void, scan_tree, (DeflateManager * __this, Int16__Array * tree, int32_t max_code));
IL2CPP_REGISTER_METHOD(0x030665C0, int32_t, build_bl_tree, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x030667B0, void, send_all_trees, (DeflateManager * __this, int32_t lcodes, int32_t dcodes, int32_t blcodes));
IL2CPP_REGISTER_METHOD(0x03066980, void, send_tree, (DeflateManager * __this, Int16__Array * tree, int32_t max_code));
IL2CPP_REGISTER_METHOD(0x03066C80, void, put_bytes, (DeflateManager * __this, Byte__Array * p, int32_t start, int32_t len));
IL2CPP_REGISTER_METHOD(0x03066CD0, void, send_code, (DeflateManager * __this, int32_t c, Int16__Array * tree));
IL2CPP_REGISTER_METHOD(0x03066D40, void, send_bits, (DeflateManager * __this, int32_t value, int32_t length));
IL2CPP_REGISTER_METHOD(0x03066F40, void, _tr_align, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x030671C0, bool, _tr_tally, (DeflateManager * __this, int32_t dist, int32_t lc));
IL2CPP_REGISTER_METHOD(0x03067610, void, send_compressed_block, (DeflateManager * __this, Int16__Array * ltree, Int16__Array * dtree));
IL2CPP_REGISTER_METHOD(0x03067BD0, void, set_data_type, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03067DF0, void, bi_flush, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03067F00, void, bi_windup, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03068010, void, copy_block, (DeflateManager * __this, int32_t buf, int32_t len, bool header));
IL2CPP_REGISTER_METHOD(0x03068190, void, flush_block_only, (DeflateManager * __this, bool eof));
IL2CPP_REGISTER_METHOD(0x030681F0, BlockState__Enum, DeflateNone, (DeflateManager * __this, FlushType__Enum flush));
IL2CPP_REGISTER_METHODINFO(0x0471E438, DeflateManager_DeflateNone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030684A0, void, _tr_stored_block, (DeflateManager * __this, int32_t buf, int32_t stored_len, bool eof));
IL2CPP_REGISTER_METHOD(0x030685B0, void, _tr_flush_block, (DeflateManager * __this, int32_t buf, int32_t stored_len, bool eof));
IL2CPP_REGISTER_METHOD(0x03068880, void, _fillWindow, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x03068D20, BlockState__Enum, DeflateFast, (DeflateManager * __this, FlushType__Enum flush));
IL2CPP_REGISTER_METHODINFO(0x0474A650, DeflateManager_DeflateFast__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03069460, BlockState__Enum, DeflateSlow, (DeflateManager * __this, FlushType__Enum flush));
IL2CPP_REGISTER_METHODINFO(0x04744588, DeflateManager_DeflateSlow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03069D30, int32_t, longest_match, (DeflateManager * __this, int32_t cur_match));
IL2CPP_REGISTER_METHOD(0x00FB00D0, bool, get_WantRfc1950HeaderBytes, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x011A6EE0, void, set_WantRfc1950HeaderBytes, (DeflateManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0306A580, int32_t, Initialize, (DeflateManager * __this, ZlibCodec * codec, CompressionLevel__Enum level, int32_t bits, CompressionStrategy__Enum compressionStrategy));
IL2CPP_REGISTER_METHOD(0x0306A680, int32_t, Initialize, (DeflateManager * __this, ZlibCodec * codec, CompressionLevel__Enum level, int32_t windowBits, int32_t memLevel, CompressionStrategy__Enum strategy));
IL2CPP_REGISTER_METHODINFO(0x04773000, DeflateManager_Initialize_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306A960, void, Reset, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x0306ACA0, void, SetDeflater, (DeflateManager * __this));
IL2CPP_REGISTER_METHOD(0x0306AFB0, int32_t, Deflate, (DeflateManager * __this, FlushType__Enum flush));
IL2CPP_REGISTER_METHODINFO(0x04716390, DeflateManager_Deflate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0306BA60, void, __cctor, ());
}
