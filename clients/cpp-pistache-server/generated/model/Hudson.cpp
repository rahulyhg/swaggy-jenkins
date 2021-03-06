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


#include "Hudson.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Hudson::Hudson()
{
    m__class = "";
    m__classIsSet = false;
    m_AssignedLabelsIsSet = false;
    m_Mode = "";
    m_ModeIsSet = false;
    m_NodeDescription = "";
    m_NodeDescriptionIsSet = false;
    m_NodeName = "";
    m_NodeNameIsSet = false;
    m_NumExecutors = 0;
    m_NumExecutorsIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_JobsIsSet = false;
    m_PrimaryViewIsSet = false;
    m_QuietingDown = false;
    m_QuietingDownIsSet = false;
    m_SlaveAgentPort = 0;
    m_SlaveAgentPortIsSet = false;
    m_UnlabeledLoadIsSet = false;
    m_UseCrumbs = false;
    m_UseCrumbsIsSet = false;
    m_UseSecurity = false;
    m_UseSecurityIsSet = false;
    m_ViewsIsSet = false;
    
}

Hudson::~Hudson()
{
}

void Hudson::validate()
{
    // TODO: implement validation
}

nlohmann::json Hudson::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_AssignedLabels )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["assignedLabels"] = jsonArray;
        }
    }
    if(m_ModeIsSet)
    {
        val["mode"] = ModelBase::toJson(m_Mode);
    }
    if(m_NodeDescriptionIsSet)
    {
        val["nodeDescription"] = ModelBase::toJson(m_NodeDescription);
    }
    if(m_NodeNameIsSet)
    {
        val["nodeName"] = ModelBase::toJson(m_NodeName);
    }
    if(m_NumExecutorsIsSet)
    {
        val["numExecutors"] = m_NumExecutors;
    }
    if(m_DescriptionIsSet)
    {
        val["description"] = ModelBase::toJson(m_Description);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Jobs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["jobs"] = jsonArray;
        }
    }
    if(m_PrimaryViewIsSet)
    {
        val["primaryView"] = ModelBase::toJson(m_PrimaryView);
    }
    if(m_QuietingDownIsSet)
    {
        val["quietingDown"] = m_QuietingDown;
    }
    if(m_SlaveAgentPortIsSet)
    {
        val["slaveAgentPort"] = m_SlaveAgentPort;
    }
    if(m_UnlabeledLoadIsSet)
    {
        val["unlabeledLoad"] = ModelBase::toJson(m_UnlabeledLoad);
    }
    if(m_UseCrumbsIsSet)
    {
        val["useCrumbs"] = m_UseCrumbs;
    }
    if(m_UseSecurityIsSet)
    {
        val["useSecurity"] = m_UseSecurity;
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Views )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["views"] = jsonArray;
        }
    }
    

    return val;
}

