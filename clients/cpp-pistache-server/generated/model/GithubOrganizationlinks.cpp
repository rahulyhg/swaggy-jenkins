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


#include "GithubOrganizationlinks.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

GithubOrganizationlinks::GithubOrganizationlinks()
{
    m_RepositoriesIsSet = false;
    m_SelfIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

GithubOrganizationlinks::~GithubOrganizationlinks()
{
}

void GithubOrganizationlinks::validate()
{
    // TODO: implement validation
}

nlohmann::json GithubOrganizationlinks::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_RepositoriesIsSet)
    {
        val["repositories"] = ModelBase::toJson(m_Repositories);
    }
    if(m_SelfIsSet)
    {
        val["self"] = ModelBase::toJson(m_Self);
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void GithubOrganizationlinks::fromJson(nlohmann::json& val)
{
    if(val.find("repositories") != val.end())
    {
        if(!val["repositories"].is_null())
        {
            Link newItem;
            newItem.fromJson(val["repositories"]);
            setRepositories( newItem );
        }
        
    }
    if(val.find("self") != val.end())
    {
        if(!val["self"].is_null())
        {
            Link newItem;
            newItem.fromJson(val["self"]);
            setSelf( newItem );
        }
        
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    
}


Link GithubOrganizationlinks::getRepositories() const
{
    return m_Repositories;
}
void GithubOrganizationlinks::setRepositories(Link const& value)
{
    m_Repositories = value;
    m_RepositoriesIsSet = true;
}
bool GithubOrganizationlinks::repositoriesIsSet() const
{
    return m_RepositoriesIsSet;
}
void GithubOrganizationlinks::unsetRepositories()
{
    m_RepositoriesIsSet = false;
}
Link GithubOrganizationlinks::getSelf() const
{
    return m_Self;
}
void GithubOrganizationlinks::setSelf(Link const& value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool GithubOrganizationlinks::selfIsSet() const
{
    return m_SelfIsSet;
}
void GithubOrganizationlinks::unsetSelf()
{
    m_SelfIsSet = false;
}
std::string GithubOrganizationlinks::getClass() const
{
    return m__class;
}
void GithubOrganizationlinks::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubOrganizationlinks::classIsSet() const
{
    return m__classIsSet;
}
void GithubOrganizationlinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
