#include <interception_macros.h>

namespace app::methods::AlphabetOptions {
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_CurrentlySelected, (AlphabetOptions * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_CurrentlySelected, (AlphabetOptions * __this, String * value));
IL2CPP_REGISTER_METHOD(0x004F6590, void, SetFilteringByPossibleNames, (AlphabetOptions * __this, List_1_System_String_ * allNames, uint16_t first));
IL2CPP_REGISTER_METHOD(0x004F6820, void, OnEnable, (AlphabetOptions * __this));
IL2CPP_REGISTER_METHOD(0x004F6830, bool, IsAllowed, (AlphabetOptions * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x004F6880, void, UpdateItems, (AlphabetOptions * __this));
IL2CPP_REGISTER_METHOD(0x004F6C70, void, __ctor, (AlphabetOptions * __this));
IL2CPP_REGISTER_METHOD(0x004F6D00, void, _UpdateItems_b__11_0, (AlphabetOptions * __this));
IL2CPP_REGISTER_METHODINFO(0x0476FC00, AlphabetOptions__UpdateItems_b__11_0__MethodInfo);
}
