#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::Inflater {
IL2CPP_REGISTER_METHOD(0x02B7AD40, void, __ctor, (Inflater * __this));
IL2CPP_REGISTER_METHOD(0x02B7B000, void, SetFileFormatReader, (Inflater * __this, IFileFormatReader * reader));
IL2CPP_REGISTER_METHOD(0x02B7B020, void, Reset, (Inflater * __this));
IL2CPP_REGISTER_METHOD(0x02B7B040, void, SetInput, (Inflater * __this, Byte__Array * inputBytes, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x02B7B070, bool, Finished, (Inflater * __this));
IL2CPP_REGISTER_METHOD(0x02B7B090, int32_t, get_AvailableOutput, (Inflater * __this));
IL2CPP_REGISTER_METHOD(0x02B7B0B0, bool, NeedsInput, (Inflater * __this));
IL2CPP_REGISTER_METHOD(0x02B7B0E0, int32_t, Inflate, (Inflater * __this, Byte__Array * bytes, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x02B7B360, bool, Decode, (Inflater * __this));
IL2CPP_REGISTER_METHODINFO(0x047460A0, Inflater_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B7B7B0, bool, DecodeUncompressedBlock, (Inflater * __this, bool * end_of_block));
IL2CPP_REGISTER_METHODINFO(0x047927B8, Inflater_DecodeUncompressedBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B7BC40, bool, DecodeBlock, (Inflater * __this, bool * end_of_block_code_seen));
IL2CPP_REGISTER_METHODINFO(0x04700A00, Inflater_DecodeBlock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B7C1C0, bool, DecodeDynamicBlockHeader, (Inflater * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A770, Inflater_DecodeDynamicBlockHeader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B7CBF0, void, __cctor, ());
}
