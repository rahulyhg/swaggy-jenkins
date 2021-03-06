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
 * OAIHudsonMasterComputerexecutors.h
 *
 * 
 */

#ifndef OAIHudsonMasterComputerexecutors_H
#define OAIHudsonMasterComputerexecutors_H

#include <QJsonObject>


#include "OAIFreeStyleBuild.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIHudsonMasterComputerexecutors: public OAIObject {
public:
    OAIHudsonMasterComputerexecutors();
    OAIHudsonMasterComputerexecutors(QString json);
    ~OAIHudsonMasterComputerexecutors() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIFreeStyleBuild getCurrentExecutable() const;
    void setCurrentExecutable(const OAIFreeStyleBuild &current_executable);

    bool isIdle() const;
    void setIdle(const bool &idle);

    bool isLikelyStuck() const;
    void setLikelyStuck(const bool &likely_stuck);

    qint32 getNumber() const;
    void setNumber(const qint32 &number);

    qint32 getProgress() const;
    void setProgress(const qint32 &progress);

    QString getClass() const;
    void setClass(const QString &_class);

    virtual bool isSet() const override;

private:
    OAIFreeStyleBuild current_executable;
    bool m_current_executable_isSet;

    bool idle;
    bool m_idle_isSet;

    bool likely_stuck;
    bool m_likely_stuck_isSet;

    qint32 number;
    bool m_number_isSet;

    qint32 progress;
    bool m_progress_isSet;

    QString _class;
    bool m__class_isSet;

};

}

#endif // OAIHudsonMasterComputerexecutors_H
