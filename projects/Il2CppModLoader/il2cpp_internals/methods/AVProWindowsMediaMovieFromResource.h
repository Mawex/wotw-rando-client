#include <interception_macros.h>

namespace app::methods::AVProWindowsMediaMovieFromResource {
IL2CPP_REGISTER_METHOD(0x0312F8D0, void, Start, (AVProWindowsMediaMovieFromResource * __this));
IL2CPP_REGISTER_METHODINFO(0x047803D8, AVProWindowsMediaMovieFromResource_Start__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0312F9D0, bool, LoadMovie, (AVProWindowsMediaMovieFromResource * __this, bool autoPlay));
IL2CPP_REGISTER_METHOD(0x0312F9E0, bool, LoadMovieFromResource, (AVProWindowsMediaMovieFromResource * __this, bool autoPlay, String * path));
IL2CPP_REGISTER_METHOD(0x0312FD50, void, UnloadMovie, (AVProWindowsMediaMovieFromResource * __this));
IL2CPP_REGISTER_METHOD(0x0312FEA0, void, UnloadResource, (AVProWindowsMediaMovieFromResource * __this));
IL2CPP_REGISTER_METHOD(0x0057BBE0, void, __ctor, (AVProWindowsMediaMovieFromResource * __this));
}
