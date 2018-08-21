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



#include "BranchImplpermissions.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

BranchImplpermissions::BranchImplpermissions()
{
    m_Create = false;
    m_CreateIsSet = false;
    m_Read = false;
    m_ReadIsSet = false;
    m_Start = false;
    m_StartIsSet = false;
    m_Stop = false;
    m_StopIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

BranchImplpermissions::~BranchImplpermissions()
{
}

void BranchImplpermissions::validate()
{
    // TODO: implement validation
}

web::json::value BranchImplpermissions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CreateIsSet)
    {
        val[utility::conversions::to_string_t("create")] = ModelBase::toJson(m_Create);
    }
    if(m_ReadIsSet)
    {
        val[utility::conversions::to_string_t("read")] = ModelBase::toJson(m_Read);
    }
    if(m_StartIsSet)
    {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(m_Start);
    }
    if(m_StopIsSet)
    {
        val[utility::conversions::to_string_t("stop")] = ModelBase::toJson(m_Stop);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void BranchImplpermissions::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("create")))
    {
        setCreate(ModelBase::boolFromJson(val[utility::conversions::to_string_t("create")]));
    }
    if(val.has_field(utility::conversions::to_string_t("read")))
    {
        setRead(ModelBase::boolFromJson(val[utility::conversions::to_string_t("read")]));
    }
    if(val.has_field(utility::conversions::to_string_t("start")))
    {
        setStart(ModelBase::boolFromJson(val[utility::conversions::to_string_t("start")]));
    }
    if(val.has_field(utility::conversions::to_string_t("stop")))
    {
        setStop(ModelBase::boolFromJson(val[utility::conversions::to_string_t("stop")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void BranchImplpermissions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CreateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("create"), m_Create));
    }
    if(m_ReadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("read"), m_Read));
    }
    if(m_StartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("start"), m_Start));
    }
    if(m_StopIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stop"), m_Stop));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void BranchImplpermissions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("create")))
    {
        setCreate(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("create"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("read")))
    {
        setRead(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("read"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("start")))
    {
        setStart(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("start"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stop")))
    {
        setStop(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("stop"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

bool BranchImplpermissions::isCreate() const
{
    return m_Create;
}


void BranchImplpermissions::setCreate(bool value)
{
    m_Create = value;
    m_CreateIsSet = true;
}
bool BranchImplpermissions::createIsSet() const
{
    return m_CreateIsSet;
}

void BranchImplpermissions::unsetCreate()
{
    m_CreateIsSet = false;
}

bool BranchImplpermissions::isRead() const
{
    return m_Read;
}


void BranchImplpermissions::setRead(bool value)
{
    m_Read = value;
    m_ReadIsSet = true;
}
bool BranchImplpermissions::readIsSet() const
{
    return m_ReadIsSet;
}

void BranchImplpermissions::unsetRead()
{
    m_ReadIsSet = false;
}

bool BranchImplpermissions::isStart() const
{
    return m_Start;
}


void BranchImplpermissions::setStart(bool value)
{
    m_Start = value;
    m_StartIsSet = true;
}
bool BranchImplpermissions::startIsSet() const
{
    return m_StartIsSet;
}

void BranchImplpermissions::unsetStart()
{
    m_StartIsSet = false;
}

bool BranchImplpermissions::isStop() const
{
    return m_Stop;
}


void BranchImplpermissions::setStop(bool value)
{
    m_Stop = value;
    m_StopIsSet = true;
}
bool BranchImplpermissions::stopIsSet() const
{
    return m_StopIsSet;
}

void BranchImplpermissions::unsetStop()
{
    m_StopIsSet = false;
}

utility::string_t BranchImplpermissions::getClass() const
{
    return m__class;
}


void BranchImplpermissions::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool BranchImplpermissions::_classIsSet() const
{
    return m__classIsSet;
}

void BranchImplpermissions::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
