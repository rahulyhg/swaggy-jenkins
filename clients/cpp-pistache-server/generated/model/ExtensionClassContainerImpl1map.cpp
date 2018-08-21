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


#include "ExtensionClassContainerImpl1map.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ExtensionClassContainerImpl1map::ExtensionClassContainerImpl1map()
{
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet = false;
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

ExtensionClassContainerImpl1map::~ExtensionClassContainerImpl1map()
{
}

void ExtensionClassContainerImpl1map::validate()
{
    // TODO: implement validation
}

nlohmann::json ExtensionClassContainerImpl1map::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet)
    {
        val["io.jenkins.blueocean.service.embedded.rest.PipelineImpl"] = ModelBase::toJson(m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl);
    }
    if(m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet)
    {
        val["io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"] = ModelBase::toJson(m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl);
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void ExtensionClassContainerImpl1map::fromJson(nlohmann::json& val)
{
    if(val.find("io.jenkins.blueocean.service.embedded.rest.PipelineImpl") != val.end())
    {
        if(!val["io.jenkins.blueocean.service.embedded.rest.PipelineImpl"].is_null())
        {
            ExtensionClassImpl newItem;
            newItem.fromJson(val["io.jenkins.blueocean.service.embedded.rest.PipelineImpl"]);
            setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl( newItem );
        }
        
    }
    if(val.find("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl") != val.end())
    {
        if(!val["io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"].is_null())
        {
            ExtensionClassImpl newItem;
            newItem.fromJson(val["io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"]);
            setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl( newItem );
        }
        
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    
}


ExtensionClassImpl ExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl;
}
void ExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(ExtensionClassImpl const& value)
{
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl = value;
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet = true;
}
bool ExtensionClassContainerImpl1map::ioJenkinsBlueoceanServiceEmbeddedRestPipelineImplIsSet() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet;
}
void ExtensionClassContainerImpl1map::unsetIo_jenkins_blueocean_service_embedded_rest_PipelineImpl()
{
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet = false;
}
ExtensionClassImpl ExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl;
}
void ExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(ExtensionClassImpl const& value)
{
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl = value;
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet = true;
}
bool ExtensionClassContainerImpl1map::ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImplIsSet() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet;
}
void ExtensionClassContainerImpl1map::unsetIo_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl()
{
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet = false;
}
std::string ExtensionClassContainerImpl1map::getClass() const
{
    return m__class;
}
void ExtensionClassContainerImpl1map::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool ExtensionClassContainerImpl1map::classIsSet() const
{
    return m__classIsSet;
}
void ExtensionClassContainerImpl1map::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
