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



#include "Queue.h"

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

Queue::Queue()
{
    m__class = "";
    
}

Queue::~Queue()
{
}

std::string Queue::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void Queue::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
}

std::string Queue::getClass() const
{
    return m__class;
}
void Queue::setClass(std::string value)
{
    m__class = value;
}
std::vector<std::shared_ptr<QueueBlockedItem>> Queue::getItems() const
{
    return m_Items;
}
void Queue::setItems(std::vector<std::shared_ptr<QueueBlockedItem>> value)
{
    m_Items = value;
}

}
}
}
}

