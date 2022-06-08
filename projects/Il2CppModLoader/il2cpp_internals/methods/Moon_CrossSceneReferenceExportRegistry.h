#include <interception_macros.h>

namespace app::methods::Moon::CrossSceneReferenceExportRegistry {
IL2CPP_REGISTER_METHOD(0x002FB990, List_1_Moon_CrossSceneReferenceExportData_ *, get_ExportedObjects, (CrossSceneReferenceExportRegistry * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ExportedObjects, (CrossSceneReferenceExportRegistry * __this, List_1_Moon_CrossSceneReferenceExportData_ * value));
IL2CPP_REGISTER_METHOD(0x031BA860, void, ExposeCrossSceneObjectsIfNeeded, (CrossSceneReferenceExportRegistry * __this));
IL2CPP_REGISTER_METHOD(0x031BAA20, void, RefreshExposedObjects, (CrossSceneReferenceExportRegistry * __this));
IL2CPP_REGISTER_METHOD(0x031BAAC0, void, Awake, (CrossSceneReferenceExportRegistry * __this));
IL2CPP_REGISTER_METHOD(0x031BAAD0, void, OnDestroy, (CrossSceneReferenceExportRegistry * __this));
IL2CPP_REGISTER_METHOD(0x031BAAD0, void, RemoveAllCrossSceneObjects, (CrossSceneReferenceExportRegistry * __this));
IL2CPP_REGISTER_METHOD(0x031BAAE0, void, RemoveCrossSceneObjectsifNeeded, (CrossSceneReferenceExportRegistry * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CrossSceneReferenceExportRegistry * __this));
}
