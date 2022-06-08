#include <interception_macros.h>

namespace app::methods::KwolokChase {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (KwolokChase * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, IUberState__Array *, get_AffectingUberStates, (KwolokChase * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (KwolokChase * __this));
IL2CPP_REGISTER_METHOD(0x012FB370, void, Apply, (KwolokChase * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x012FB3B0, void, OnEnable, (KwolokChase * __this));
IL2CPP_REGISTER_METHOD(0x012FB450, void, OnDisable, (KwolokChase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (KwolokChase * __this));
IL2CPP_REGISTER_METHOD(0x012FB4F0, void, Update, (KwolokChase * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (KwolokChase * __this));
}
