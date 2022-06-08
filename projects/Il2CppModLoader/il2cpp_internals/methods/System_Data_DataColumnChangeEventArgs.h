#include <interception_macros.h>

namespace app::methods::System::Data::DataColumnChangeEventArgs {
IL2CPP_REGISTER_METHOD(0x0239A030, void, __ctor, (DataColumnChangeEventArgs * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x0239A0E0, void, __ctor, (DataColumnChangeEventArgs * __this, DataRow * row, DataColumn * column, Object * value));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_ProposedValue, (DataColumnChangeEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ProposedValue, (DataColumnChangeEventArgs * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0239A1A0, void, InitializeColumnChangeEvent, (DataColumnChangeEventArgs * __this, DataColumn * column, Object * value));
}
