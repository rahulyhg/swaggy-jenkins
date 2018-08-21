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


#include "OAIHudsonMasterComputerexecutors.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIHudsonMasterComputerexecutors::OAIHudsonMasterComputerexecutors(QString json) {
    this->fromJson(json);
}

OAIHudsonMasterComputerexecutors::OAIHudsonMasterComputerexecutors() {
    this->init();
}

OAIHudsonMasterComputerexecutors::~OAIHudsonMasterComputerexecutors() {
    
}

void
OAIHudsonMasterComputerexecutors::init() {
    m_current_executable_isSet = false;
    m_idle_isSet = false;
    m_likely_stuck_isSet = false;
    m_number_isSet = false;
    m_progress_isSet = false;
    m__class_isSet = false;
}

void
OAIHudsonMasterComputerexecutors::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIHudsonMasterComputerexecutors::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(current_executable, json[QString("currentExecutable")]);
    
    ::OpenAPI::fromJsonValue(idle, json[QString("idle")]);
    
    ::OpenAPI::fromJsonValue(likely_stuck, json[QString("likelyStuck")]);
    
    ::OpenAPI::fromJsonValue(number, json[QString("number")]);
    
    ::OpenAPI::fromJsonValue(progress, json[QString("progress")]);
    
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIHudsonMasterComputerexecutors::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIHudsonMasterComputerexecutors::asJsonObject() const {
    QJsonObject obj;
	if(current_executable.isSet()){
        obj.insert(QString("currentExecutable"), ::OpenAPI::toJsonValue(current_executable));
    }
	if(m_idle_isSet){
        obj.insert(QString("idle"), ::OpenAPI::toJsonValue(idle));
    }
	if(m_likely_stuck_isSet){
        obj.insert(QString("likelyStuck"), ::OpenAPI::toJsonValue(likely_stuck));
    }
	if(m_number_isSet){
        obj.insert(QString("number"), ::OpenAPI::toJsonValue(number));
    }
	if(m_progress_isSet){
        obj.insert(QString("progress"), ::OpenAPI::toJsonValue(progress));
    }
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

OAIFreeStyleBuild
OAIHudsonMasterComputerexecutors::getCurrentExecutable() const {
    return current_executable;
}
void
OAIHudsonMasterComputerexecutors::setCurrentExecutable(const OAIFreeStyleBuild &current_executable) {
    this->current_executable = current_executable;
    this->m_current_executable_isSet = true;
}

bool
OAIHudsonMasterComputerexecutors::isIdle() const {
    return idle;
}
void
OAIHudsonMasterComputerexecutors::setIdle(const bool &idle) {
    this->idle = idle;
    this->m_idle_isSet = true;
}

bool
OAIHudsonMasterComputerexecutors::isLikelyStuck() const {
    return likely_stuck;
}
void
OAIHudsonMasterComputerexecutors::setLikelyStuck(const bool &likely_stuck) {
    this->likely_stuck = likely_stuck;
    this->m_likely_stuck_isSet = true;
}

qint32
OAIHudsonMasterComputerexecutors::getNumber() const {
    return number;
}
void
OAIHudsonMasterComputerexecutors::setNumber(const qint32 &number) {
    this->number = number;
    this->m_number_isSet = true;
}

qint32
OAIHudsonMasterComputerexecutors::getProgress() const {
    return progress;
}
void
OAIHudsonMasterComputerexecutors::setProgress(const qint32 &progress) {
    this->progress = progress;
    this->m_progress_isSet = true;
}

QString
OAIHudsonMasterComputerexecutors::getClass() const {
    return _class;
}
void
OAIHudsonMasterComputerexecutors::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIHudsonMasterComputerexecutors::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(current_executable.isSet()){ isObjectUpdated = true; break;}
    
        if(m_idle_isSet){ isObjectUpdated = true; break;}
    
        if(m_likely_stuck_isSet){ isObjectUpdated = true; break;}
    
        if(m_number_isSet){ isObjectUpdated = true; break;}
    
        if(m_progress_isSet){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
