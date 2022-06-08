using namespace app;

namespace app::methods::UnityEngine::MovieTexture {
IL2CPP_REGISTER_METHOD(0x03144CC0, void, Play, (MovieTexture * __this));
IL2CPP_REGISTER_METHOD(0x03144CC0, void, INTERNAL_CALL_Play, (MovieTexture * self));
IL2CPP_REGISTER_METHOD(0x03144D10, void, Stop, (MovieTexture * __this));
IL2CPP_REGISTER_METHOD(0x03144D10, void, INTERNAL_CALL_Stop, (MovieTexture * self));
IL2CPP_REGISTER_METHOD(0x03144D60, void, Pause, (MovieTexture * __this));
IL2CPP_REGISTER_METHOD(0x03144D60, void, INTERNAL_CALL_Pause, (MovieTexture * self));
IL2CPP_REGISTER_METHOD(0x03144DB0, AudioClip *, get_audioClip, (MovieTexture * __this));
IL2CPP_REGISTER_METHOD(0x03144E00, void, set_loop, (MovieTexture * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03144E60, bool, get_isPlaying, (MovieTexture * __this));
}
