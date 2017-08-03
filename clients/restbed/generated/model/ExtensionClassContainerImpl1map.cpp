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



#include "ExtensionClassContainerImpl1map.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

ExtensionClassContainerImpl1map::ExtensionClassContainerImpl1map()
{
    m__class = "";
    
}

ExtensionClassContainerImpl1map::~ExtensionClassContainerImpl1map()
{
}

std::string ExtensionClassContainerImpl1map::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void ExtensionClassContainerImpl1map::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
}

std::shared_ptr<ExtensionClassImpl> ExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl;
}
void ExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(std::shared_ptr<ExtensionClassImpl> value)
{
    m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl = value;
}
std::shared_ptr<ExtensionClassImpl> ExtensionClassContainerImpl1map::getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl() const
{
    return m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl;
}
void ExtensionClassContainerImpl1map::setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(std::shared_ptr<ExtensionClassImpl> value)
{
    m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl = value;
}
std::string ExtensionClassContainerImpl1map::getClass() const
{
    return m__class;
}
void ExtensionClassContainerImpl1map::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}
