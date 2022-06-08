using namespace app;

namespace app::methods::Moon::MoonReference_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02720740, bool, get_IsCrossSceneReference, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x027207D0, CrossSceneReferenceId, get_CrossSceneReferenceId, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04798228, MoonReference_1_System_Object__get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027208E0, bool, get_IsStaticValue, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02720A20, bool, get_HasAReference, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x027205B0, void, __ctor, (MoonReference_1_System_Object_ * __this, Object * reference));
IL2CPP_REGISTER_METHOD(0x027206A0, void, Finalize, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x027206E0, void, __ctor, (MoonReference_1_System_Object_ * __this, MoonReference_1_System_Object_ * moonRef));
IL2CPP_REGISTER_METHOD(0x02720AC0, Object *, Resolve, (MoonReference_1_System_Object_ * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04767930, MoonReference_1_System_Object__Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Object_1 *, SaveResolveStaticAsObject, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02720E10, Object *, SaveResolverStatic, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02720EB0, Object *, SafeResolve, (MoonReference_1_System_Object_ * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02721320, String *, GetFullHierarchy, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (MoonReference_1_System_Object_ * __this, Object * * value, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02721570, bool, IsVolitileValueValid, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (MoonReference_1_System_Object_ * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetVolatileValue, (MoonReference_1_System_Object_ * __this, Object * newValue));
IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (MoonReference_1_System_Object_ * __this, Object * newValue));
IL2CPP_REGISTER_METHOD(0x02721A70, void, SetValueInResolver, (MoonReference_1_System_Object_ * __this, Object * newValue, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04756FC8, MoonReference_1_System_Object__SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01349560, MoonTypeData, GetTypeData, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02721C50, void, SetResolver, (MoonReference_1_System_Object_ * __this, IMoonTypeResolver * newResolver, Object_1 * resolverObject));
IL2CPP_REGISTER_METHOD(0x02721C60, void, SetResolver, (MoonReference_1_System_Object_ * __this, IMoonTypeResolver * newResolver, Object_1 * resolverObject, int32_t intExtraData));
IL2CPP_REGISTER_METHOD(0x02721C70, void, OnBeforeSerialize, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02721D60, void, OnAfterDeserialize, (MoonReference_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02721E50, MoonReference_1_System_Object_ *, Copy, (MoonReference_1_System_Object_ * __this));
}
