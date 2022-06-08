#include <interception_macros.h>

namespace app::methods::UnityEngine::WWW {
IL2CPP_REGISTER_METHOD(0x031BC190, void, __ctor, (WWW * __this, String * url));
IL2CPP_REGISTER_METHOD(0x031BC220, void, __ctor, (WWW * __this, String * url, Byte__Array * postData, Dictionary_2_System_String_System_String_ * headers));
IL2CPP_REGISTER_METHOD(0x031BC760, AssetBundle *, get_assetBundle, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BC960, Byte__Array *, get_bytes, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BCA80, String *, get_error, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BCCB0, bool, get_isDone, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BCD10, String *, get_text, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BCE30, Texture2D *, CreateTextureFromDownloadedData, (WWW * __this, bool markNonReadable));
IL2CPP_REGISTER_METHOD(0x031BD120, Texture2D *, get_texture, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BD130, String *, get_url, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BD190, bool, get_keepWaiting, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BD200, void, Dispose, (WWW * __this));
IL2CPP_REGISTER_METHOD(0x031BD230, bool, WaitUntilDoneIfPossible, (WWW * __this));
}
