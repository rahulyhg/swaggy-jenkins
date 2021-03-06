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
 * BranchImplpermissions.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BranchImplpermissions_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BranchImplpermissions_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BranchImplpermissions
    : public ModelBase
{
public:
    BranchImplpermissions();
    virtual ~BranchImplpermissions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BranchImplpermissions members

    /// <summary>
    /// 
    /// </summary>
    bool isCreate() const;
    bool createIsSet() const;
    void unsetCreate();
    void setCreate(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isRead() const;
    bool readIsSet() const;
    void unsetRead();
    void setRead(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isStart() const;
    bool startIsSet() const;
    void unsetStart();
    void setStart(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isStop() const;
    bool stopIsSet() const;
    void unsetStop();
    void setStop(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool _classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);

protected:
    bool m_Create;
    bool m_CreateIsSet;
    bool m_Read;
    bool m_ReadIsSet;
    bool m_Start;
    bool m_StartIsSet;
    bool m_Stop;
    bool m_StopIsSet;
    utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BranchImplpermissions_H_ */
