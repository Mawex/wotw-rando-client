using namespace app;

namespace app::methods::AmplifyColor::VolumeEffectComponent {
IL2CPP_REGISTER_METHOD(0x030CF970, void, __ctor, (VolumeEffectComponent * __this, String * name));
IL2CPP_REGISTER_METHOD(0x030CFAD0, VolumeEffectField *, AddField, (VolumeEffectComponent * __this, FieldInfo_1 * pi, Component_1 * c));
IL2CPP_REGISTER_METHOD(0x030CFAF0, VolumeEffectField *, AddField, (VolumeEffectComponent * __this, FieldInfo_1 * pi, Component_1 * c, int32_t position));
IL2CPP_REGISTER_METHOD(0x030CFD10, void, RemoveEffectField, (VolumeEffectComponent * __this, VolumeEffectField * field));
IL2CPP_REGISTER_METHOD(0x030CFDB0, void, __ctor, (VolumeEffectComponent * __this, Component_1 * c, VolumeEffectComponentFlags * compFlags));
IL2CPP_REGISTER_METHOD(0x030D00F0, void, UpdateComponent, (VolumeEffectComponent * __this, Component_1 * c, VolumeEffectComponentFlags * compFlags));
IL2CPP_REGISTER_METHOD(0x030D0620, VolumeEffectField *, FindEffectField, (VolumeEffectComponent * __this, String * fieldName));
IL2CPP_REGISTER_METHOD(0x030D0780, FieldInfo_1__Array *, ListAcceptableFields, (Component_1 * c));
IL2CPP_REGISTER_METHOD(0x030D0A00, String__Array *, GetFieldNames, (VolumeEffectComponent * __this));
}
