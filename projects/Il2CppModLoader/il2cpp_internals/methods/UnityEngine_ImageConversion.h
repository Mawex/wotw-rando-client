#include <interception_macros.h>

namespace app::methods::UnityEngine::ImageConversion {
IL2CPP_REGISTER_METHOD(0x031C4C40, Byte__Array *, EncodeToPNG, (Texture2D * tex));
IL2CPP_REGISTER_METHOD(0x031C4C90, bool, LoadImage, (Texture2D * tex, Byte__Array * data, bool markNonReadable));
IL2CPP_REGISTER_METHOD(0x031C4D10, bool, LoadImage, (Texture2D * tex, Byte__Array * data));
}
