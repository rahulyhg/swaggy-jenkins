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

/*
 * ExtensionClassContainerImpl1links.h
 *
 * 
 */

#ifndef ExtensionClassContainerImpl1links_H_
#define ExtensionClassContainerImpl1links_H_



#include <string>
#include "Link.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ExtensionClassContainerImpl1links
{
public:
    ExtensionClassContainerImpl1links();
    virtual ~ExtensionClassContainerImpl1links();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ExtensionClassContainerImpl1links members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getSelf() const;
    void setSelf(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::shared_ptr<Link> m_Self;
    std::string m__class;
};

}
}
}
}

#endif /* ExtensionClassContainerImpl1links_H_ */
