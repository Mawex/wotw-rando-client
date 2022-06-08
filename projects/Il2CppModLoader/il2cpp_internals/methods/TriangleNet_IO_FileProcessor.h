#include <interception_macros.h>

namespace app::methods::TriangleNet::IO::FileProcessor {
IL2CPP_REGISTER_METHOD(0x02620610, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02620850, void, Add, (IFileFormat * format));
IL2CPP_REGISTER_METHOD(0x02620910, bool, IsSupported, (String * file));
IL2CPP_REGISTER_METHOD(0x02620AE0, IPolygon *, Read, (String * filename));
IL2CPP_REGISTER_METHODINFO(0x0470D608, FileProcessor_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02620D20, void, Write, (IPolygon * polygon, String * filename));
IL2CPP_REGISTER_METHODINFO(0x04773DA0, FileProcessor_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02620F60, IMesh *, Import, (String * filename));
IL2CPP_REGISTER_METHODINFO(0x047329A0, FileProcessor_Import__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026211A0, void, Write, (IMesh * mesh, String * filename));
IL2CPP_REGISTER_METHODINFO(0x0471B658, FileProcessor_Write_1__MethodInfo);
}
