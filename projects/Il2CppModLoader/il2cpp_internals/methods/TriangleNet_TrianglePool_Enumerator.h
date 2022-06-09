#include <interception_macros.h>

namespace app::methods::TriangleNet::TrianglePool_Enumerator {
IL2CPP_REGISTER_METHOD(0x02AA7420, void, __ctor, (app::TrianglePool_Enumerator * this_ptr, app::TrianglePool * pool));
IL2CPP_REGISTER_METHOD(0x002FB950, Triangle *, get_Current, (app::TrianglePool_Enumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::TrianglePool_Enumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, IEnumerator_get_Current, (app::TrianglePool_Enumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA7470, bool, MoveNext, (app::TrianglePool_Enumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA7530, void, Reset, (app::TrianglePool_Enumerator * this_ptr));
}
