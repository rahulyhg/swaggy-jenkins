/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#include "StringParameterDefinition.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

StringParameterDefinition::StringParameterDefinition()
{
    m__class = "";
    m__classIsSet = false;
    m_DefaultParameterValueIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_Type = "";
    m_TypeIsSet = false;
    
}

StringParameterDefinition::~StringParameterDefinition()
{
}

void StringParameterDefinition::validate()
{
    // TODO: implement validation
}

nlohmann::json StringParameterDefinition::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_DefaultParameterValueIsSet)
    {
        val["defaultParameterValue"] = ModelBase::toJson(m_DefaultParameterValue);
    }
    if(m_DescriptionIsSet)
    {
        val["description"] = ModelBase::toJson(m_Description);
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val["type"] = ModelBase::toJson(m_Type);
    }
    

    return val;
}

void StringParameterDefinition::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    if(val.find("defaultParameterValue") != val.end())
    {
        if(!val["defaultParameterValue"].is_null())
        {
            std::shared_ptr<StringParameterValue> newItem(new StringParameterValue());
            newItem->fromJson(val["defaultParameterValue"]);
            setDefaultParameterValue( newItem );
        }
        
    }
    if(val.find("description") != val.end())
    {
        setDescription(val.at("description"));
        
    }
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
        
    }
    if(val.find("type") != val.end())
    {
        setType(val.at("type"));
        
    }
    
}


std::string StringParameterDefinition::getClass() const
{
    return m__class;
}
void StringParameterDefinition::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool StringParameterDefinition::classIsSet() const
{
    return m__classIsSet;
}
void StringParameterDefinition::unset_class()
{
    m__classIsSet = false;
}
std::shared_ptr<StringParameterValue> StringParameterDefinition::getDefaultParameterValue() const
{
    return m_DefaultParameterValue;
}
void StringParameterDefinition::setDefaultParameterValue(std::shared_ptr<StringParameterValue> value)
{
    m_DefaultParameterValue = value;
    m_DefaultParameterValueIsSet = true;
}
bool StringParameterDefinition::defaultParameterValueIsSet() const
{
    return m_DefaultParameterValueIsSet;
}
void StringParameterDefinition::unsetDefaultParameterValue()
{
    m_DefaultParameterValueIsSet = false;
}
std::string StringParameterDefinition::getDescription() const
{
    return m_Description;
}
void StringParameterDefinition::setDescription(std::string value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool StringParameterDefinition::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void StringParameterDefinition::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::string StringParameterDefinition::getName() const
{
    return m_Name;
}
void StringParameterDefinition::setName(std::string value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool StringParameterDefinition::nameIsSet() const
{
    return m_NameIsSet;
}
void StringParameterDefinition::unsetName()
{
    m_NameIsSet = false;
}
std::string StringParameterDefinition::getType() const
{
    return m_Type;
}
void StringParameterDefinition::setType(std::string value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool StringParameterDefinition::typeIsSet() const
{
    return m_TypeIsSet;
}
void StringParameterDefinition::unsetType()
{
    m_TypeIsSet = false;
}

}
}
}
}
