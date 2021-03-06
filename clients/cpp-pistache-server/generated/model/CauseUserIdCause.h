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
 * CauseUserIdCause.h
 *
 * 
 */

#ifndef CauseUserIdCause_H_
#define CauseUserIdCause_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  CauseUserIdCause
    : public ModelBase
{
public:
    CauseUserIdCause();
    virtual ~CauseUserIdCause();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// CauseUserIdCause members

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
    std::string getShortDescription() const;
    void setShortDescription(std::string const& value);
    bool shortDescriptionIsSet() const;
    void unsetShortDescription();
    /// <summary>
    /// 
    /// </summary>
    std::string getUserId() const;
    void setUserId(std::string const& value);
    bool userIdIsSet() const;
    void unsetUserId();
    /// <summary>
    /// 
    /// </summary>
    std::string getUserName() const;
    void setUserName(std::string const& value);
    bool userNameIsSet() const;
    void unsetUserName();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::string m_ShortDescription;
    bool m_ShortDescriptionIsSet;
    std::string m_UserId;
    bool m_UserIdIsSet;
    std::string m_UserName;
    bool m_UserNameIsSet;
};

}
}
}
}

#endif /* CauseUserIdCause_H_ */
