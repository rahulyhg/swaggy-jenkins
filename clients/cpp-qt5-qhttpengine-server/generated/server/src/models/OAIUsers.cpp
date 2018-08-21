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


#include "OAIUsers.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIUsers::OAIUsers(QString json) {
    this->fromJson(json);
}

OAIUsers::OAIUsers() {
    this->init();
}

OAIUsers::~OAIUsers() {
    
}

void
OAIUsers::init() {
}

void
OAIUsers::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIUsers::fromJsonObject(QJsonObject json) {
}

QString
OAIUsers::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIUsers::asJsonObject() const {
    QJsonObject obj;
    return obj;
}


bool
OAIUsers::isSet() const {
    bool isObjectUpdated = false;
    do{ }while(false);
    return isObjectUpdated;
}

}
