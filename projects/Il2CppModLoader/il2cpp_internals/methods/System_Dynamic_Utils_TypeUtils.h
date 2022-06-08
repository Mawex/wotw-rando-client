#include <interception_macros.h>

namespace app::methods::System::Dynamic::Utils::TypeUtils {
IL2CPP_REGISTER_METHOD(0x01F965B0, Type *, GetNonNullableType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F96620, Type *, GetNullableType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F967B0, bool, IsNullableType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F968B0, bool, IsNullableOrReferenceType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F968F0, bool, IsBool, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F969B0, bool, IsNumeric, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F96A90, bool, IsInteger, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F96B70, bool, IsArithmetic, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F96C50, bool, IsUnsignedInt, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F96D40, bool, IsIntegerOrBool, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F96E20, bool, IsNumericOrBool, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F96E50, bool, IsValidInstanceType, (MemberInfo_1 * member, Type * instanceType));
IL2CPP_REGISTER_METHOD(0x01F971C0, bool, HasIdentityPrimitiveOrNullableConversionTo, (Type * source, Type * dest));
IL2CPP_REGISTER_METHOD(0x01F973B0, bool, HasReferenceConversionTo, (Type * source, Type * dest));
IL2CPP_REGISTER_METHOD(0x01F975F0, bool, IsCovariant, (Type * t));
IL2CPP_REGISTER_METHOD(0x01F97620, bool, IsContravariant, (Type * t));
IL2CPP_REGISTER_METHOD(0x01F97650, bool, IsInvariant, (Type * t));
IL2CPP_REGISTER_METHOD(0x01F97680, bool, IsDelegate, (Type * t));
IL2CPP_REGISTER_METHOD(0x01F97750, bool, IsLegalExplicitVariantDelegateConversion, (Type * source, Type * dest));
IL2CPP_REGISTER_METHOD(0x01F97A90, bool, IsConvertible, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F97B70, bool, HasReferenceEquality, (Type * left, Type * right));
IL2CPP_REGISTER_METHOD(0x01F97C30, bool, HasBuiltInEqualityOperator, (Type * left, Type * right));
IL2CPP_REGISTER_METHOD(0x01F97E20, bool, IsImplicitlyConvertibleTo, (Type * source, Type * destination));
IL2CPP_REGISTER_METHOD(0x01F98190, MethodInfo_1 *, GetUserDefinedCoercionMethod, (Type * convertFrom, Type * convertToType));
IL2CPP_REGISTER_METHOD(0x01F98310, MethodInfo_1 *, FindConversionOperator, (MethodInfo_1__Array * methods, Type * typeFrom, Type * typeTo));
IL2CPP_REGISTER_METHOD(0x01F98530, bool, IsImplicitNumericConversion, (Type * source, Type * destination));
IL2CPP_REGISTER_METHOD(0x01F98730, bool, IsImplicitReferenceConversion, (Type * source, Type * destination));
IL2CPP_REGISTER_METHOD(0x01F98760, bool, IsImplicitBoxingConversion, (Type * source, Type * destination));
IL2CPP_REGISTER_METHOD(0x01F988E0, bool, IsImplicitNullableConversion, (Type * source, Type * destination));
IL2CPP_REGISTER_METHOD(0x01F98940, Type *, FindGenericType, (Type * definition, Type * type));
IL2CPP_REGISTER_METHOD(0x01F98C50, MethodInfo_1 *, GetBooleanOperator, (Type * type, String * name));
IL2CPP_REGISTER_METHOD(0x01F98E30, Type *, GetNonRefType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01F98E80, bool, AreEquivalent, (Type * t1, Type * t2));
IL2CPP_REGISTER_METHOD(0x01F98F50, bool, AreReferenceAssignable, (Type * dest, Type * src));
IL2CPP_REGISTER_METHOD(0x01F98FF0, bool, IsSameOrSubclass, (Type * type, Type * subType));
IL2CPP_REGISTER_METHOD(0x01F99050, void, ValidateType, (Type * type, String * paramName));
IL2CPP_REGISTER_METHOD(0x01F99070, void, ValidateType, (Type * type, String * paramName, bool allowByRef, bool allowPointer));
IL2CPP_REGISTER_METHODINFO(0x04794228, TypeUtils_ValidateType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F991A0, bool, ValidateType, (Type * type, String * paramName, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0474E2D0, TypeUtils_ValidateType_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F992D0, Assembly *, get_MsCorLib, ());
IL2CPP_REGISTER_METHOD(0x01F993B0, bool, CanCache, (Type * t));
IL2CPP_REGISTER_METHOD(0x01F995A0, MethodInfo_1 *, GetInvokeMethod, (Type * delegateType));
}
