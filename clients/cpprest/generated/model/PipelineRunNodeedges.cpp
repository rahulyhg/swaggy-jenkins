/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "PipelineRunNodeedges.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PipelineRunNodeedges::PipelineRunNodeedges()
{
    m_Id = U("");
    m_IdIsSet = false;
    m__class = U("");
    m__classIsSet = false;
}

PipelineRunNodeedges::~PipelineRunNodeedges()
{
}

void PipelineRunNodeedges::validate()
{
    // TODO: implement validation
}

web::json::value PipelineRunNodeedges::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void PipelineRunNodeedges::fromJson(web::json::value& val)
{
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
}

void PipelineRunNodeedges::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
}

void PipelineRunNodeedges::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
}

utility::string_t PipelineRunNodeedges::getId() const
{
    return m_Id;
}


void PipelineRunNodeedges::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PipelineRunNodeedges::idIsSet() const
{
    return m_IdIsSet;
}

void PipelineRunNodeedges::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t PipelineRunNodeedges::getClass() const
{
    return m__class;
}


void PipelineRunNodeedges::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineRunNodeedges::classIsSet() const
{
    return m__classIsSet;
}

void PipelineRunNodeedges::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
