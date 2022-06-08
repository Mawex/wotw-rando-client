using namespace app;

namespace app::methods::Moon::CrossSceneReferenceId {
IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_ObjectId, (CrossSceneReferenceId__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024B800, bool, IsFromSameScene, (CrossSceneReferenceId__Boxed * __this, CrossSceneReferenceId other));
IL2CPP_REGISTER_METHOD(0x0024B850, void, __ctor, (CrossSceneReferenceId__Boxed * __this, String * sceneGuidString, int32_t objectId));
IL2CPP_REGISTER_METHOD(0x0024B970, bool, Equals, (CrossSceneReferenceId__Boxed * __this, CrossSceneReferenceId other));
IL2CPP_REGISTER_METHOD(0x0024B9D0, bool, Equals, (CrossSceneReferenceId__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0024B9E0, int32_t, GetHashCode, (CrossSceneReferenceId__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x031BADB0, bool, operator___, (CrossSceneReferenceId left, CrossSceneReferenceId right));
IL2CPP_REGISTER_METHOD(0x031BAE10, bool, operator___, (CrossSceneReferenceId left, CrossSceneReferenceId right));
IL2CPP_REGISTER_METHOD(0x031BAE70, IEqualityComparer_1_Moon_CrossSceneReferenceId_ *, get_CrossSceneReferenceIdComparer, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031BAF10, void, __cctor, (MethodInfo * method));
}
