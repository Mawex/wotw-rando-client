#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::HuffmanTree {
IL2CPP_REGISTER_METHOD(0x02B79C90, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02B7A110, HuffmanTree *, get_StaticLiteralLengthTree, ());
IL2CPP_REGISTER_METHOD(0x02B7A1B0, HuffmanTree *, get_StaticDistanceTree, ());
IL2CPP_REGISTER_METHOD(0x02B7A250, void, __ctor, (HuffmanTree * __this, Byte__Array * codeLengths));
IL2CPP_REGISTER_METHOD(0x02B7A2A0, Byte__Array *, GetStaticLiteralTreeLength, ());
IL2CPP_REGISTER_METHOD(0x02B7A3F0, Byte__Array *, GetStaticDistanceTreeLength, ());
IL2CPP_REGISTER_METHOD(0x02B7A4A0, UInt32__Array *, CalculateHuffmanCode, (HuffmanTree * __this));
IL2CPP_REGISTER_METHOD(0x02B7A7B0, void, CreateTable, (HuffmanTree * __this));
IL2CPP_REGISTER_METHODINFO(0x04745C98, HuffmanTree_CreateTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B7AB30, int32_t, GetNextSymbol, (HuffmanTree * __this, InputBuffer * input));
IL2CPP_REGISTER_METHODINFO(0x04745BC8, HuffmanTree_GetNextSymbol__MethodInfo);
}
