/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.0.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "FreeStyleProjectactions.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

FreeStyleProjectactions::FreeStyleProjectactions()
{
    m__class = "";
    m__classIsSet = false;
    
}

FreeStyleProjectactions::~FreeStyleProjectactions()
{
}

void FreeStyleProjectactions::validate()
{
    // TODO: implement validation
}

nlohmann::json FreeStyleProjectactions::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void FreeStyleProjectactions::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    
}


std::string FreeStyleProjectactions::getClass() const
{
    return m__class;
}
void FreeStyleProjectactions::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool FreeStyleProjectactions::classIsSet() const
{
    return m__classIsSet;
}
void FreeStyleProjectactions::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
