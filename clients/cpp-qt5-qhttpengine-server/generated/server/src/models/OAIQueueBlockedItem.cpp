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


#include "OAIQueueBlockedItem.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIQueueBlockedItem::OAIQueueBlockedItem(QString json) {
    this->fromJson(json);
}

OAIQueueBlockedItem::OAIQueueBlockedItem() {
    this->init();
}

OAIQueueBlockedItem::~OAIQueueBlockedItem() {
    
}

void
OAIQueueBlockedItem::init() {
    m__class_isSet = false;
    m_actions_isSet = false;
    m_blocked_isSet = false;
    m_buildable_isSet = false;
    m_id_isSet = false;
    m_in_queue_since_isSet = false;
    m_params_isSet = false;
    m_stuck_isSet = false;
    m_task_isSet = false;
    m_url_isSet = false;
    m_why_isSet = false;
    m_buildable_start_milliseconds_isSet = false;
}

void
OAIQueueBlockedItem::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIQueueBlockedItem::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    
    ::OpenAPI::fromJsonValue(actions, json[QString("actions")]);
    ::OpenAPI::fromJsonValue(blocked, json[QString("blocked")]);
    
    ::OpenAPI::fromJsonValue(buildable, json[QString("buildable")]);
    
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(in_queue_since, json[QString("inQueueSince")]);
    
    ::OpenAPI::fromJsonValue(params, json[QString("params")]);
    
    ::OpenAPI::fromJsonValue(stuck, json[QString("stuck")]);
    
    ::OpenAPI::fromJsonValue(task, json[QString("task")]);
    
    ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    
    ::OpenAPI::fromJsonValue(why, json[QString("why")]);
    
    ::OpenAPI::fromJsonValue(buildable_start_milliseconds, json[QString("buildableStartMilliseconds")]);
    
}

QString
OAIQueueBlockedItem::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIQueueBlockedItem::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	
    if(actions.size() > 0){
        obj.insert(QString("actions"), ::OpenAPI::toJsonValue(actions));
    } 
	if(m_blocked_isSet){
        obj.insert(QString("blocked"), ::OpenAPI::toJsonValue(blocked));
    }
	if(m_buildable_isSet){
        obj.insert(QString("buildable"), ::OpenAPI::toJsonValue(buildable));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_in_queue_since_isSet){
        obj.insert(QString("inQueueSince"), ::OpenAPI::toJsonValue(in_queue_since));
    }
	if(m_params_isSet){
        obj.insert(QString("params"), ::OpenAPI::toJsonValue(params));
    }
	if(m_stuck_isSet){
        obj.insert(QString("stuck"), ::OpenAPI::toJsonValue(stuck));
    }
	if(task.isSet()){
        obj.insert(QString("task"), ::OpenAPI::toJsonValue(task));
    }
	if(m_url_isSet){
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
	if(m_why_isSet){
        obj.insert(QString("why"), ::OpenAPI::toJsonValue(why));
    }
	if(m_buildable_start_milliseconds_isSet){
        obj.insert(QString("buildableStartMilliseconds"), ::OpenAPI::toJsonValue(buildable_start_milliseconds));
    }
    return obj;
}

QString
OAIQueueBlockedItem::getClass() const {
    return _class;
}
void
OAIQueueBlockedItem::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QList<OAICauseAction>
OAIQueueBlockedItem::getActions() const {
    return actions;
}
void
OAIQueueBlockedItem::setActions(const QList<OAICauseAction> &actions) {
    this->actions = actions;
    this->m_actions_isSet = true;
}

bool
OAIQueueBlockedItem::isBlocked() const {
    return blocked;
}
void
OAIQueueBlockedItem::setBlocked(const bool &blocked) {
    this->blocked = blocked;
    this->m_blocked_isSet = true;
}

bool
OAIQueueBlockedItem::isBuildable() const {
    return buildable;
}
void
OAIQueueBlockedItem::setBuildable(const bool &buildable) {
    this->buildable = buildable;
    this->m_buildable_isSet = true;
}

qint32
OAIQueueBlockedItem::getId() const {
    return id;
}
void
OAIQueueBlockedItem::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}

qint32
OAIQueueBlockedItem::getInQueueSince() const {
    return in_queue_since;
}
void
OAIQueueBlockedItem::setInQueueSince(const qint32 &in_queue_since) {
    this->in_queue_since = in_queue_since;
    this->m_in_queue_since_isSet = true;
}

QString
OAIQueueBlockedItem::getParams() const {
    return params;
}
void
OAIQueueBlockedItem::setParams(const QString &params) {
    this->params = params;
    this->m_params_isSet = true;
}

bool
OAIQueueBlockedItem::isStuck() const {
    return stuck;
}
void
OAIQueueBlockedItem::setStuck(const bool &stuck) {
    this->stuck = stuck;
    this->m_stuck_isSet = true;
}

OAIFreeStyleProject
OAIQueueBlockedItem::getTask() const {
    return task;
}
void
OAIQueueBlockedItem::setTask(const OAIFreeStyleProject &task) {
    this->task = task;
    this->m_task_isSet = true;
}

QString
OAIQueueBlockedItem::getUrl() const {
    return url;
}
void
OAIQueueBlockedItem::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

QString
OAIQueueBlockedItem::getWhy() const {
    return why;
}
void
OAIQueueBlockedItem::setWhy(const QString &why) {
    this->why = why;
    this->m_why_isSet = true;
}

qint32
OAIQueueBlockedItem::getBuildableStartMilliseconds() const {
    return buildable_start_milliseconds;
}
void
OAIQueueBlockedItem::setBuildableStartMilliseconds(const qint32 &buildable_start_milliseconds) {
    this->buildable_start_milliseconds = buildable_start_milliseconds;
    this->m_buildable_start_milliseconds_isSet = true;
}


bool
OAIQueueBlockedItem::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(actions.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_blocked_isSet){ isObjectUpdated = true; break;}
    
        if(m_buildable_isSet){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_in_queue_since_isSet){ isObjectUpdated = true; break;}
    
        if(m_params_isSet){ isObjectUpdated = true; break;}
    
        if(m_stuck_isSet){ isObjectUpdated = true; break;}
    
        if(task.isSet()){ isObjectUpdated = true; break;}
    
        if(m_url_isSet){ isObjectUpdated = true; break;}
    
        if(m_why_isSet){ isObjectUpdated = true; break;}
    
        if(m_buildable_start_milliseconds_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

