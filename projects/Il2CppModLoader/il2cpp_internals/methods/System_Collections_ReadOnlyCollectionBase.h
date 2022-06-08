#include <interception_macros.h>

namespace app::methods::System::Collections::ReadOnlyCollectionBase {
IL2CPP_REGISTER_METHOD(0x0202C980, ArrayList *, get_InnerList, (ReadOnlyCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0202CAE0, int32_t, get_Count, (ReadOnlyCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0202CB10, bool, ICollection_get_IsSynchronized, (ReadOnlyCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0202CB40, Object *, ICollection_get_SyncRoot, (ReadOnlyCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x0202CB70, void, ICollection_CopyTo, (ReadOnlyCollectionBase * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x0202CBC0, IEnumerator *, GetEnumerator, (ReadOnlyCollectionBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ReadOnlyCollectionBase * __this));
}
