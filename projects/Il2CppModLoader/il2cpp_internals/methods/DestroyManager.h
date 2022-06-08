#include <interception_macros.h>

namespace app::methods::DestroyManager {
IL2CPP_REGISTER_METHOD(0x00B8A5C0, void, __ctor, (DestroyManager * __this));
IL2CPP_REGISTER_METHOD(0x00B8AC80, void, DestroyResourcesAsync, (DestroyManager * __this, List_1_UnityEngine_Object_ * resources, Action * callback));
IL2CPP_REGISTER_METHOD(0x00B8AEC0, void, AddResourceCountAndCallback, (DestroyManager * __this, int32_t count, Action * callback));
IL2CPP_REGISTER_METHOD(0x00B8AF80, void, AddTransformCountAndCallback, (DestroyManager * __this, int32_t count, Action * callback));
IL2CPP_REGISTER_METHOD(0x00B8B040, DestroyManager_CountAndCallback *, GetAvailableCountAndCallback, (DestroyManager * __this));
IL2CPP_REGISTER_METHOD(0x00B8B1F0, void, DestroyGameObjectAsync, (DestroyManager * __this, GameObject * target, Action * callback));
IL2CPP_REGISTER_METHOD(0x00B8B450, void, UnloadResourcesAsync, (DestroyManager * __this, List_1_UnityEngine_Object_ * runtimeResources));
IL2CPP_REGISTER_METHOD(0x00B8B530, void, AddTransform, (DestroyManager * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x00B8B690, bool, get_IsDestroying, (DestroyManager * __this));
IL2CPP_REGISTER_METHOD(0x00B8B720, void, DestroyAll, (DestroyManager * __this));
IL2CPP_REGISTER_METHOD(0x00B8B9F0, void, Update, (DestroyManager * __this));
IL2CPP_REGISTER_METHOD(0x00B8BD30, void, ProcessActiveCountAndCallbacks, (DestroyManager * __this, List_1_DestroyManager_CountAndCallback_ * activeList));
}
