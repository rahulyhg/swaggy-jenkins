/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ClassesByClass.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ClassesByClass::ClassesByClass()
{
    m_ClassesIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

ClassesByClass::~ClassesByClass()
{
}

void ClassesByClass::validate()
{
    // TODO: implement validation
}

web::json::value ClassesByClass::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Classes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("classes")] = web::json::value::array(jsonArray);
        }
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void ClassesByClass::fromJson(web::json::value& val)
{
    {
        m_Classes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("classes")))
        {
        for( auto& item : val[utility::conversions::to_string_t("classes")].as_array() )
        {
            m_Classes.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void ClassesByClass::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Classes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("classes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void ClassesByClass::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Classes.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("classes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("classes"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Classes.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

std::vector<utility::string_t>& ClassesByClass::getClasses()
{
    return m_Classes;
}

void ClassesByClass::setClasses(std::vector<utility::string_t> value)
{
    m_Classes = value;
    m_ClassesIsSet = true;
}
bool ClassesByClass::classesIsSet() const
{
    return m_ClassesIsSet;
}

void ClassesByClass::unsetClasses()
{
    m_ClassesIsSet = false;
}

utility::string_t ClassesByClass::getClass() const
{
    return m__class;
}


void ClassesByClass::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool ClassesByClass::_classIsSet() const
{
    return m__classIsSet;
}

void ClassesByClass::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
