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
/*
 * ExtensionClassContainerImpl1.h
 *
 * 
 */

#ifndef ExtensionClassContainerImpl1_H_
#define ExtensionClassContainerImpl1_H_


#include "ModelBase.h"

#include "ExtensionClassContainerImpl1map.h"
#include <string>
#include "ExtensionClassContainerImpl1links.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ExtensionClassContainerImpl1
    : public ModelBase
{
public:
    ExtensionClassContainerImpl1();
    virtual ~ExtensionClassContainerImpl1();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ExtensionClassContainerImpl1 members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    ExtensionClassContainerImpl1links getLinks() const;
    void setLinks(ExtensionClassContainerImpl1links const& value);
    bool linksIsSet() const;
    void unset_links();
    /// <summary>
    /// 
    /// </summary>
    ExtensionClassContainerImpl1map getMap() const;
    void setMap(ExtensionClassContainerImpl1map const& value);
    bool mapIsSet() const;
    void unsetmap();

protected:
    std::string m__class;
    bool m__classIsSet;
    ExtensionClassContainerImpl1links m__links;
    bool m__linksIsSet;
    ExtensionClassContainerImpl1map m_map;
    bool m_mapIsSet;
};

}
}
}
}

#endif /* ExtensionClassContainerImpl1_H_ */
