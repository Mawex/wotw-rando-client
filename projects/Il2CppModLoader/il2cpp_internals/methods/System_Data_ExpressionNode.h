#include <interception_macros.h>

namespace app::methods::System::Data::ExpressionNode {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ExpressionNode * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F5A650, IFormatProvider *, get_FormatProvider, (ExpressionNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSqlColumn, (ExpressionNode * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, DataTable *, get_table, (ExpressionNode * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, BindTable, (ExpressionNode * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DependsOn, (ExpressionNode * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x01F5A710, bool, IsInteger, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A730, bool, IsIntegerSql, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A750, bool, IsSigned, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A770, bool, IsSignedSql, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A7B0, bool, IsUnsigned, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A7D0, bool, IsUnsignedSql, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A7F0, bool, IsNumeric, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A820, bool, IsNumericSql, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A860, bool, IsFloat, (StorageType__Enum type));
IL2CPP_REGISTER_METHOD(0x01F5A880, bool, IsFloatSql, (StorageType__Enum type));
}
