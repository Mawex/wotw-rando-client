#include <interception_macros.h>

namespace app::methods::Mono::Math::BigInteger_ModulusRing {
IL2CPP_REGISTER_METHOD(0x023CC160, void, __ctor, (BigInteger_ModulusRing * __this, BigInteger * modulus));
IL2CPP_REGISTER_METHOD(0x023CC370, void, BarrettReduction, (BigInteger_ModulusRing * __this, BigInteger * x));
IL2CPP_REGISTER_METHODINFO(0x0471B3C8, BigInteger_ModulusRing_BarrettReduction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CC8E0, BigInteger *, Multiply, (BigInteger_ModulusRing * __this, BigInteger * a, BigInteger * b));
IL2CPP_REGISTER_METHOD(0x023CCB70, BigInteger *, Difference, (BigInteger_ModulusRing * __this, BigInteger * a, BigInteger * b));
IL2CPP_REGISTER_METHODINFO(0x04793F98, BigInteger_ModulusRing_Difference__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CCDD0, BigInteger *, Pow, (BigInteger_ModulusRing * __this, BigInteger * a, BigInteger * k));
IL2CPP_REGISTER_METHOD(0x023CCFE0, BigInteger *, Pow, (BigInteger_ModulusRing * __this, uint32_t b, BigInteger * exp));
IL2CPP_REGISTER_METHOD(0x02A343B0, void, __ctor, (BigInteger_ModulusRing_1 * __this, BigInteger_1 * modulus));
IL2CPP_REGISTER_METHOD(0x02A345C0, void, BarrettReduction, (BigInteger_ModulusRing_1 * __this, BigInteger_1 * x));
IL2CPP_REGISTER_METHODINFO(0x04775700, BigInteger_ModulusRing_1_BarrettReduction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A34B30, BigInteger_1 *, Multiply, (BigInteger_ModulusRing_1 * __this, BigInteger_1 * a, BigInteger_1 * b));
IL2CPP_REGISTER_METHOD(0x02A34DC0, BigInteger_1 *, Difference, (BigInteger_ModulusRing_1 * __this, BigInteger_1 * a, BigInteger_1 * b));
IL2CPP_REGISTER_METHODINFO(0x04767CC8, BigInteger_ModulusRing_1_Difference__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A35020, BigInteger_1 *, Pow, (BigInteger_ModulusRing_1 * __this, BigInteger_1 * a, BigInteger_1 * k));
IL2CPP_REGISTER_METHOD(0x02A35230, BigInteger_1 *, Pow, (BigInteger_ModulusRing_1 * __this, uint32_t b, BigInteger_1 * exp));
}
