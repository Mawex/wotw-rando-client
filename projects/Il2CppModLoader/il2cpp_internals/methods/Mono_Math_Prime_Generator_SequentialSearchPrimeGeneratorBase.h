#include <interception_macros.h>

namespace app::methods::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase {
IL2CPP_REGISTER_METHOD(0x023CD2B0, BigInteger *, GenerateSearchBase, (SequentialSearchPrimeGeneratorBase * __this, int32_t bits, Object * context));
IL2CPP_REGISTER_METHOD(0x01F938C0, BigInteger *, GenerateNewPrime, (SequentialSearchPrimeGeneratorBase * __this, int32_t bits));
IL2CPP_REGISTER_METHOD(0x023CD390, BigInteger *, GenerateNewPrime, (SequentialSearchPrimeGeneratorBase * __this, int32_t bits, Object * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsPrimeAcceptable, (SequentialSearchPrimeGeneratorBase * __this, BigInteger * bi, Object * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SequentialSearchPrimeGeneratorBase * __this));
IL2CPP_REGISTER_METHOD(0x02A354F0, BigInteger_1 *, GenerateSearchBase, (SequentialSearchPrimeGeneratorBase_1 * __this, int32_t bits, Object * context));
IL2CPP_REGISTER_METHOD(0x01F938C0, BigInteger_1 *, GenerateNewPrime, (SequentialSearchPrimeGeneratorBase_1 * __this, int32_t bits));
IL2CPP_REGISTER_METHOD(0x02A355D0, BigInteger_1 *, GenerateNewPrime, (SequentialSearchPrimeGeneratorBase_1 * __this, int32_t bits, Object * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsPrimeAcceptable, (SequentialSearchPrimeGeneratorBase_1 * __this, BigInteger_1 * bi, Object * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SequentialSearchPrimeGeneratorBase_1 * __this));
}
