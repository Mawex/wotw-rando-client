using namespace app;

namespace app::methods::SpringSeinTrigger {
IL2CPP_REGISTER_METHOD(0x009A8A00, void, OnCollisionEnter, (SpringSeinTrigger * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x009A8CA0, void, Spring, (SpringSeinTrigger * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x009A8FF0, void, SpringSein, (SpringSeinTrigger * __this, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x009A95E0, void, SpringKu, (SpringSeinTrigger * __this, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x009A8220, void, __ctor, (SpringSeinTrigger * __this));
}
