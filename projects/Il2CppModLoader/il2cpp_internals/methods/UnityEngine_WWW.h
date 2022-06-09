#include <interception_macros.h>

namespace app::methods::UnityEngine::WWW {
IL2CPP_REGISTER_METHOD(0x031BC190, void, __ctor_1, (app::WWW * this_ptr, app::String * url));
IL2CPP_REGISTER_METHOD(0x031BC220, void, __ctor_2, (app::WWW * this_ptr, app::String * url, app::Byte__Array * post_data, app::Dictionary_2_System_String_System_String_ * headers));
IL2CPP_REGISTER_METHOD(0x031BC760, AssetBundle *, get_assetBundle, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BC960, Byte__Array *, get_bytes, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BCA80, String *, get_error, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BCCB0, bool, get_isDone, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BCD10, String *, get_text, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BCE30, Texture2D *, CreateTextureFromDownloadedData, (app::WWW * this_ptr, bool mark_non_readable));
IL2CPP_REGISTER_METHOD(0x031BD120, Texture2D *, get_texture, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BD130, String *, get_url, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BD190, bool, get_keepWaiting, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BD200, void, Dispose, (app::WWW * this_ptr));
IL2CPP_REGISTER_METHOD(0x031BD230, bool, WaitUntilDoneIfPossible, (app::WWW * this_ptr));
}
