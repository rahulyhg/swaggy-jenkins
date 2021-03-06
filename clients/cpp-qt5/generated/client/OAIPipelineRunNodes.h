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
 * OAIPipelineRunNodes.h
 *
 * 
 */

#ifndef OAIPipelineRunNodes_H_
#define OAIPipelineRunNodes_H_

#include <QJsonObject>


#include "OAIOAIPipelineRunNode.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelineRunNodes: public OAIObject {
public:
    OAIPipelineRunNodes();
    OAIPipelineRunNodes(QString json);
    ~OAIPipelineRunNodes();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIPipelineRunNodes* fromJson(QString jsonString) override;


    virtual bool isSet() override;

private:
};

}

#endif /* OAIPipelineRunNodes_H_ */
