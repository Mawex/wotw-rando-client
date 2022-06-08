using namespace app;

namespace app::methods::Moon::UI::Window {
IL2CPP_REGISTER_METHOD(0x0118BC20, void, OnUserInput, (Window * __this));
IL2CPP_REGISTER_METHOD(0x0118BD70, void, Show, (Window * __this));
IL2CPP_REGISTER_METHOD(0x0118BE30, void, Hide, (Window * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsVisible, (Window * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_WillBlockInput, (Window * __this));
IL2CPP_REGISTER_METHOD(0x0118BEF0, void, RegisterInteractable, (Window * __this, UIInteractable * interactable));
IL2CPP_REGISTER_METHOD(0x0118BF90, void, UnregisterInteractable, (Window * __this, UIInteractable * interactable));
IL2CPP_REGISTER_METHOD(0x0118C030, void, __ctor, (Window * __this));
}
