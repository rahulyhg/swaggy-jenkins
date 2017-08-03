/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#include "Pipeline.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

Pipeline::Pipeline()
{
    m__class = "";
    m__classIsSet = false;
    m_Organization = "";
    m_OrganizationIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_DisplayName = "";
    m_DisplayNameIsSet = false;
    m_FullName = "";
    m_FullNameIsSet = false;
    m_WeatherScore = 0;
    m_WeatherScoreIsSet = false;
    m_EstimatedDurationInMillis = 0;
    m_EstimatedDurationInMillisIsSet = false;
    m_LatestRunIsSet = false;
    
}

Pipeline::~Pipeline()
{
}

void Pipeline::validate()
{
    // TODO: implement validation
}

nlohmann::json Pipeline::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_OrganizationIsSet)
    {
        val["organization"] = ModelBase::toJson(m_Organization);
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_DisplayNameIsSet)
    {
        val["displayName"] = ModelBase::toJson(m_DisplayName);
    }
    if(m_FullNameIsSet)
    {
        val["fullName"] = ModelBase::toJson(m_FullName);
    }
    if(m_WeatherScoreIsSet)
    {
        val["weatherScore"] = m_WeatherScore;
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        val["estimatedDurationInMillis"] = m_EstimatedDurationInMillis;
    }
    if(m_LatestRunIsSet)
    {
        val["latestRun"] = ModelBase::toJson(m_LatestRun);
    }
    

    return val;
}

void Pipeline::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    if(val.find("organization") != val.end())
    {
        setOrganization(val.at("organization"));
        
    }
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
        
    }
    if(val.find("displayName") != val.end())
    {
        setDisplayName(val.at("displayName"));
        
    }
    if(val.find("fullName") != val.end())
    {
        setFullName(val.at("fullName"));
        
    }
    if(val.find("weatherScore") != val.end())
    {
        setWeatherScore(val.at("weatherScore"));
    }
    if(val.find("estimatedDurationInMillis") != val.end())
    {
        setEstimatedDurationInMillis(val.at("estimatedDurationInMillis"));
    }
    if(val.find("latestRun") != val.end())
    {
        if(!val["latestRun"].is_null())
        {
            std::shared_ptr<PipelinelatestRun> newItem(new PipelinelatestRun());
            newItem->fromJson(val["latestRun"]);
            setLatestRun( newItem );
        }
        
    }
    
}


std::string Pipeline::getClass() const
{
    return m__class;
}
void Pipeline::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool Pipeline::classIsSet() const
{
    return m__classIsSet;
}
void Pipeline::unset_class()
{
    m__classIsSet = false;
}
std::string Pipeline::getOrganization() const
{
    return m_Organization;
}
void Pipeline::setOrganization(std::string value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool Pipeline::organizationIsSet() const
{
    return m_OrganizationIsSet;
}
void Pipeline::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
std::string Pipeline::getName() const
{
    return m_Name;
}
void Pipeline::setName(std::string value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Pipeline::nameIsSet() const
{
    return m_NameIsSet;
}
void Pipeline::unsetName()
{
    m_NameIsSet = false;
}
std::string Pipeline::getDisplayName() const
{
    return m_DisplayName;
}
void Pipeline::setDisplayName(std::string value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool Pipeline::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void Pipeline::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
std::string Pipeline::getFullName() const
{
    return m_FullName;
}
void Pipeline::setFullName(std::string value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool Pipeline::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void Pipeline::unsetFullName()
{
    m_FullNameIsSet = false;
}
int32_t Pipeline::getWeatherScore() const
{
    return m_WeatherScore;
}
void Pipeline::setWeatherScore(int32_t value)
{
    m_WeatherScore = value;
    m_WeatherScoreIsSet = true;
}
bool Pipeline::weatherScoreIsSet() const
{
    return m_WeatherScoreIsSet;
}
void Pipeline::unsetWeatherScore()
{
    m_WeatherScoreIsSet = false;
}
int32_t Pipeline::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void Pipeline::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
    m_EstimatedDurationInMillisIsSet = true;
}
bool Pipeline::estimatedDurationInMillisIsSet() const
{
    return m_EstimatedDurationInMillisIsSet;
}
void Pipeline::unsetEstimatedDurationInMillis()
{
    m_EstimatedDurationInMillisIsSet = false;
}
std::shared_ptr<PipelinelatestRun> Pipeline::getLatestRun() const
{
    return m_LatestRun;
}
void Pipeline::setLatestRun(std::shared_ptr<PipelinelatestRun> value)
{
    m_LatestRun = value;
    m_LatestRunIsSet = true;
}
bool Pipeline::latestRunIsSet() const
{
    return m_LatestRunIsSet;
}
void Pipeline::unsetLatestRun()
{
    m_LatestRunIsSet = false;
}

}
}
}
}
