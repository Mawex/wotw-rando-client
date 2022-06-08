#include <interception_macros.h>

namespace app::methods::UberShaderAreaNameFinder {
IL2CPP_REGISTER_METHOD(0x01908630, String *, GetAreaImplString, (UberAtlasArea__Enum area));
IL2CPP_REGISTER_METHOD(0x01908700, String *, GetAreaName, (String * name));
IL2CPP_REGISTER_METHOD(0x01908AA0, String *, GetAreaName, (Transform * root));
IL2CPP_REGISTER_METHOD(0x01908B90, String *, MassageAreaName, (String * areaName));
IL2CPP_REGISTER_METHOD(0x01909110, void, __cctor, ());
}
