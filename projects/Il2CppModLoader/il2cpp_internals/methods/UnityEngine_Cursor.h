#include <interception_macros.h>

namespace app::methods::UnityEngine::Cursor {
IL2CPP_REGISTER_METHOD(0x0242BB70, void, SetCursor, (Texture2D * texture, Vector2 hotspot, CursorMode__Enum cursorMode));
IL2CPP_REGISTER_METHOD(0x0242BBE0, void, set_visible, (bool value));
IL2CPP_REGISTER_METHOD(0x0242BC30, CursorLockMode__Enum, get_lockState, ());
IL2CPP_REGISTER_METHOD(0x0242BC80, void, set_lockState, (CursorLockMode__Enum value));
IL2CPP_REGISTER_METHOD(0x0242BCD0, void, SetCursor_Injected, (Texture2D * texture, Vector2 * hotspot, CursorMode__Enum cursorMode));
}
