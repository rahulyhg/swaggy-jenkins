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



#include "PipelinelatestRun.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelinelatestRun::PipelinelatestRun()
{
    m_ArtifactsIsSet = false;
    m_DurationInMillis = 0;
    m_DurationInMillisIsSet = false;
    m_EstimatedDurationInMillis = 0;
    m_EstimatedDurationInMillisIsSet = false;
    m_EnQueueTime = utility::conversions::to_string_t("");
    m_EnQueueTimeIsSet = false;
    m_EndTime = utility::conversions::to_string_t("");
    m_EndTimeIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Organization = utility::conversions::to_string_t("");
    m_OrganizationIsSet = false;
    m_Pipeline = utility::conversions::to_string_t("");
    m_PipelineIsSet = false;
    m_Result = utility::conversions::to_string_t("");
    m_ResultIsSet = false;
    m_RunSummary = utility::conversions::to_string_t("");
    m_RunSummaryIsSet = false;
    m_StartTime = utility::conversions::to_string_t("");
    m_StartTimeIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_CommitId = utility::conversions::to_string_t("");
    m_CommitIdIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

PipelinelatestRun::~PipelinelatestRun()
{
}

void PipelinelatestRun::validate()
{
    // TODO: implement validation
}

web::json::value PipelinelatestRun::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Artifacts )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("artifacts")] = web::json::value::array(jsonArray);
        }
    }
    if(m_DurationInMillisIsSet)
    {
        val[utility::conversions::to_string_t("durationInMillis")] = ModelBase::toJson(m_DurationInMillis);
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        val[utility::conversions::to_string_t("estimatedDurationInMillis")] = ModelBase::toJson(m_EstimatedDurationInMillis);
    }
    if(m_EnQueueTimeIsSet)
    {
        val[utility::conversions::to_string_t("enQueueTime")] = ModelBase::toJson(m_EnQueueTime);
    }
    if(m_EndTimeIsSet)
    {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(m_EndTime);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_OrganizationIsSet)
    {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(m_Organization);
    }
    if(m_PipelineIsSet)
    {
        val[utility::conversions::to_string_t("pipeline")] = ModelBase::toJson(m_Pipeline);
    }
    if(m_ResultIsSet)
    {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(m_Result);
    }
    if(m_RunSummaryIsSet)
    {
        val[utility::conversions::to_string_t("runSummary")] = ModelBase::toJson(m_RunSummary);
    }
    if(m_StartTimeIsSet)
    {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(m_StartTime);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_CommitIdIsSet)
    {
        val[utility::conversions::to_string_t("commitId")] = ModelBase::toJson(m_CommitId);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void PipelinelatestRun::fromJson(web::json::value& val)
{
    {
        m_Artifacts.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("artifacts")))
        {
        for( auto& item : val[utility::conversions::to_string_t("artifacts")].as_array() )
        {
            if(item.is_null())
            {
                m_Artifacts.push_back( std::shared_ptr<PipelinelatestRunartifacts>(nullptr) );
            }
            else
            {
                std::shared_ptr<PipelinelatestRunartifacts> newItem(new PipelinelatestRunartifacts());
                newItem->fromJson(item);
                m_Artifacts.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("durationInMillis")]));
    }
    if(val.has_field(utility::conversions::to_string_t("estimatedDurationInMillis")))
    {
        setEstimatedDurationInMillis(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("estimatedDurationInMillis")]));
    }
    if(val.has_field(utility::conversions::to_string_t("enQueueTime")))
    {
        setEnQueueTime(ModelBase::stringFromJson(val[utility::conversions::to_string_t("enQueueTime")]));
    }
    if(val.has_field(utility::conversions::to_string_t("endTime")))
    {
        setEndTime(ModelBase::stringFromJson(val[utility::conversions::to_string_t("endTime")]));
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    }
    if(val.has_field(utility::conversions::to_string_t("organization")))
    {
        setOrganization(ModelBase::stringFromJson(val[utility::conversions::to_string_t("organization")]));
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline")))
    {
        setPipeline(ModelBase::stringFromJson(val[utility::conversions::to_string_t("pipeline")]));
    }
    if(val.has_field(utility::conversions::to_string_t("result")))
    {
        setResult(ModelBase::stringFromJson(val[utility::conversions::to_string_t("result")]));
    }
    if(val.has_field(utility::conversions::to_string_t("runSummary")))
    {
        setRunSummary(ModelBase::stringFromJson(val[utility::conversions::to_string_t("runSummary")]));
    }
    if(val.has_field(utility::conversions::to_string_t("startTime")))
    {
        setStartTime(ModelBase::stringFromJson(val[utility::conversions::to_string_t("startTime")]));
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromJson(val[utility::conversions::to_string_t("state")]));
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("type")]));
    }
    if(val.has_field(utility::conversions::to_string_t("commitId")))
    {
        setCommitId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("commitId")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void PipelinelatestRun::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Artifacts )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("artifacts"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_DurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("durationInMillis"), m_DurationInMillis));
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("estimatedDurationInMillis"), m_EstimatedDurationInMillis));
    }
    if(m_EnQueueTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enQueueTime"), m_EnQueueTime));
    }
    if(m_EndTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endTime"), m_EndTime));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_OrganizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("organization"), m_Organization));
    }
    if(m_PipelineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pipeline"), m_Pipeline));
    }
    if(m_ResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("result"), m_Result));
    }
    if(m_RunSummaryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runSummary"), m_RunSummary));
    }
    if(m_StartTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startTime"), m_StartTime));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_CommitIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("commitId"), m_CommitId));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void PipelinelatestRun::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Artifacts.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("artifacts")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("artifacts"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Artifacts.push_back( std::shared_ptr<PipelinelatestRunartifacts>(nullptr) );
            }
            else
            {
                std::shared_ptr<PipelinelatestRunartifacts> newItem(new PipelinelatestRunartifacts());
                newItem->fromJson(item);
                m_Artifacts.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("durationInMillis"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("estimatedDurationInMillis")))
    {
        setEstimatedDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("estimatedDurationInMillis"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enQueueTime")))
    {
        setEnQueueTime(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("enQueueTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endTime")))
    {
        setEndTime(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("endTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("organization")))
    {
        setOrganization(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("organization"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pipeline")))
    {
        setPipeline(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("pipeline"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("result")))
    {
        setResult(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("result"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("runSummary")))
    {
        setRunSummary(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("runSummary"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startTime")))
    {
        setStartTime(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("startTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("state"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("commitId")))
    {
        setCommitId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("commitId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

std::vector<std::shared_ptr<PipelinelatestRunartifacts>>& PipelinelatestRun::getArtifacts()
{
    return m_Artifacts;
}

void PipelinelatestRun::setArtifacts(std::vector<std::shared_ptr<PipelinelatestRunartifacts>> value)
{
    m_Artifacts = value;
    m_ArtifactsIsSet = true;
}
bool PipelinelatestRun::artifactsIsSet() const
{
    return m_ArtifactsIsSet;
}

void PipelinelatestRun::unsetArtifacts()
{
    m_ArtifactsIsSet = false;
}

int32_t PipelinelatestRun::getDurationInMillis() const
{
    return m_DurationInMillis;
}


void PipelinelatestRun::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
    m_DurationInMillisIsSet = true;
}
bool PipelinelatestRun::durationInMillisIsSet() const
{
    return m_DurationInMillisIsSet;
}

void PipelinelatestRun::unsetDurationInMillis()
{
    m_DurationInMillisIsSet = false;
}

int32_t PipelinelatestRun::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}


void PipelinelatestRun::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
    m_EstimatedDurationInMillisIsSet = true;
}
bool PipelinelatestRun::estimatedDurationInMillisIsSet() const
{
    return m_EstimatedDurationInMillisIsSet;
}

void PipelinelatestRun::unsetEstimatedDurationInMillis()
{
    m_EstimatedDurationInMillisIsSet = false;
}

utility::string_t PipelinelatestRun::getEnQueueTime() const
{
    return m_EnQueueTime;
}


void PipelinelatestRun::setEnQueueTime(utility::string_t value)
{
    m_EnQueueTime = value;
    m_EnQueueTimeIsSet = true;
}
bool PipelinelatestRun::enQueueTimeIsSet() const
{
    return m_EnQueueTimeIsSet;
}

void PipelinelatestRun::unsetEnQueueTime()
{
    m_EnQueueTimeIsSet = false;
}

utility::string_t PipelinelatestRun::getEndTime() const
{
    return m_EndTime;
}


void PipelinelatestRun::setEndTime(utility::string_t value)
{
    m_EndTime = value;
    m_EndTimeIsSet = true;
}
bool PipelinelatestRun::endTimeIsSet() const
{
    return m_EndTimeIsSet;
}

void PipelinelatestRun::unsetEndTime()
{
    m_EndTimeIsSet = false;
}

utility::string_t PipelinelatestRun::getId() const
{
    return m_Id;
}


void PipelinelatestRun::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PipelinelatestRun::idIsSet() const
{
    return m_IdIsSet;
}

void PipelinelatestRun::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t PipelinelatestRun::getOrganization() const
{
    return m_Organization;
}


void PipelinelatestRun::setOrganization(utility::string_t value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool PipelinelatestRun::organizationIsSet() const
{
    return m_OrganizationIsSet;
}

void PipelinelatestRun::unsetOrganization()
{
    m_OrganizationIsSet = false;
}

utility::string_t PipelinelatestRun::getPipeline() const
{
    return m_Pipeline;
}


void PipelinelatestRun::setPipeline(utility::string_t value)
{
    m_Pipeline = value;
    m_PipelineIsSet = true;
}
bool PipelinelatestRun::pipelineIsSet() const
{
    return m_PipelineIsSet;
}

void PipelinelatestRun::unsetPipeline()
{
    m_PipelineIsSet = false;
}

utility::string_t PipelinelatestRun::getResult() const
{
    return m_Result;
}


void PipelinelatestRun::setResult(utility::string_t value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool PipelinelatestRun::resultIsSet() const
{
    return m_ResultIsSet;
}

void PipelinelatestRun::unsetResult()
{
    m_ResultIsSet = false;
}

utility::string_t PipelinelatestRun::getRunSummary() const
{
    return m_RunSummary;
}


void PipelinelatestRun::setRunSummary(utility::string_t value)
{
    m_RunSummary = value;
    m_RunSummaryIsSet = true;
}
bool PipelinelatestRun::runSummaryIsSet() const
{
    return m_RunSummaryIsSet;
}

void PipelinelatestRun::unsetRunSummary()
{
    m_RunSummaryIsSet = false;
}

utility::string_t PipelinelatestRun::getStartTime() const
{
    return m_StartTime;
}


void PipelinelatestRun::setStartTime(utility::string_t value)
{
    m_StartTime = value;
    m_StartTimeIsSet = true;
}
bool PipelinelatestRun::startTimeIsSet() const
{
    return m_StartTimeIsSet;
}

void PipelinelatestRun::unsetStartTime()
{
    m_StartTimeIsSet = false;
}

utility::string_t PipelinelatestRun::getState() const
{
    return m_State;
}


void PipelinelatestRun::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool PipelinelatestRun::stateIsSet() const
{
    return m_StateIsSet;
}

void PipelinelatestRun::unsetState()
{
    m_StateIsSet = false;
}

utility::string_t PipelinelatestRun::getType() const
{
    return m_Type;
}


void PipelinelatestRun::setType(utility::string_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool PipelinelatestRun::typeIsSet() const
{
    return m_TypeIsSet;
}

void PipelinelatestRun::unsetType()
{
    m_TypeIsSet = false;
}

utility::string_t PipelinelatestRun::getCommitId() const
{
    return m_CommitId;
}


void PipelinelatestRun::setCommitId(utility::string_t value)
{
    m_CommitId = value;
    m_CommitIdIsSet = true;
}
bool PipelinelatestRun::commitIdIsSet() const
{
    return m_CommitIdIsSet;
}

void PipelinelatestRun::unsetCommitId()
{
    m_CommitIdIsSet = false;
}

utility::string_t PipelinelatestRun::getClass() const
{
    return m__class;
}


void PipelinelatestRun::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelinelatestRun::_classIsSet() const
{
    return m__classIsSet;
}

void PipelinelatestRun::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

