using namespace app;

namespace app::methods::Newtonsoft::Json::Converters::DataTableConverter {
IL2CPP_REGISTER_METHOD(0x01A4F350, void, WriteJson, (DataTableConverter * __this, JsonWriter * writer, Object * value, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A4F910, Object *, ReadJson, (DataTableConverter * __this, JsonReader * reader, Type * objectType, Object * existingValue, JsonSerializer * serializer));
IL2CPP_REGISTER_METHODINFO(0x0475BB60, DataTableConverter_ReadJson__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4FCC0, void, CreateRow, (JsonReader * reader, DataTable * dt, JsonSerializer * serializer));
IL2CPP_REGISTER_METHOD(0x01A50400, Type *, GetColumnDataType, (JsonReader * reader));
IL2CPP_REGISTER_METHODINFO(0x04790328, DataTableConverter_GetColumnDataType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A50630, bool, CanConvert, (DataTableConverter * __this, Type * valueType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DataTableConverter * __this));
}
