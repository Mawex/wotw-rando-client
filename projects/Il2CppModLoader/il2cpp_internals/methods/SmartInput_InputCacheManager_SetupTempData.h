using namespace app;

namespace app::methods::SmartInput::InputCacheManager_SetupTempData {
IL2CPP_REGISTER_METHOD(0x006CCDB0, void, __ctor, (InputCacheManager_SetupTempData * __this));
IL2CPP_REGISTER_METHOD(0x006CCFF0, InputCacheManager_SetupTempData_Node *, GetOrCreateNode, (InputCacheManager_SetupTempData * __this, ICachableInput * input));
IL2CPP_REGISTER_METHOD(0x006CD1F0, void, AddLinks, (InputCacheManager_SetupTempData * __this, ICachableInput * source));
IL2CPP_REGISTER_METHOD(0x006CD370, void, DeclareSource, (InputCacheManager_SetupTempData * __this, ICachableInput * input, InputCacheManager * man));
IL2CPP_REGISTER_METHOD(0x006CD4E0, void, AllocateNodeIndex, (InputCacheManager_SetupTempData * __this, InputCacheManager_SetupTempData_Node * node));
IL2CPP_REGISTER_METHOD(0x006CD690, void, PostDeclare, (InputCacheManager_SetupTempData * __this));
}
