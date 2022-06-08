using namespace app;

namespace app::methods::System::Reflection::RuntimeAssembly {
IL2CPP_REGISTER_METHOD(0x026968D0, void, GetObjectData, (RuntimeAssembly * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04732838, RuntimeAssembly_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026969C0, RuntimeAssembly *, LoadWithPartialNameInternal, (String * partialName, Evidence * securityEvidence, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02696AB0, RuntimeAssembly *, LoadWithPartialNameInternal, (AssemblyName * an, Evidence * securityEvidence, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02696B00, AssemblyName *, GetName, (RuntimeAssembly * __this, bool copiedName));
IL2CPP_REGISTER_METHOD(0x02280FB0, void, __ctor, (RuntimeAssembly * __this));
}
