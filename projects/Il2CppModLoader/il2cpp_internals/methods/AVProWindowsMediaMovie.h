using namespace app;

namespace app::methods::AVProWindowsMediaMovie {
IL2CPP_REGISTER_METHOD(0x0312E3B0, Texture *, get_OutputTexture, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, AVProWindowsMedia *, get_MovieInstance, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312E3D0, void, Start, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHODINFO(0x04746CF0, AVProWindowsMediaMovie_Start__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0312E4E0, bool, LoadMovie, (AVProWindowsMediaMovie * __this, bool autoPlay));
IL2CPP_REGISTER_METHOD(0x0312E7A0, bool, LoadMovieFromMemory, (AVProWindowsMediaMovie * __this, bool autoPlay, String * name, void * moviePointer, int64_t movieLength, FilterMode__Enum textureFilterMode, TextureWrapMode__Enum textureWrapMode));
IL2CPP_REGISTER_METHOD(0x0312EA40, void, Update, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0057BAD0, void, Play, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312EC90, void, Pause, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312ECB0, int32_t, get_NumClips, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312ED40, String *, GetClipName, (AVProWindowsMediaMovie * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0312EE10, void, ClearClips, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312EEE0, void, AddClip, (AVProWindowsMediaMovie * __this, String * name, int32_t inPoint, int32_t outPoint));
IL2CPP_REGISTER_METHOD(0x0312F0A0, String *, GetCurrentClipName, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312F140, void, LoadClips, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312F2C0, void, ResetClip, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312F2F0, void, PlayClip, (AVProWindowsMediaMovie * __this, String * name, bool loop, bool startPaused));
IL2CPP_REGISTER_METHODINFO(0x0475F0B8, AVProWindowsMediaMovie_PlayClip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0312F510, void, UnloadMovie, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x015A1590, void, OnDestroy, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312F560, String *, GetFilePath, (AVProWindowsMediaMovie * __this));
IL2CPP_REGISTER_METHOD(0x0312F710, void, __ctor, (AVProWindowsMediaMovie * __this));
}
