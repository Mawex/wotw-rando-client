#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::SayWordsOnTouch {
IL2CPP_REGISTER_METHOD(0x01669C40, int32_t, get_ActiveSpeakers, ());
IL2CPP_REGISTER_METHOD(0x01669CC0, void, set_ActiveSpeakers, (int32_t value));
IL2CPP_REGISTER_METHOD(0x01669D40, void, OnTriggerEnter, (app::SayWordsOnTouch * this_ptr, app::Collider * other));
IL2CPP_REGISTER_METHOD(0x0166A090, IEnumerator *, SayStuff, (app::SayWordsOnTouch * this_ptr));
IL2CPP_REGISTER_METHOD(0x0166A1E0, void, OnTriggerExit, (app::SayWordsOnTouch * this_ptr, app::Collider * other));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::SayWordsOnTouch * this_ptr));
}
