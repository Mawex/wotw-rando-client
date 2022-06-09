#include <interception_macros.h>

namespace app::methods::Mono::Math::BigInteger {
    IL2CPP_REGISTER_METHOD(0x023C5490, void, __ctor_1, (app::BigInteger * this_ptr, app::BigInteger_Sign__Enum sign, uint32_t len));
    IL2CPP_REGISTER_METHOD(0x023C5530, void, __ctor_2, (app::BigInteger * this_ptr, app::BigInteger * bi));
    IL2CPP_REGISTER_METHOD(0x023C56A0, void, __ctor_3, (app::BigInteger * this_ptr, app::BigInteger * bi, uint32_t len));
    IL2CPP_REGISTER_METHOD(0x023C57C0, void, __ctor_4, (app::BigInteger * this_ptr, app::Byte__Array * in_data));
    IL2CPP_REGISTER_METHOD(0x023C5BA0, void, __ctor_5, (app::BigInteger * this_ptr, uint32_t ui));
    IL2CPP_REGISTER_METHOD(0x023C5C60, app::BigInteger *, op_Implicit_1, (uint32_t value));
    IL2CPP_REGISTER_METHOD(0x023C5DB0, app::BigInteger *, op_Implicit_2, (int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x04791F48, BigInteger_op_Implicit_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C5F30, app::BigInteger *, op_Addition_1, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C61C0, app::BigInteger *, op_Subtraction_1, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHODINFO(0x047347D0, BigInteger_op_Subtraction__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C6480, uint32_t, op_Modulus_1, (app::BigInteger * bi, uint32_t ui));
    IL2CPP_REGISTER_METHOD(0x023C64F0, app::BigInteger *, op_Modulus_2, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C6530, app::BigInteger *, op_Division_1, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C6570, app::BigInteger *, op_Multiply_1, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHODINFO(0x04779D90, BigInteger_op_Multiply__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C6880, app::BigInteger *, op_Multiply_2, (app::BigInteger * bi, int32_t i));
    IL2CPP_REGISTER_METHODINFO(0x04715198, BigInteger_op_Multiply_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C6A70, app::BigInteger *, op_LeftShift_1, (app::BigInteger * bi1, int32_t shift_val));
    IL2CPP_REGISTER_METHOD(0x023C6A80, app::BigInteger *, op_RightShift_1, (app::BigInteger * bi1, int32_t shift_val));
    IL2CPP_REGISTER_METHOD(0x023C6A90, app::RandomNumberGenerator *, get_Rng_1, ());
    IL2CPP_REGISTER_METHOD(0x023C6BB0, app::BigInteger *, GenerateRandom_1, (int32_t bits, app::RandomNumberGenerator * rng));
    IL2CPP_REGISTER_METHOD(0x023C6EB0, app::BigInteger *, GenerateRandom_2, (int32_t bits));
    IL2CPP_REGISTER_METHOD(0x023C6F60, void, Randomize_1, (app::BigInteger * this_ptr, app::RandomNumberGenerator * rng));
    IL2CPP_REGISTER_METHOD(0x023C71D0, void, Randomize_2, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C7280, int32_t, BitCount_1, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C7360, bool, TestBit_1, (app::BigInteger * this_ptr, uint32_t bit_num));
    IL2CPP_REGISTER_METHOD(0x023C73B0, bool, TestBit_2, (app::BigInteger * this_ptr, int32_t bit_num));
    IL2CPP_REGISTER_METHODINFO(0x04709E18, BigInteger_TestBit_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C74B0, void, SetBit_1, (app::BigInteger * this_ptr, uint32_t bit_num));
    IL2CPP_REGISTER_METHOD(0x023C7500, void, SetBit_2, (app::BigInteger * this_ptr, uint32_t bit_num, bool value));
    IL2CPP_REGISTER_METHOD(0x023C7590, int32_t, LowestSetBit_1, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C7670, app::Byte__Array *, GetBytes_1, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C7800, bool, op_Equality_1, (app::BigInteger * bi1, uint32_t ui));
    IL2CPP_REGISTER_METHOD(0x023C78B0, bool, op_Inequality_1, (app::BigInteger * bi1, uint32_t ui));
    IL2CPP_REGISTER_METHOD(0x023C7960, bool, op_Equality_2, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7A80, bool, op_Inequality_2, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7BA0, bool, op_GreaterThan_1, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7BC0, bool, op_LessThan_1, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7BE0, bool, op_GreaterThanOrEqual_1, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7C00, bool, op_LessThanOrEqual_1, (app::BigInteger * bi1, app::BigInteger * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7C20, app::String *, ToString_1, (app::BigInteger * this_ptr, uint32_t radix));
    IL2CPP_REGISTER_METHOD(0x023C7CC0, app::String *, ToString_2, (app::BigInteger * this_ptr, uint32_t radix, app::String * character_set));
    IL2CPP_REGISTER_METHODINFO(0x0477CD68, BigInteger_ToString_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C8180, void, Normalize_1, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C81E0, void, Clear_1, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C8240, int32_t, GetHashCode_1, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C8290, app::String *, ToString_3, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C8320, bool, Equals_1, (app::BigInteger * this_ptr, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x023C84D0, app::BigInteger *, ModInverse_1, (app::BigInteger * this_ptr, app::BigInteger * modulus));
    IL2CPP_REGISTER_METHOD(0x023C84E0, app::BigInteger *, ModPow_1, (app::BigInteger * this_ptr, app::BigInteger * exp, app::BigInteger * n));
    IL2CPP_REGISTER_METHOD(0x023C8660, bool, IsProbablePrime, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C8930, app::BigInteger *, GeneratePseudoPrime_1, (int32_t bits));
    IL2CPP_REGISTER_METHOD(0x023C8A90, void, Incr2_1, (app::BigInteger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C8BD0, void, __cctor_1, ());
    IL2CPP_REGISTER_METHOD(0x02A2F0F0, void, __ctor_6, (app::BigInteger_1 * this_ptr, app::BigInteger_Sign__Enum_1 sign, uint32_t len));
    IL2CPP_REGISTER_METHOD(0x02A2F190, void, __ctor_7, (app::BigInteger_1 * this_ptr, app::BigInteger_1 * bi));
    IL2CPP_REGISTER_METHOD(0x02A2F300, void, __ctor_8, (app::BigInteger_1 * this_ptr, app::BigInteger_1 * bi, uint32_t len));
    IL2CPP_REGISTER_METHOD(0x02A2F420, void, __ctor_9, (app::BigInteger_1 * this_ptr, app::Byte__Array * in_data));
    IL2CPP_REGISTER_METHOD(0x02A2F800, void, __ctor_10, (app::BigInteger_1 * this_ptr, uint32_t ui));
    IL2CPP_REGISTER_METHOD(0x02A2F8C0, app::BigInteger_1 *, op_Implicit_3, (uint32_t value));
    IL2CPP_REGISTER_METHOD(0x02A2FA10, app::BigInteger_1 *, op_Implicit_4, (int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x0474D650, BigInteger_1_op_Implicit_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A2FB90, app::BigInteger_1 *, op_Addition_2, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x02A2FE20, app::BigInteger_1 *, op_Subtraction_2, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHODINFO(0x04705070, BigInteger_1_op_Subtraction__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C6480, uint32_t, op_Modulus_3, (app::BigInteger_1 * bi, uint32_t ui));
    IL2CPP_REGISTER_METHOD(0x02A300E0, app::BigInteger_1 *, op_Modulus_4, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x02A30120, app::BigInteger_1 *, op_Division_2, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x02A30160, app::BigInteger_1 *, op_Multiply_3, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHODINFO(0x04782AA8, BigInteger_1_op_Multiply__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A30470, app::BigInteger_1 *, op_LeftShift_2, (app::BigInteger_1 * bi1, int32_t shift_val));
    IL2CPP_REGISTER_METHOD(0x02A30480, app::BigInteger_1 *, op_RightShift_2, (app::BigInteger_1 * bi1, int32_t shift_val));
    IL2CPP_REGISTER_METHOD(0x02A30490, app::RandomNumberGenerator *, get_Rng_2, ());
    IL2CPP_REGISTER_METHOD(0x02A305B0, app::BigInteger_1 *, GenerateRandom_3, (int32_t bits, app::RandomNumberGenerator * rng));
    IL2CPP_REGISTER_METHOD(0x02A308B0, app::BigInteger_1 *, GenerateRandom_4, (int32_t bits));
    IL2CPP_REGISTER_METHOD(0x023C7280, int32_t, BitCount_2, (app::BigInteger_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A30A50, bool, TestBit_3, (app::BigInteger_1 * this_ptr, int32_t bit_num));
    IL2CPP_REGISTER_METHODINFO(0x04786D00, BigInteger_1_TestBit__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C74B0, void, SetBit_3, (app::BigInteger_1 * this_ptr, uint32_t bit_num));
    IL2CPP_REGISTER_METHOD(0x023C7500, void, SetBit_4, (app::BigInteger_1 * this_ptr, uint32_t bit_num, bool value));
    IL2CPP_REGISTER_METHOD(0x02A30B50, int32_t, LowestSetBit_2, (app::BigInteger_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A30C30, app::Byte__Array *, GetBytes_2, (app::BigInteger_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C7800, bool, op_Equality_3, (app::BigInteger_1 * bi1, uint32_t ui));
    IL2CPP_REGISTER_METHOD(0x023C78B0, bool, op_Inequality_3, (app::BigInteger_1 * bi1, uint32_t ui));
    IL2CPP_REGISTER_METHOD(0x02A30DC0, bool, op_Equality_4, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x02A30EE0, bool, op_Inequality_4, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7BA0, bool, op_GreaterThan_2, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7BC0, bool, op_LessThan_2, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7BE0, bool, op_GreaterThanOrEqual_2, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x023C7C00, bool, op_LessThanOrEqual_2, (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2));
    IL2CPP_REGISTER_METHOD(0x02A31000, app::String *, ToString_4, (app::BigInteger_1 * this_ptr, uint32_t radix));
    IL2CPP_REGISTER_METHOD(0x02A310A0, app::String *, ToString_5, (app::BigInteger_1 * this_ptr, uint32_t radix, app::String * character_set));
    IL2CPP_REGISTER_METHODINFO(0x0474C740, BigInteger_1_ToString_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023C8180, void, Normalize_2, (app::BigInteger_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C81E0, void, Clear_2, (app::BigInteger_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023C8240, int32_t, GetHashCode_2, (app::BigInteger_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A31560, app::String *, ToString_6, (app::BigInteger_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A315F0, bool, Equals_2, (app::BigInteger_1 * this_ptr, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x02A317A0, app::BigInteger_1 *, ModInverse_2, (app::BigInteger_1 * this_ptr, app::BigInteger_1 * modulus));
    IL2CPP_REGISTER_METHOD(0x02A317B0, app::BigInteger_1 *, ModPow_2, (app::BigInteger_1 * this_ptr, app::BigInteger_1 * exp, app::BigInteger_1 * n));
    IL2CPP_REGISTER_METHOD(0x02A31930, app::BigInteger_1 *, GeneratePseudoPrime_2, (int32_t bits));
    IL2CPP_REGISTER_METHOD(0x023C8A90, void, Incr2_2, (app::BigInteger_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A31A90, void, __cctor_2, ());
    operator + (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_Addition(bi1, bi2);
    }
    operator - (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_Subtraction(bi1, bi2);
    }
    operator % (app::BigInteger * bi, uint32_t ui) {
        return op_Modulus(bi, ui);
    }
    operator % (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_Modulus(bi1, bi2);
    }
    operator / (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_Division(bi1, bi2);
    }
    operator * (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_Multiply(bi1, bi2);
    }
    operator * (app::BigInteger * bi, int32_t i) {
        return op_Multiply(bi, i);
    }
    operator << (app::BigInteger * bi1, int32_t shift_val) {
        return op_LeftShift(bi1, shift_val);
    }
    operator >> (app::BigInteger * bi1, int32_t shift_val) {
        return op_RightShift(bi1, shift_val);
    }
    operator == (app::BigInteger * bi1, uint32_t ui) {
        return op_Equality(bi1, ui);
    }
    operator != (app::BigInteger * bi1, uint32_t ui) {
        return op_Inequality(bi1, ui);
    }
    operator == (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_Equality(bi1, bi2);
    }
    operator != (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_Inequality(bi1, bi2);
    }
    operator > (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_GreaterThan(bi1, bi2);
    }
    operator < (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_LessThan(bi1, bi2);
    }
    operator >= (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_GreaterThanOrEqual(bi1, bi2);
    }
    operator <= (app::BigInteger * bi1, app::BigInteger * bi2) {
        return op_LessThanOrEqual(bi1, bi2);
    }
    operator + (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_Addition(bi1, bi2);
    }
    operator - (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_Subtraction(bi1, bi2);
    }
    operator % (app::BigInteger_1 * bi, uint32_t ui) {
        return op_Modulus(bi, ui);
    }
    operator % (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_Modulus(bi1, bi2);
    }
    operator / (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_Division(bi1, bi2);
    }
    operator * (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_Multiply(bi1, bi2);
    }
    operator << (app::BigInteger_1 * bi1, int32_t shift_val) {
        return op_LeftShift(bi1, shift_val);
    }
    operator >> (app::BigInteger_1 * bi1, int32_t shift_val) {
        return op_RightShift(bi1, shift_val);
    }
    operator == (app::BigInteger_1 * bi1, uint32_t ui) {
        return op_Equality(bi1, ui);
    }
    operator != (app::BigInteger_1 * bi1, uint32_t ui) {
        return op_Inequality(bi1, ui);
    }
    operator == (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_Equality(bi1, bi2);
    }
    operator != (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_Inequality(bi1, bi2);
    }
    operator > (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_GreaterThan(bi1, bi2);
    }
    operator < (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_LessThan(bi1, bi2);
    }
    operator >= (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_GreaterThanOrEqual(bi1, bi2);
    }
    operator <= (app::BigInteger_1 * bi1, app::BigInteger_1 * bi2) {
        return op_LessThanOrEqual(bi1, bi2);
    }
}
