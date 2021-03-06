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


#include "OAIQueueItemImpl.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIQueueItemImpl::OAIQueueItemImpl(QString json) {
    init();
    this->fromJson(json);
}

OAIQueueItemImpl::OAIQueueItemImpl() {
    init();
}

OAIQueueItemImpl::~OAIQueueItemImpl() {
    this->cleanup();
}

void
OAIQueueItemImpl::init() {
    _class = new QString("");
    m__class_isSet = false;
    expected_build_number = 0;
    m_expected_build_number_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    pipeline = new QString("");
    m_pipeline_isSet = false;
    queued_time = 0;
    m_queued_time_isSet = false;
}

void
OAIQueueItemImpl::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }

    if(id != nullptr) { 
        delete id;
    }
    if(pipeline != nullptr) { 
        delete pipeline;
    }

}

OAIQueueItemImpl*
OAIQueueItemImpl::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIQueueItemImpl::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&expected_build_number, pJson["expectedBuildNumber"], "qint32", "");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&pipeline, pJson["pipeline"], "QString", "QString");
    
    ::OpenAPI::setValue(&queued_time, pJson["queuedTime"], "qint32", "");
    
}

QString
OAIQueueItemImpl::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIQueueItemImpl::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(m_expected_build_number_isSet){
        obj.insert("expectedBuildNumber", QJsonValue(expected_build_number));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(pipeline != nullptr && *pipeline != QString("")){
        toJsonValue(QString("pipeline"), pipeline, obj, QString("QString"));
    }
    if(m_queued_time_isSet){
        obj.insert("queuedTime", QJsonValue(queued_time));
    }

    return obj;
}

QString*
OAIQueueItemImpl::getClass() {
    return _class;
}
void
OAIQueueItemImpl::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

qint32
OAIQueueItemImpl::getExpectedBuildNumber() {
    return expected_build_number;
}
void
OAIQueueItemImpl::setExpectedBuildNumber(qint32 expected_build_number) {
    this->expected_build_number = expected_build_number;
    this->m_expected_build_number_isSet = true;
}

QString*
OAIQueueItemImpl::getId() {
    return id;
}
void
OAIQueueItemImpl::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
OAIQueueItemImpl::getPipeline() {
    return pipeline;
}
void
OAIQueueItemImpl::setPipeline(QString* pipeline) {
    this->pipeline = pipeline;
    this->m_pipeline_isSet = true;
}

qint32
OAIQueueItemImpl::getQueuedTime() {
    return queued_time;
}
void
OAIQueueItemImpl::setQueuedTime(qint32 queued_time) {
    this->queued_time = queued_time;
    this->m_queued_time_isSet = true;
}


bool
OAIQueueItemImpl::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(m_expected_build_number_isSet){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(pipeline != nullptr && *pipeline != QString("")){ isObjectUpdated = true; break;}
        if(m_queued_time_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

