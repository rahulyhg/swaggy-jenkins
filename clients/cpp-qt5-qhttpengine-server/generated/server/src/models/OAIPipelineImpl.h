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
 * OAIPipelineImpl.h
 *
 * 
 */

#ifndef OAIPipelineImpl_H
#define OAIPipelineImpl_H

#include <QJsonObject>


#include "OAIPipelineImpllinks.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelineImpl: public OAIObject {
public:
    OAIPipelineImpl();
    OAIPipelineImpl(QString json);
    ~OAIPipelineImpl() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);

    qint32 getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(const qint32 &estimated_duration_in_millis);

    QString getFullName() const;
    void setFullName(const QString &full_name);

    QString getLatestRun() const;
    void setLatestRun(const QString &latest_run);

    QString getName() const;
    void setName(const QString &name);

    QString getOrganization() const;
    void setOrganization(const QString &organization);

    qint32 getWeatherScore() const;
    void setWeatherScore(const qint32 &weather_score);

    OAIPipelineImpllinks getLinks() const;
    void setLinks(const OAIPipelineImpllinks &_links);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    QString display_name;
    bool m_display_name_isSet;

    qint32 estimated_duration_in_millis;
    bool m_estimated_duration_in_millis_isSet;

    QString full_name;
    bool m_full_name_isSet;

    QString latest_run;
    bool m_latest_run_isSet;

    QString name;
    bool m_name_isSet;

    QString organization;
    bool m_organization_isSet;

    qint32 weather_score;
    bool m_weather_score_isSet;

    OAIPipelineImpllinks _links;
    bool m__links_isSet;

};

}

#endif // OAIPipelineImpl_H