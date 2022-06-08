using namespace app;

namespace app::methods::UnityEngine::SendMouseEvents {
IL2CPP_REGISTER_METHOD(0x0297B270, void, SetMouseMoved, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0297B310, void, HitTestLegacyGUI, (Camera * camera, Vector3 mousePosition, SendMouseEvents_HitInfo * hitInfo));
IL2CPP_REGISTER_METHOD(0x0297B4C0, void, DoSendMouseEvents, (int32_t skipRTCameras));
IL2CPP_REGISTER_METHOD(0x0297C3D0, void, SendEvents, (int32_t i, SendMouseEvents_HitInfo hit));
IL2CPP_REGISTER_METHOD(0x0297CC00, void, __cctor, (MethodInfo * method));
}
