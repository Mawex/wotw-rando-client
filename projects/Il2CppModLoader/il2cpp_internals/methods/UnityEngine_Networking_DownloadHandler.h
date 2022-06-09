#include <interception_macros.h>

namespace app::methods::UnityEngine_Networking::DownloadHandler {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0317DD40, void, Release, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0317DD90, void, Finalize, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0317DE20, void, Dispose, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, Byte__Array *, get_data, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x015A1590, String *, get_text, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Byte__Array *, GetData, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0317DEF0, String *, GetText, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0317DFE0, Encoding *, GetTextEncoder, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0317E2D0, String *, GetContentType, (app::DownloadHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x0317E320, Byte__Array *, InternalGetByteArray, (app::DownloadHandler * dh));
}
