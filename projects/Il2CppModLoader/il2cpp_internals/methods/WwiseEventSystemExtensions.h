#include <interception_macros.h>

namespace app::methods::WwiseEventSystemExtensions {
IL2CPP_REGISTER_METHOD(0x00593850, WwiseEventSystem_SoundHandle, AllocateHandle, (WwiseEventSystem * system, SoundProvider * soundProvider, ISoundHost * host));
IL2CPP_REGISTER_METHOD(0x00593910, void, FireAndForget, (WwiseEventSystem * system, SoundProvider * soundProvider, ISoundHost * host));
}
