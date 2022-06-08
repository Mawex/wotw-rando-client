#include <interception_macros.h>

namespace app::methods::AuxiliarySendZone {
IL2CPP_REGISTER_METHOD(0x0085EA80, String *, get_GizmoText, (AuxiliarySendZone * __this));
IL2CPP_REGISTER_METHOD(0x0085EB10, void, Awake, (AuxiliarySendZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEmitterEnteredZone, (AuxiliarySendZone * __this, ISoundHost * host));
IL2CPP_REGISTER_METHOD(0x0085ED60, void, OnEmitterExitsZone, (AuxiliarySendZone * __this, ISoundHost * host));
IL2CPP_REGISTER_METHOD(0x0085ED70, void, OnEmitterUpdate, (AuxiliarySendZone * __this, ISoundHost * host, Vector2 distances, bool hasPositionChanged));
IL2CPP_REGISTER_METHOD(0x0085F070, void, SetValue, (AuxiliarySendZone * __this, ISoundHost * host, float value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, SelectableCategory__Enum, get_Category, (AuxiliarySendZone * __this));
IL2CPP_REGISTER_METHOD(0x0085F280, void, __ctor, (AuxiliarySendZone * __this));
}
