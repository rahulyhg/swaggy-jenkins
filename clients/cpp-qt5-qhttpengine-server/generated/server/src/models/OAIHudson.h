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
 * OAIHudson.h
 *
 * 
 */

#ifndef OAIHudson_H
#define OAIHudson_H

#include <QJsonObject>


#include "OAIAllView.h"
#include "OAIFreeStyleProject.h"
#include "OAIHudsonassignedLabels.h"
#include "OAIUnlabeledLoadStatistics.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIHudson: public OAIObject {
public:
    OAIHudson();
    OAIHudson(QString json);
    ~OAIHudson() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    QList<OAIHudsonassignedLabels> getAssignedLabels() const;
    void setAssignedLabels(const QList<OAIHudsonassignedLabels> &assigned_labels);

    QString getMode() const;
    void setMode(const QString &mode);

    QString getNodeDescription() const;
    void setNodeDescription(const QString &node_description);

    QString getNodeName() const;
    void setNodeName(const QString &node_name);

    qint32 getNumExecutors() const;
    void setNumExecutors(const qint32 &num_executors);

    QString getDescription() const;
    void setDescription(const QString &description);

    QList<OAIFreeStyleProject> getJobs() const;
    void setJobs(const QList<OAIFreeStyleProject> &jobs);

    OAIAllView getPrimaryView() const;
    void setPrimaryView(const OAIAllView &primary_view);

    bool isQuietingDown() const;
    void setQuietingDown(const bool &quieting_down);

    qint32 getSlaveAgentPort() const;
    void setSlaveAgentPort(const qint32 &slave_agent_port);

    OAIUnlabeledLoadStatistics getUnlabeledLoad() const;
    void setUnlabeledLoad(const OAIUnlabeledLoadStatistics &unlabeled_load);

    bool isUseCrumbs() const;
    void setUseCrumbs(const bool &use_crumbs);

    bool isUseSecurity() const;
    void setUseSecurity(const bool &use_security);

    QList<OAIAllView> getViews() const;
    void setViews(const QList<OAIAllView> &views);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    QList<OAIHudsonassignedLabels> assigned_labels;
    bool m_assigned_labels_isSet;

    QString mode;
    bool m_mode_isSet;

    QString node_description;
    bool m_node_description_isSet;

    QString node_name;
    bool m_node_name_isSet;

    qint32 num_executors;
    bool m_num_executors_isSet;

    QString description;
    bool m_description_isSet;

    QList<OAIFreeStyleProject> jobs;
    bool m_jobs_isSet;

    OAIAllView primary_view;
    bool m_primary_view_isSet;

    bool quieting_down;
    bool m_quieting_down_isSet;

    qint32 slave_agent_port;
    bool m_slave_agent_port_isSet;

    OAIUnlabeledLoadStatistics unlabeled_load;
    bool m_unlabeled_load_isSet;

    bool use_crumbs;
    bool m_use_crumbs_isSet;

    bool use_security;
    bool m_use_security_isSet;

    QList<OAIAllView> views;
    bool m_views_isSet;

};

}

#endif // OAIHudson_H
