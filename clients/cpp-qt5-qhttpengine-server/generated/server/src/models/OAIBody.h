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
 * OAIBody.h
 *
 * 
 */

#ifndef OAIBody_H
#define OAIBody_H

#include <QJsonObject>



#include "OAIObject.h"

namespace OpenAPI {

class OAIBody: public OAIObject {
public:
    OAIBody();
    OAIBody(QString json);
    ~OAIBody() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isFavorite() const;
    void setFavorite(const bool &favorite);

    virtual bool isSet() const override;

private:
    bool favorite;
    bool m_favorite_isSet;

};

}

#endif // OAIBody_H