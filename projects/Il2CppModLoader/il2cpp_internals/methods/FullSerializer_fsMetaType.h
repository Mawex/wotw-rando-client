using namespace app;

namespace app::methods::FullSerializer::fsMetaType {
IL2CPP_REGISTER_METHOD(0x015113F0, fsMetaType *, Get, (fsConfig * config, Type * type));
IL2CPP_REGISTER_METHOD(0x01511900, void, ClearCache, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01511B80, void, __ctor, (fsMetaType * __this, fsConfig * config, Type * reflectedType));
IL2CPP_REGISTER_METHOD(0x01511D30, void, CollectProperties, (fsConfig * config, List_1_FullSerializer_Internal_fsMetaProperty_ * properties, Type * reflectedType));
IL2CPP_REGISTER_METHOD(0x01512620, bool, IsAutoProperty, (PropertyInfo_1 * property, MemberInfo_1__Array * members));
IL2CPP_REGISTER_METHOD(0x01512780, bool, CanSerializeProperty, (fsConfig * config, PropertyInfo_1 * property, MemberInfo_1__Array * members, bool annotationFreeValue));
IL2CPP_REGISTER_METHOD(0x01512E50, bool, CanSerializeField, (fsConfig * config, FieldInfo_1 * field, bool annotationFreeValue));
IL2CPP_REGISTER_METHOD(0x015132F0, void, EmitAotData, (fsMetaType * __this, bool throwException));
IL2CPP_REGISTER_METHODINFO(0x0476F368, fsMetaType_EmitAotData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, fsMetaProperty__Array *, get_Properties, (fsMetaType * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Properties, (fsMetaType * __this, fsMetaProperty__Array * value));
IL2CPP_REGISTER_METHOD(0x01513600, bool, get_HasDefaultConstructor, (fsMetaType * __this));
IL2CPP_REGISTER_METHOD(0x01513880, bool, get_IsDefaultConstructorPublic, (fsMetaType * __this));
IL2CPP_REGISTER_METHOD(0x015139A0, Object *, CreateInstance, (fsMetaType * __this));
IL2CPP_REGISTER_METHODINFO(0x04736BF0, fsMetaType_CreateInstance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01513DC0, void, __cctor, (MethodInfo * method));
}
