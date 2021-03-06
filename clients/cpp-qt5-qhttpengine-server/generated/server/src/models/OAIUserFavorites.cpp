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


#include "OAIUserFavorites.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIUserFavorites::OAIUserFavorites(QString json) {
    this->fromJson(json);
}

OAIUserFavorites::OAIUserFavorites() {
    this->init();
}

OAIUserFavorites::~OAIUserFavorites() {
    
}

void
OAIUserFavorites::init() {
}

void
OAIUserFavorites::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIUserFavorites::fromJsonObject(QJsonObject json) {
}

QString
OAIUserFavorites::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIUserFavorites::asJsonObject() const {
    QJsonObject obj;
    return obj;
}


bool
OAIUserFavorites::isSet() const {
    bool isObjectUpdated = false;
    do{ }while(false);
    return isObjectUpdated;
}

}

