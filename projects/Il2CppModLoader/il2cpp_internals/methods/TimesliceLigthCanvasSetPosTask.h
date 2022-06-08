using namespace app;

namespace app::methods::TimesliceLigthCanvasSetPosTask {
IL2CPP_REGISTER_METHOD(0x00AF5190, void, __ctor, (TimesliceLigthCanvasSetPosTask * __this, Object_1 * source));
IL2CPP_REGISTER_METHOD(0x00AF51D0, void, Config, (TimesliceLigthCanvasSetPosTask * __this, List_1_UnityEngine_Renderer_ * targetObjects, Vector3 position, Action_1_Boolean_ * onJobCompleted));
IL2CPP_REGISTER_METHOD(0x00AF5390, void, ProcessAllObjects, (TimesliceLigthCanvasSetPosTask * __this));
IL2CPP_REGISTER_METHOD(0x00AF5450, IEnumerator *, TimeslicedSetPos, (TimesliceLigthCanvasSetPosTask * __this));
IL2CPP_REGISTER_METHOD(0x00AF55A0, void, ProcessObject, (TimesliceLigthCanvasSetPosTask * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x00AF57F0, void, Reset, (TimesliceLigthCanvasSetPosTask * __this));
IL2CPP_REGISTER_METHOD(0x00AF5820, String *, get_JobName, (TimesliceLigthCanvasSetPosTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (TimesliceLigthCanvasSetPosTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (TimesliceLigthCanvasSetPosTask * __this));
IL2CPP_REGISTER_METHOD(0x00AF58F0, void, __cctor, (MethodInfo * method));
}
