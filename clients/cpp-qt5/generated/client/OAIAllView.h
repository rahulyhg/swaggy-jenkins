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
 * OAIAllView.h
 *
 * 
 */

#ifndef OAIAllView_H_
#define OAIAllView_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIAllView: public OAIObject {
public:
    OAIAllView();
    OAIAllView(QString json);
    ~OAIAllView();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIAllView* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    QString* getName();
    void setName(QString* name);

    QString* getUrl();
    void setUrl(QString* url);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    QString* name;
    bool m_name_isSet;

    QString* url;
    bool m_url_isSet;

};

}

#endif /* OAIAllView_H_ */
