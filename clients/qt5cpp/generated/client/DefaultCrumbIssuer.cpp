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


#include "DefaultCrumbIssuer.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

DefaultCrumbIssuer::DefaultCrumbIssuer(QString* json) {
    init();
    this->fromJson(*json);
}

DefaultCrumbIssuer::DefaultCrumbIssuer() {
    init();
}

DefaultCrumbIssuer::~DefaultCrumbIssuer() {
    this->cleanup();
}

void
DefaultCrumbIssuer::init() {
    _class = new QString("");
    crumb = new QString("");
    crumb_request_field = new QString("");
}

void
DefaultCrumbIssuer::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(crumb != nullptr) {
        delete crumb;
    }

    if(crumb_request_field != nullptr) {
        delete crumb_request_field;
    }
}

DefaultCrumbIssuer*
DefaultCrumbIssuer::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
DefaultCrumbIssuer::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&crumb, pJson["crumb"], "QString", "QString");
    ::Swagger::setValue(&crumb_request_field, pJson["crumbRequestField"], "QString", "QString");
}

QString
DefaultCrumbIssuer::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
DefaultCrumbIssuer::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("crumb"), crumb, obj, QString("QString"));

    toJsonValue(QString("crumbRequestField"), crumb_request_field, obj, QString("QString"));

    return obj;
}

QString*
DefaultCrumbIssuer::getClass() {
    return _class;
}
void
DefaultCrumbIssuer::setClass(QString* _class) {
    this->_class = _class;
}

QString*
DefaultCrumbIssuer::getCrumb() {
    return crumb;
}
void
DefaultCrumbIssuer::setCrumb(QString* crumb) {
    this->crumb = crumb;
}

QString*
DefaultCrumbIssuer::getCrumbRequestField() {
    return crumb_request_field;
}
void
DefaultCrumbIssuer::setCrumbRequestField(QString* crumb_request_field) {
    this->crumb_request_field = crumb_request_field;
}


}
