using namespace app;

namespace app::methods::MS::Internal::Xml::Cache::XPathNodeHelper {
IL2CPP_REGISTER_METHOD(0x021D8020, int32_t, GetLocalNamespaces, (XPathNode__Array * pageElem, int32_t idxElem, XPathNode__Array * * pageNmsp));
IL2CPP_REGISTER_METHOD(0x021D80B0, int32_t, GetInScopeNamespaces, (XPathNode__Array * pageElem, int32_t idxElem, XPathNode__Array * * pageNmsp));
IL2CPP_REGISTER_METHOD(0x021D81D0, bool, GetParent, (XPathNode__Array * * pageNode, int32_t * idxNode));
IL2CPP_REGISTER_METHOD(0x021D8240, int32_t, GetLocation, (XPathNode__Array * pageNode, int32_t idxNode));
IL2CPP_REGISTER_METHOD(0x021D82A0, bool, GetTextFollowing, (XPathNode__Array * * pageCurrent, int32_t * idxCurrent, XPathNode__Array * pageEnd, int32_t idxEnd));
IL2CPP_REGISTER_METHOD(0x021D8470, bool, GetNonDescendant, (XPathNode__Array * * pageNode, int32_t * idxNode));
}
