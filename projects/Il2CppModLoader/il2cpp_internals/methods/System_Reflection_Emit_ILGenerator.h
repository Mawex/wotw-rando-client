#include <interception_macros.h>

namespace app::methods::System::Reflection::Emit::ILGenerator {
IL2CPP_REGISTER_METHOD(0x02680C20, LocalBuilder *, DeclareLocal, (ILGenerator * __this, Type * localType));
IL2CPP_REGISTER_METHODINFO(0x0471C278, ILGenerator_DeclareLocal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680C70, Label, DefineLabel, (ILGenerator * __this));
IL2CPP_REGISTER_METHODINFO(0x047208B8, ILGenerator_DefineLabel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680CC0, void, Emit, (ILGenerator * __this, OpCode opcode));
IL2CPP_REGISTER_METHODINFO(0x0476E140, ILGenerator_Emit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680D10, void, Emit, (ILGenerator * __this, OpCode opcode, int32_t arg));
IL2CPP_REGISTER_METHODINFO(0x0470EF38, ILGenerator_Emit_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680D60, void, Emit, (ILGenerator * __this, OpCode opcode, ConstructorInfo * con));
IL2CPP_REGISTER_METHODINFO(0x04784DC8, ILGenerator_Emit_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680DB0, void, Emit, (ILGenerator * __this, OpCode opcode, Label label));
IL2CPP_REGISTER_METHODINFO(0x04789238, ILGenerator_Emit_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680E00, void, Emit, (ILGenerator * __this, OpCode opcode, LocalBuilder * local));
IL2CPP_REGISTER_METHODINFO(0x0477F930, ILGenerator_Emit_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680E50, void, Emit, (ILGenerator * __this, OpCode opcode, FieldInfo_1 * field));
IL2CPP_REGISTER_METHODINFO(0x04790C38, ILGenerator_Emit_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680EA0, void, Emit, (ILGenerator * __this, OpCode opcode, MethodInfo_1 * meth));
IL2CPP_REGISTER_METHODINFO(0x04736928, ILGenerator_Emit_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680EF0, void, Emit, (ILGenerator * __this, OpCode opcode, Type * cls));
IL2CPP_REGISTER_METHODINFO(0x0478AFF0, ILGenerator_Emit_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02680F40, void, MarkLabel, (ILGenerator * __this, Label loc));
IL2CPP_REGISTER_METHODINFO(0x04751D38, ILGenerator_MarkLabel__MethodInfo);
}