void Hudson::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    {
        m_AssignedLabels.clear();
        nlohmann::json jsonArray;
        if(val.find("assignedLabels") != val.end())
        {
        for( auto& item : val["assignedLabels"] )
        {
            
            if(item.is_null())
            {
                m_AssignedLabels.push_back( HudsonassignedLabels() );
            }
            else
            {
                HudsonassignedLabels newItem;
                newItem.fromJson(item);
                m_AssignedLabels.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("mode") != val.end())
    {
        setMode(val.at("mode"));
    }
    if(val.find("nodeDescription") != val.end())
    {
        setNodeDescription(val.at("nodeDescription"));
    }
    if(val.find("nodeName") != val.end())
    {
        setNodeName(val.at("nodeName"));
    }
    if(val.find("numExecutors") != val.end())
    {
        setNumExecutors(val.at("numExecutors"));
    }
    if(val.find("description") != val.end())
    {
        setDescription(val.at("description"));
    }
    {
        m_Jobs.clear();
        nlohmann::json jsonArray;
        if(val.find("jobs") != val.end())
        {
        for( auto& item : val["jobs"] )
        {
            
            if(item.is_null())
            {
                m_Jobs.push_back( FreeStyleProject() );
            }
            else
            {
                FreeStyleProject newItem;
                newItem.fromJson(item);
                m_Jobs.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("primaryView") != val.end())
    {
        if(!val["primaryView"].is_null())
        {
            AllView newItem;
            newItem.fromJson(val["primaryView"]);
            setPrimaryView( newItem );
        }
        
    }
    if(val.find("quietingDown") != val.end())
    {
        setQuietingDown(val.at("quietingDown"));
    }
    if(val.find("slaveAgentPort") != val.end())
    {
        setSlaveAgentPort(val.at("slaveAgentPort"));
    }
    if(val.find("unlabeledLoad") != val.end())
    {
        if(!val["unlabeledLoad"].is_null())
        {
            UnlabeledLoadStatistics newItem;
            newItem.fromJson(val["unlabeledLoad"]);
            setUnlabeledLoad( newItem );
        }
        
    }
    if(val.find("useCrumbs") != val.end())
    {
        setUseCrumbs(val.at("useCrumbs"));
    }
    if(val.find("useSecurity") != val.end())
    {
        setUseSecurity(val.at("useSecurity"));
    }
    {
        m_Views.clear();
        nlohmann::json jsonArray;
        if(val.find("views") != val.end())
        {
        for( auto& item : val["views"] )
        {
            
            if(item.is_null())
            {
                m_Views.push_back( AllView() );
            }
            else
            {
                AllView newItem;
                newItem.fromJson(item);
                m_Views.push_back( newItem );
            }
            
        }
        }
    }
    
}


std::string Hudson::getClass() const
{
    return m__class;
}
void Hudson::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool Hudson::classIsSet() const
{
    return m__classIsSet;
}
void Hudson::unset_class()
{
    m__classIsSet = false;
}
std::vector<HudsonassignedLabels>& Hudson::getAssignedLabels()
{
    return m_AssignedLabels;
}
bool Hudson::assignedLabelsIsSet() const
{
    return m_AssignedLabelsIsSet;
}
void Hudson::unsetAssignedLabels()
{
    m_AssignedLabelsIsSet = false;
}
std::string Hudson::getMode() const
{
    return m_Mode;
}
void Hudson::setMode(std::string const& value)
{
    m_Mode = value;
    m_ModeIsSet = true;
}
bool Hudson::modeIsSet() const
{
    return m_ModeIsSet;
}
void Hudson::unsetMode()
{
    m_ModeIsSet = false;
}
std::string Hudson::getNodeDescription() const
{
    return m_NodeDescription;
}
void Hudson::setNodeDescription(std::string const& value)
{
    m_NodeDescription = value;
    m_NodeDescriptionIsSet = true;
}
bool Hudson::nodeDescriptionIsSet() const
{
    return m_NodeDescriptionIsSet;
}
void Hudson::unsetNodeDescription()
{
    m_NodeDescriptionIsSet = false;
}
std::string Hudson::getNodeName() const
{
    return m_NodeName;
}
void Hudson::setNodeName(std::string const& value)
{
    m_NodeName = value;
    m_NodeNameIsSet = true;
}
bool Hudson::nodeNameIsSet() const
{
    return m_NodeNameIsSet;
}
void Hudson::unsetNodeName()
{
    m_NodeNameIsSet = false;
}
int32_t Hudson::getNumExecutors() const
{
    return m_NumExecutors;
}
void Hudson::setNumExecutors(int32_t const value)
{
    m_NumExecutors = value;
    m_NumExecutorsIsSet = true;
}
bool Hudson::numExecutorsIsSet() const
{
    return m_NumExecutorsIsSet;
}
void Hudson::unsetNumExecutors()
{
    m_NumExecutorsIsSet = false;
}
std::string Hudson::getDescription() const
{
    return m_Description;
}
void Hudson::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool Hudson::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Hudson::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::vector<FreeStyleProject>& Hudson::getJobs()
{
    return m_Jobs;
}
bool Hudson::jobsIsSet() const
{
    return m_JobsIsSet;
}
void Hudson::unsetJobs()
{
    m_JobsIsSet = false;
}
AllView Hudson::getPrimaryView() const
{
    return m_PrimaryView;
}
void Hudson::setPrimaryView(AllView const& value)
{
    m_PrimaryView = value;
    m_PrimaryViewIsSet = true;
}
bool Hudson::primaryViewIsSet() const
{
    return m_PrimaryViewIsSet;
}
void Hudson::unsetPrimaryView()
{
    m_PrimaryViewIsSet = false;
}
bool Hudson::isQuietingDown() const
{
    return m_QuietingDown;
}
void Hudson::setQuietingDown(bool const value)
{
    m_QuietingDown = value;
    m_QuietingDownIsSet = true;
}
bool Hudson::quietingDownIsSet() const
{
    return m_QuietingDownIsSet;
}
void Hudson::unsetQuietingDown()
{
    m_QuietingDownIsSet = false;
}
int32_t Hudson::getSlaveAgentPort() const
{
    return m_SlaveAgentPort;
}
void Hudson::setSlaveAgentPort(int32_t const value)
{
    m_SlaveAgentPort = value;
    m_SlaveAgentPortIsSet = true;
}
bool Hudson::slaveAgentPortIsSet() const
{
    return m_SlaveAgentPortIsSet;
}
void Hudson::unsetSlaveAgentPort()
{
    m_SlaveAgentPortIsSet = false;
}
UnlabeledLoadStatistics Hudson::getUnlabeledLoad() const
{
    return m_UnlabeledLoad;
}
void Hudson::setUnlabeledLoad(UnlabeledLoadStatistics const& value)
{
    m_UnlabeledLoad = value;
    m_UnlabeledLoadIsSet = true;
}
bool Hudson::unlabeledLoadIsSet() const
{
    return m_UnlabeledLoadIsSet;
}
void Hudson::unsetUnlabeledLoad()
{
    m_UnlabeledLoadIsSet = false;
}
bool Hudson::isUseCrumbs() const
{
    return m_UseCrumbs;
}
void Hudson::setUseCrumbs(bool const value)
{
    m_UseCrumbs = value;
    m_UseCrumbsIsSet = true;
}
bool Hudson::useCrumbsIsSet() const
{
    return m_UseCrumbsIsSet;
}
void Hudson::unsetUseCrumbs()
{
    m_UseCrumbsIsSet = false;
}
bool Hudson::isUseSecurity() const
{
    return m_UseSecurity;
}
void Hudson::setUseSecurity(bool const value)
{
    m_UseSecurity = value;
    m_UseSecurityIsSet = true;
}
bool Hudson::useSecurityIsSet() const
{
    return m_UseSecurityIsSet;
}
void Hudson::unsetUseSecurity()
{
    m_UseSecurityIsSet = false;
}
std::vector<AllView>& Hudson::getViews()
{
    return m_Views;
}
bool Hudson::viewsIsSet() const
{
    return m_ViewsIsSet;
}
void Hudson::unsetViews()
{
    m_ViewsIsSet = false;
}

}
}
}
}

