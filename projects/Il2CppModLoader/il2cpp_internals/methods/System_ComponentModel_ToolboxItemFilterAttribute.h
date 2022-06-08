#include <interception_macros.h>

namespace app::methods::System::ComponentModel::ToolboxItemFilterAttribute {
IL2CPP_REGISTER_METHOD(0x02943E10, void, __ctor, (ToolboxItemFilterAttribute * __this, String * filterString));
IL2CPP_REGISTER_METHOD(0x02943ED0, void, __ctor, (ToolboxItemFilterAttribute * __this, String * filterString, ToolboxItemFilterType__Enum filterType));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_FilterString, (ToolboxItemFilterAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, ToolboxItemFilterType__Enum, get_FilterType, (ToolboxItemFilterAttribute * __this));
IL2CPP_REGISTER_METHOD(0x02943F90, Object *, get_TypeId, (ToolboxItemFilterAttribute * __this));
IL2CPP_REGISTER_METHOD(0x02943FF0, bool, Equals, (ToolboxItemFilterAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, (ToolboxItemFilterAttribute * __this));
IL2CPP_REGISTER_METHOD(0x02944130, bool, Match, (ToolboxItemFilterAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02944200, String *, ToString, (ToolboxItemFilterAttribute * __this));
}
