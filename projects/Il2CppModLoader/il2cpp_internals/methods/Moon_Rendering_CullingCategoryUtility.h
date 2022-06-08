using namespace app;

namespace app::methods::Moon::Rendering::CullingCategoryUtility {
IL2CPP_REGISTER_METHOD(0x00C53B80, bool, Register, (Renderer * renderer, uint32_t mask, Component_1 * logContext));
IL2CPP_REGISTER_METHOD(0x00C53CF0, bool, Unregister, (Renderer * renderer, uint32_t mask, Component_1 * logContext));
IL2CPP_REGISTER_METHOD(0x00C53E70, void, LogRegistrationError, (String * error, Component_1 * logContext));
}
