#include <interception_macros.h>

namespace app::methods::Moon::Wwise::WwiseGameObjectSystem {
IL2CPP_REGISTER_METHOD(0x027153E0, void, Initialize, (WwiseGameObjectSystem * __this, AkWwiseInitializationSettings * config));
IL2CPP_REGISTER_METHOD(0x027157C0, ArtificialSoundHost *, GetFreeSoundHost, (WwiseGameObjectSystem * __this));
IL2CPP_REGISTER_METHOD(0x02715900, ArtificialSoundHostReference, Allocate, (WwiseGameObjectSystem * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02715B30, void, Update, (WwiseGameObjectSystem * __this));
IL2CPP_REGISTER_METHOD(0x02715C10, void, FireAndForget, (WwiseGameObjectSystem * __this, String * name, Event_1 * evt, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02715C90, void, Dispose, (WwiseGameObjectSystem * __this));
IL2CPP_REGISTER_METHOD(0x02715D00, void, PrintState, (WwiseGameObjectSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WwiseGameObjectSystem * __this));
}
