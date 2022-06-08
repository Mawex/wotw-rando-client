#include <interception_macros.h>

namespace app::methods::XMLHelper {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XMLHelper * __this));
IL2CPP_REGISTER_METHOD(0x01542280, String *, ConvertToXML, (Object * objectToConvert));
IL2CPP_REGISTER_METHOD(0x015E6D80, void, WriteToXMLFile, (Object * target, String * filePath));
IL2CPP_REGISTER_METHOD(0x0157DDC0, Object *, LoadFromXMLString, (String * xmlText));
IL2CPP_REGISTER_METHOD(0x01542280, String *, ConvertToXML, (List_1_TimesliceJobTracker_TimesliceJobSample_ * objectToConvert));
IL2CPP_REGISTER_METHODINFO(0x0473E4F0, XMLHelper_ConvertToXML_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6D80, void, WriteToXMLFile, (List_1_TimesliceJobTracker_TimesliceJobSample_ * target, String * filePath));
IL2CPP_REGISTER_METHODINFO(0x04719D58, XMLHelper_WriteToXMLFile_1__MethodInfo);
}
