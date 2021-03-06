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
 * HudsonMasterComputerexecutors.h
 *
 * 
 */

#ifndef HudsonMasterComputerexecutors_H_
#define HudsonMasterComputerexecutors_H_



#include "FreeStyleBuild.h"
#include <string>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonMasterComputerexecutors
{
public:
    HudsonMasterComputerexecutors();
    virtual ~HudsonMasterComputerexecutors();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// HudsonMasterComputerexecutors members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleBuild> getCurrentExecutable() const;
    void setCurrentExecutable(std::shared_ptr<FreeStyleBuild> value);
    /// <summary>
    /// 
    /// </summary>
    bool isIdle() const;
    void setIdle(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isLikelyStuck() const;
    void setLikelyStuck(bool value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumber() const;
    void setNumber(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getProgress() const;
    void setProgress(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::shared_ptr<FreeStyleBuild> m_CurrentExecutable;
    bool m_Idle;
    bool m_LikelyStuck;
    int32_t m_number;
    int32_t m_Progress;
    std::string m__class;
};

}
}
}
}

#endif /* HudsonMasterComputerexecutors_H_ */
