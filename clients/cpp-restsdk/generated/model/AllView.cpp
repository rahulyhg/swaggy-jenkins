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



#include "AllView.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

AllView::AllView()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
}

AllView::~AllView()
{
}

void AllView::validate()
{
    // TODO: implement validation
}

web::json::value AllView::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }

    return val;
}

void AllView::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        setUrl(ModelBase::stringFromJson(val[utility::conversions::to_string_t("url")]));
    }
}

void AllView::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
}

void AllView::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("url"))));
    }
}

utility::string_t AllView::getClass() const
{
    return m__class;
}


void AllView::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool AllView::_classIsSet() const
{
    return m__classIsSet;
}

void AllView::unset_class()
{
    m__classIsSet = false;
}

utility::string_t AllView::getName() const
{
    return m_Name;
}


void AllView::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool AllView::nameIsSet() const
{
    return m_NameIsSet;
}

void AllView::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t AllView::getUrl() const
{
    return m_Url;
}


void AllView::setUrl(utility::string_t value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool AllView::urlIsSet() const
{
    return m_UrlIsSet;
}

void AllView::unsetUrl()
{
    m_UrlIsSet = false;
}

}
}
}
}

