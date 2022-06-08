#include <interception_macros.h>

namespace app::methods::System::Data::Common::ObjectStorage {
IL2CPP_REGISTER_METHOD(0x0216A970, void, __ctor, (ObjectStorage * __this, DataColumn * column, Type * type));
IL2CPP_REGISTER_METHOD(0x0216AB50, Object *, Aggregate, (ObjectStorage * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0470A7E8, ObjectStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216ABA0, int32_t, Compare, (ObjectStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0216AD20, int32_t, CompareValueTo, (ObjectStorage * __this, int32_t recordNo1, Object * value));
IL2CPP_REGISTER_METHOD(0x0216AEF0, int32_t, CompareTo, (ObjectStorage * __this, Object * valueNo1, Object * valueNo2));
IL2CPP_REGISTER_METHOD(0x0216B080, int32_t, CompareWithFamilies, (ObjectStorage * __this, Object * valueNo1, Object * valueNo2));
IL2CPP_REGISTER_METHOD(0x0216B500, void, Copy, (ObjectStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x0216B5A0, Object *, Get, (ObjectStorage * __this, int32_t recordNo));
IL2CPP_REGISTER_METHOD(0x0216B5E0, ObjectStorage_Families__Enum, GetFamily, (ObjectStorage * __this, Type * dataType));
IL2CPP_REGISTER_METHOD(0x0216B780, bool, IsNull, (ObjectStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0216B7C0, void, Set, (ObjectStorage * __this, int32_t recordNo, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04777D78, ObjectStorage_Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216C490, void, SetCapacity, (ObjectStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0216C590, Object *, ConvertXmlToObject, (ObjectStorage * __this, String * s));
IL2CPP_REGISTER_METHOD(0x0216CC10, Object *, ConvertXmlToObject, (ObjectStorage * __this, XmlReader * xmlReader, XmlRootAttribute * xmlAttrib));
IL2CPP_REGISTER_METHODINFO(0x04716CE8, ObjectStorage_ConvertXmlToObject_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216D240, String *, ConvertObjectToXml, (ObjectStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0216D8B0, void, ConvertObjectToXml, (ObjectStorage * __this, Object * value, XmlWriter * xmlWriter, XmlRootAttribute * xmlAttrib));
IL2CPP_REGISTER_METHOD(0x0216DA20, Object *, GetEmptyStorage, (ObjectStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x0216DAA0, void, CopyValue, (ObjectStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x0216DDC0, void, SetStorage, (ObjectStorage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x0216E020, void, VerifyIDynamicMetaObjectProvider, (Type * type));
IL2CPP_REGISTER_METHODINFO(0x0477D340, ObjectStorage_VerifyIDynamicMetaObjectProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216E190, XmlSerializer *, GetXmlSerializer, (Type * type));
IL2CPP_REGISTER_METHOD(0x0216E270, XmlSerializer *, GetXmlSerializer, (Type * type, XmlRootAttribute * attribute));
IL2CPP_REGISTER_METHOD(0x0216EBC0, void, __cctor, ());
}
