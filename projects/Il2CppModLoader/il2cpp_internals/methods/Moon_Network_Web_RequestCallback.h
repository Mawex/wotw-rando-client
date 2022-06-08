#include <interception_macros.h>

namespace app::methods::Moon::Network::Web::RequestCallback {
IL2CPP_REGISTER_METHOD(0x02E97F50, void, SetResponse, (RequestCallback * __this, WebResponse_1 * response));
IL2CPP_REGISTER_METHOD(0x02E98040, void, SetDataWriter, (RequestCallback * __this, IDataWriter * dataWriter));
IL2CPP_REGISTER_METHOD(0x01DAE080, Byte__Array *, get_Data, (RequestCallback * __this));
IL2CPP_REGISTER_METHOD(0x02E980F0, String *, get_DataAsText, (RequestCallback * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, WebResponse_1 *, get_Response, (RequestCallback * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IRequest *, get_Request, (RequestCallback * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Request, (RequestCallback * __this, IRequest * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RequestCallback * __this));
}
