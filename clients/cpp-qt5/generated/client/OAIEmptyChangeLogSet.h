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
 * OAIEmptyChangeLogSet.h
 *
 * 
 */

#ifndef OAIEmptyChangeLogSet_H_
#define OAIEmptyChangeLogSet_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIEmptyChangeLogSet: public OAIObject {
public:
    OAIEmptyChangeLogSet();
    OAIEmptyChangeLogSet(QString json);
    ~OAIEmptyChangeLogSet();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIEmptyChangeLogSet* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    QString* getKind();
    void setKind(QString* kind);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    QString* kind;
    bool m_kind_isSet;

};

}

#endif /* OAIEmptyChangeLogSet_H_ */
