#include <interception_macros.h>

namespace app::methods::Moon::Wwise::SoundListenerReference {
IL2CPP_REGISTER_METHOD(0x001FEA80, void, __ctor, (SoundListenerReference__Boxed * __this, ISoundListener * listener));
IL2CPP_REGISTER_METHOD(0x001FEA90, bool, get_IsValid, (SoundListenerReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C00, ISoundListener *, get_Listener, (SoundListenerReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C10, int64_t, get_Version, (SoundListenerReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FEAA0, bool, Equals, (SoundListenerReference__Boxed * __this, SoundListenerReference other));
IL2CPP_REGISTER_METHOD(0x001FEB00, bool, Equals, (SoundListenerReference__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001FEC10, int32_t, GetHashCode, (SoundListenerReference__Boxed * __this));
}
