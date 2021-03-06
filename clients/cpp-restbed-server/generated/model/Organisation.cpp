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



#include "Organisation.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

Organisation::Organisation()
{
    m__class = "";
    m_Name = "";
    
}

Organisation::~Organisation()
{
}

std::string Organisation::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("Name", m_Name);
	write_json(ss, pt, false);
	return ss.str();
}

void Organisation::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_Name = pt.get("Name", "");
}

std::string Organisation::getClass() const
{
    return m__class;
}
void Organisation::setClass(std::string value)
{
    m__class = value;
}
std::string Organisation::getName() const
{
    return m_Name;
}
void Organisation::setName(std::string value)
{
    m_Name = value;
}

}
}
}
}

