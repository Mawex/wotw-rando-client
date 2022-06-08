using namespace app;

namespace app::methods::System::Xml::XmlTextReaderImpl_NodeData {
IL2CPP_REGISTER_METHOD(0x01FBBCD0, XmlTextReaderImpl_NodeData *, get_None, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01FBBE60, void, __ctor, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_LineNo, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_LinePos, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x01FBBE80, bool, get_IsEmptyElement, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsEmptyElement, (XmlTextReaderImpl_NodeData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01FBBE90, bool, get_IsDefaultAttribute, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsDefaultAttribute, (XmlTextReaderImpl_NodeData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01FBBEA0, bool, get_ValueBuffered, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x01FBBEB0, String *, get_StringValue, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x01FBBEF0, void, TrimSpacesInValue, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x01FBC060, void, Clear, (XmlTextReaderImpl_NodeData * __this, XmlNodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01FBC130, void, ClearName, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x01FBC200, void, SetLineInfo, (XmlTextReaderImpl_NodeData * __this, int32_t lineNo, int32_t linePos));
IL2CPP_REGISTER_METHOD(0x01FBC210, void, SetLineInfo2, (XmlTextReaderImpl_NodeData * __this, int32_t lineNo, int32_t linePos));
IL2CPP_REGISTER_METHOD(0x01FBC220, void, SetValueNode, (XmlTextReaderImpl_NodeData * __this, XmlNodeType__Enum type, String * value));
IL2CPP_REGISTER_METHOD(0x01FBC250, void, SetValueNode, (XmlTextReaderImpl_NodeData * __this, XmlNodeType__Enum type, Char__Array * chars, int32_t startPos, int32_t len));
IL2CPP_REGISTER_METHOD(0x01FBC2A0, void, SetNamedNode, (XmlTextReaderImpl_NodeData * __this, XmlNodeType__Enum type, String * localName));
IL2CPP_REGISTER_METHOD(0x01FBC360, void, SetNamedNode, (XmlTextReaderImpl_NodeData * __this, XmlNodeType__Enum type, String * localName, String * prefix, String * nameWPrefix));
IL2CPP_REGISTER_METHOD(0x01FBC440, void, SetValue, (XmlTextReaderImpl_NodeData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01FBC450, void, SetValue, (XmlTextReaderImpl_NodeData * __this, Char__Array * chars, int32_t startPos, int32_t len));
IL2CPP_REGISTER_METHOD(0x01FBC470, void, OnBufferInvalidated, (XmlTextReaderImpl_NodeData * __this));
IL2CPP_REGISTER_METHOD(0x01FBC4C0, void, CopyTo, (XmlTextReaderImpl_NodeData * __this, int32_t valueOffset, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x01FBC560, int32_t, CopyTo, (XmlTextReaderImpl_NodeData * __this, int32_t valueOffset, Char__Array * buffer, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x01FBC5E0, String *, GetNameWPrefix, (XmlTextReaderImpl_NodeData * __this, XmlNameTable * nt));
IL2CPP_REGISTER_METHOD(0x01FBC6D0, String *, CreateNameWPrefix, (XmlTextReaderImpl_NodeData * __this, XmlNameTable * nt));
IL2CPP_REGISTER_METHOD(0x01FBC7B0, int32_t, IComparable_CompareTo, (XmlTextReaderImpl_NodeData * __this, Object * obj));
}
