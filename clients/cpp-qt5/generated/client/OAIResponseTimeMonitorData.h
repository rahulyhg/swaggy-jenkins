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
 * OAIResponseTimeMonitorData.h
 *
 * 
 */

#ifndef OAIResponseTimeMonitorData_H_
#define OAIResponseTimeMonitorData_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeMonitorData: public OAIObject {
public:
    OAIResponseTimeMonitorData();
    OAIResponseTimeMonitorData(QString json);
    ~OAIResponseTimeMonitorData();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIResponseTimeMonitorData* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    qint32 getTimestamp();
    void setTimestamp(qint32 timestamp);

    qint32 getAverage();
    void setAverage(qint32 average);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    qint32 timestamp;
    bool m_timestamp_isSet;

    qint32 average;
    bool m_average_isSet;

};

}

#endif /* OAIResponseTimeMonitorData_H_ */
