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

/*
 * PipelineRunNodeSteps.h
 * 
 * 
 */

#ifndef PipelineRunNodeSteps_H_
#define PipelineRunNodeSteps_H_

#include <QJsonObject>


#include "PipelineStepImpl.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class PipelineRunNodeSteps: public SWGObject {
public:
    PipelineRunNodeSteps();
    PipelineRunNodeSteps(QString* json);
    virtual ~PipelineRunNodeSteps();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineRunNodeSteps* fromJson(QString &jsonString);


private:
};

}

#endif /* PipelineRunNodeSteps_H_ */