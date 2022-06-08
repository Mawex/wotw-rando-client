using namespace app;

namespace app::methods::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler {
IL2CPP_REGISTER_METHOD(0x02415020, bool, get_IsFinallyBlockExist, (TryCatchFinallyHandler * __this));
IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_IsCatchBlockExist, (TryCatchFinallyHandler * __this));
IL2CPP_REGISTER_METHOD(0x02415030, void, __ctor, (TryCatchFinallyHandler * __this, int32_t tryStart, int32_t tryEnd, int32_t gotoEndTargetIndex, ExceptionHandler__Array * handlers));
IL2CPP_REGISTER_METHOD(0x02415060, void, __ctor, (TryCatchFinallyHandler * __this, int32_t tryStart, int32_t tryEnd, int32_t gotoEndLabelIndex, int32_t finallyStart, int32_t finallyEnd, ExceptionHandler__Array * handlers));
IL2CPP_REGISTER_METHOD(0x02415090, bool, HasHandler, (TryCatchFinallyHandler * __this, InterpretedFrame * frame, Exception * exception, ExceptionHandler * * handler, Object * * unwrappedException));
IL2CPP_REGISTER_METHOD(0x02415260, bool, FilterPasses, (InterpretedFrame * frame, Object * * exception, ExceptionFilter * filter));
}
