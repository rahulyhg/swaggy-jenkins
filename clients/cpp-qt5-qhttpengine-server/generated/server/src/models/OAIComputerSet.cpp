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


#include "OAIComputerSet.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComputerSet::OAIComputerSet(QString json) {
    this->fromJson(json);
}

OAIComputerSet::OAIComputerSet() {
    this->init();
}

OAIComputerSet::~OAIComputerSet() {
    
}

void
OAIComputerSet::init() {
    m__class_isSet = false;
    m_busy_executors_isSet = false;
    m_computer_isSet = false;
    m_display_name_isSet = false;
    m_total_executors_isSet = false;
}

void
OAIComputerSet::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComputerSet::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(busy_executors, json[QString("busyExecutors")]);
    
    
    ::OpenAPI::fromJsonValue(computer, json[QString("computer")]);
    ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    
    ::OpenAPI::fromJsonValue(total_executors, json[QString("totalExecutors")]);
    
}

QString
OAIComputerSet::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComputerSet::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(m_busy_executors_isSet){
        obj.insert(QString("busyExecutors"), ::OpenAPI::toJsonValue(busy_executors));
    }
	
    if(computer.size() > 0){
        obj.insert(QString("computer"), ::OpenAPI::toJsonValue(computer));
    } 
	if(m_display_name_isSet){
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
	if(m_total_executors_isSet){
        obj.insert(QString("totalExecutors"), ::OpenAPI::toJsonValue(total_executors));
    }
    return obj;
}

QString
OAIComputerSet::getClass() const {
    return _class;
}
void
OAIComputerSet::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

qint32
OAIComputerSet::getBusyExecutors() const {
    return busy_executors;
}
void
OAIComputerSet::setBusyExecutors(const qint32 &busy_executors) {
    this->busy_executors = busy_executors;
    this->m_busy_executors_isSet = true;
}

QList<OAIHudsonMasterComputer>
OAIComputerSet::getComputer() const {
    return computer;
}
void
OAIComputerSet::setComputer(const QList<OAIHudsonMasterComputer> &computer) {
    this->computer = computer;
    this->m_computer_isSet = true;
}

QString
OAIComputerSet::getDisplayName() const {
    return display_name;
}
void
OAIComputerSet::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

qint32
OAIComputerSet::getTotalExecutors() const {
    return total_executors;
}
void
OAIComputerSet::setTotalExecutors(const qint32 &total_executors) {
    this->total_executors = total_executors;
    this->m_total_executors_isSet = true;
}


bool
OAIComputerSet::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(m_busy_executors_isSet){ isObjectUpdated = true; break;}
    
        if(computer.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_display_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_total_executors_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
