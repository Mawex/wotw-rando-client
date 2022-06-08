#include <interception_macros.h>

namespace app::methods::GameTimeExtensions {
IL2CPP_REGISTER_METHOD(0x02553510, void, ExecuteAfter, (MonoBehaviour * behaviour, float time, Action * action));
IL2CPP_REGISTER_METHOD(0x02553690, IEnumerator *, ExecuteAfterAsync, (float time, Action * action));
}
