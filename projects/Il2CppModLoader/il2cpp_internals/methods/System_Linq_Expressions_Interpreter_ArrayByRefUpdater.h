using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::ArrayByRefUpdater {
IL2CPP_REGISTER_METHOD(0x022D5420, void, __ctor, (ArrayByRefUpdater * __this, LocalDefinition array, LocalDefinition index, int32_t argumentIndex));
IL2CPP_REGISTER_METHOD(0x022D5440, void, Update, (ArrayByRefUpdater * __this, InterpretedFrame * frame, Object * value));
IL2CPP_REGISTER_METHOD(0x022D5640, void, UndefineTemps, (ArrayByRefUpdater * __this, InstructionList * instructions, LocalVariables * locals));
}
