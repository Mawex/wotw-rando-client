using namespace app;

namespace app::methods::HideFlagsExtensions {
IL2CPP_REGISTER_METHOD(0x00B49070, bool, HasFlagDontSave, (Object_1 * _this));
IL2CPP_REGISTER_METHOD(0x00B490E0, bool, HasFlagNotEditable, (Object_1 * _this));
IL2CPP_REGISTER_METHOD(0x00B49140, bool, HasFlagHideInHierarchy, (Object_1 * _this));
IL2CPP_REGISTER_METHOD(0x00B491A0, bool, HasFlagHideInInspector, (Object_1 * _this));
IL2CPP_REGISTER_METHOD(0x00B49200, bool, HasFlagDontSaveInEditor, (Object_1 * _this));
IL2CPP_REGISTER_METHOD(0x00B49260, bool, HasFlagDontSaveInBuild, (Object_1 * _this));
IL2CPP_REGISTER_METHOD(0x00B492C0, bool, HasFlagDontUnloadUnusedAsset, (Object_1 * _this));
IL2CPP_REGISTER_METHOD(0x00B49320, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0157F9A0, Object *, OrNull, (Object * o));
IL2CPP_REGISTER_METHOD(0x0157F9A0, ScenesManager *, OrNull, (ScenesManager * o));
IL2CPP_REGISTER_METHODINFO(0x0473C678, HideFlagsExtensions_OrNull_1__MethodInfo);
}
