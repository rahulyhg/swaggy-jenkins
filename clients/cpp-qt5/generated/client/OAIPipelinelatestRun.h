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
 * OAIPipelinelatestRun.h
 *
 * 
 */

#ifndef OAIPipelinelatestRun_H_
#define OAIPipelinelatestRun_H_

#include <QJsonObject>


#include "OAIOAIPipelinelatestRunartifacts.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelinelatestRun: public OAIObject {
public:
    OAIPipelinelatestRun();
    OAIPipelinelatestRun(QString json);
    ~OAIPipelinelatestRun();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIPipelinelatestRun* fromJson(QString jsonString) override;

    QList<OAIPipelinelatestRunartifacts*>* getArtifacts();
    void setArtifacts(QList<OAIPipelinelatestRunartifacts*>* artifacts);

    qint32 getDurationInMillis();
    void setDurationInMillis(qint32 duration_in_millis);

    qint32 getEstimatedDurationInMillis();
    void setEstimatedDurationInMillis(qint32 estimated_duration_in_millis);

    QString* getEnQueueTime();
    void setEnQueueTime(QString* en_queue_time);

    QString* getEndTime();
    void setEndTime(QString* end_time);

    QString* getId();
    void setId(QString* id);

    QString* getOrganization();
    void setOrganization(QString* organization);

    QString* getPipeline();
    void setPipeline(QString* pipeline);

    QString* getResult();
    void setResult(QString* result);

    QString* getRunSummary();
    void setRunSummary(QString* run_summary);

    QString* getStartTime();
    void setStartTime(QString* start_time);

    QString* getState();
    void setState(QString* state);

    QString* getType();
    void setType(QString* type);

    QString* getCommitId();
    void setCommitId(QString* commit_id);

    QString* getClass();
    void setClass(QString* _class);


    virtual bool isSet() override;

private:
    QList<OAIPipelinelatestRunartifacts*>* artifacts;
    bool m_artifacts_isSet;

    qint32 duration_in_millis;
    bool m_duration_in_millis_isSet;

    qint32 estimated_duration_in_millis;
    bool m_estimated_duration_in_millis_isSet;

    QString* en_queue_time;
    bool m_en_queue_time_isSet;

    QString* end_time;
    bool m_end_time_isSet;

    QString* id;
    bool m_id_isSet;

    QString* organization;
    bool m_organization_isSet;

    QString* pipeline;
    bool m_pipeline_isSet;

    QString* result;
    bool m_result_isSet;

    QString* run_summary;
    bool m_run_summary_isSet;

    QString* start_time;
    bool m_start_time_isSet;

    QString* state;
    bool m_state_isSet;

    QString* type;
    bool m_type_isSet;

    QString* commit_id;
    bool m_commit_id_isSet;

    QString* _class;
    bool m__class_isSet;

};

}

#endif /* OAIPipelinelatestRun_H_ */
