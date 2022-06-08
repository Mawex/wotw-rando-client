using namespace app;

namespace app::methods::OperationUtils {
IL2CPP_REGISTER_METHOD(0x031137A0, float, Operate, (float a, float b, OperationMethod__Enum om, float delta));
IL2CPP_REGISTER_METHOD(0x031137F0, int32_t, Operate, (int32_t a, int32_t b, OperationMethod__Enum om));
IL2CPP_REGISTER_METHOD(0x03113830, Vector3, Operate, (Vector3 a, Vector3 b, OperationMethod__Enum om));
IL2CPP_REGISTER_METHOD(0x03113AB0, String *, GetOperationString, (OperationMethod__Enum om));
}
