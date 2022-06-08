#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::FixupHolderList {
IL2CPP_REGISTER_METHOD(0x01D87CC0, void, __ctor, (FixupHolderList * __this));
IL2CPP_REGISTER_METHOD(0x01D87D60, void, __ctor, (FixupHolderList * __this, int32_t startingSize));
IL2CPP_REGISTER_METHOD(0x01D87E00, void, Add, (FixupHolderList * __this, FixupHolder * fixup));
IL2CPP_REGISTER_METHOD(0x01D87F50, void, EnlargeArray, (FixupHolderList * __this));
IL2CPP_REGISTER_METHODINFO(0x0473C970, FixupHolderList_EnlargeArray__MethodInfo);
}
