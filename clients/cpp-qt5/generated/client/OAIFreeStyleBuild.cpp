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


#include "OAIFreeStyleBuild.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIFreeStyleBuild::OAIFreeStyleBuild(QString json) {
    init();
    this->fromJson(json);
}

OAIFreeStyleBuild::OAIFreeStyleBuild() {
    init();
}

OAIFreeStyleBuild::~OAIFreeStyleBuild() {
    this->cleanup();
}

void
OAIFreeStyleBuild::init() {
    _class = new QString("");
    m__class_isSet = false;
    number = 0;
    m_number_isSet = false;
    url = new QString("");
    m_url_isSet = false;
    actions = new QList<OAICauseAction*>();
    m_actions_isSet = false;
    building = false;
    m_building_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    display_name = new QString("");
    m_display_name_isSet = false;
    duration = 0;
    m_duration_isSet = false;
    estimated_duration = 0;
    m_estimated_duration_isSet = false;
    executor = new QString("");
    m_executor_isSet = false;
    full_display_name = new QString("");
    m_full_display_name_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    keep_log = false;
    m_keep_log_isSet = false;
    queue_id = 0;
    m_queue_id_isSet = false;
    result = new QString("");
    m_result_isSet = false;
    timestamp = 0;
    m_timestamp_isSet = false;
    built_on = new QString("");
    m_built_on_isSet = false;
    change_set = new OAIEmptyChangeLogSet();
    m_change_set_isSet = false;
}

void
OAIFreeStyleBuild::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }

    if(url != nullptr) { 
        delete url;
    }
    if(actions != nullptr) { 
        auto arr = actions;
        for(auto o: *arr) { 
            delete o;
        }
        delete actions;
    }

    if(description != nullptr) { 
        delete description;
    }
    if(display_name != nullptr) { 
        delete display_name;
    }


    if(executor != nullptr) { 
        delete executor;
    }
    if(full_display_name != nullptr) { 
        delete full_display_name;
    }
    if(id != nullptr) { 
        delete id;
    }


    if(result != nullptr) { 
        delete result;
    }

    if(built_on != nullptr) { 
        delete built_on;
    }
    if(change_set != nullptr) { 
        delete change_set;
    }
}

OAIFreeStyleBuild*
OAIFreeStyleBuild::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIFreeStyleBuild::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&number, pJson["number"], "qint32", "");
    
    ::OpenAPI::setValue(&url, pJson["url"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&actions, pJson["actions"], "QList", "OAICauseAction");
    ::OpenAPI::setValue(&building, pJson["building"], "bool", "");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&display_name, pJson["displayName"], "QString", "QString");
    
    ::OpenAPI::setValue(&duration, pJson["duration"], "qint32", "");
    
    ::OpenAPI::setValue(&estimated_duration, pJson["estimatedDuration"], "qint32", "");
    
    ::OpenAPI::setValue(&executor, pJson["executor"], "QString", "QString");
    
    ::OpenAPI::setValue(&full_display_name, pJson["fullDisplayName"], "QString", "QString");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&keep_log, pJson["keepLog"], "bool", "");
    
    ::OpenAPI::setValue(&queue_id, pJson["queueId"], "qint32", "");
    
    ::OpenAPI::setValue(&result, pJson["result"], "QString", "QString");
    
    ::OpenAPI::setValue(&timestamp, pJson["timestamp"], "qint32", "");
    
    ::OpenAPI::setValue(&built_on, pJson["builtOn"], "QString", "QString");
    
    ::OpenAPI::setValue(&change_set, pJson["changeSet"], "OAIEmptyChangeLogSet", "OAIEmptyChangeLogSet");
    
}

QString
OAIFreeStyleBuild::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIFreeStyleBuild::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(m_number_isSet){
        obj.insert("number", QJsonValue(number));
    }
    if(url != nullptr && *url != QString("")){
        toJsonValue(QString("url"), url, obj, QString("QString"));
    }
    if(actions->size() > 0){
        toJsonArray((QList<void*>*)actions, obj, "actions", "OAICauseAction");
    }
    if(m_building_isSet){
        obj.insert("building", QJsonValue(building));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(display_name != nullptr && *display_name != QString("")){
        toJsonValue(QString("displayName"), display_name, obj, QString("QString"));
    }
    if(m_duration_isSet){
        obj.insert("duration", QJsonValue(duration));
    }
    if(m_estimated_duration_isSet){
        obj.insert("estimatedDuration", QJsonValue(estimated_duration));
    }
    if(executor != nullptr && *executor != QString("")){
        toJsonValue(QString("executor"), executor, obj, QString("QString"));
    }
    if(full_display_name != nullptr && *full_display_name != QString("")){
        toJsonValue(QString("fullDisplayName"), full_display_name, obj, QString("QString"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(m_keep_log_isSet){
        obj.insert("keepLog", QJsonValue(keep_log));
    }
    if(m_queue_id_isSet){
        obj.insert("queueId", QJsonValue(queue_id));
    }
    if(result != nullptr && *result != QString("")){
        toJsonValue(QString("result"), result, obj, QString("QString"));
    }
    if(m_timestamp_isSet){
        obj.insert("timestamp", QJsonValue(timestamp));
    }
    if(built_on != nullptr && *built_on != QString("")){
        toJsonValue(QString("builtOn"), built_on, obj, QString("QString"));
    }
    if((change_set != nullptr) && (change_set->isSet())){
        toJsonValue(QString("changeSet"), change_set, obj, QString("OAIEmptyChangeLogSet"));
    }

    return obj;
}

QString*
OAIFreeStyleBuild::getClass() {
    return _class;
}
void
OAIFreeStyleBuild::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

qint32
OAIFreeStyleBuild::getNumber() {
    return number;
}
void
OAIFreeStyleBuild::setNumber(qint32 number) {
    this->number = number;
    this->m_number_isSet = true;
}

QString*
OAIFreeStyleBuild::getUrl() {
    return url;
}
void
OAIFreeStyleBuild::setUrl(QString* url) {
    this->url = url;
    this->m_url_isSet = true;
}

QList<OAICauseAction*>*
OAIFreeStyleBuild::getActions() {
    return actions;
}
void
OAIFreeStyleBuild::setActions(QList<OAICauseAction*>* actions) {
    this->actions = actions;
    this->m_actions_isSet = true;
}

bool
OAIFreeStyleBuild::isBuilding() {
    return building;
}
void
OAIFreeStyleBuild::setBuilding(bool building) {
    this->building = building;
    this->m_building_isSet = true;
}

QString*
OAIFreeStyleBuild::getDescription() {
    return description;
}
void
OAIFreeStyleBuild::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QString*
OAIFreeStyleBuild::getDisplayName() {
    return display_name;
}
void
OAIFreeStyleBuild::setDisplayName(QString* display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

qint32
OAIFreeStyleBuild::getDuration() {
    return duration;
}
void
OAIFreeStyleBuild::setDuration(qint32 duration) {
    this->duration = duration;
    this->m_duration_isSet = true;
}

qint32
OAIFreeStyleBuild::getEstimatedDuration() {
    return estimated_duration;
}
void
OAIFreeStyleBuild::setEstimatedDuration(qint32 estimated_duration) {
    this->estimated_duration = estimated_duration;
    this->m_estimated_duration_isSet = true;
}

QString*
OAIFreeStyleBuild::getExecutor() {
    return executor;
}
void
OAIFreeStyleBuild::setExecutor(QString* executor) {
    this->executor = executor;
    this->m_executor_isSet = true;
}

QString*
OAIFreeStyleBuild::getFullDisplayName() {
    return full_display_name;
}
void
OAIFreeStyleBuild::setFullDisplayName(QString* full_display_name) {
    this->full_display_name = full_display_name;
    this->m_full_display_name_isSet = true;
}

QString*
OAIFreeStyleBuild::getId() {
    return id;
}
void
OAIFreeStyleBuild::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool
OAIFreeStyleBuild::isKeepLog() {
    return keep_log;
}
void
OAIFreeStyleBuild::setKeepLog(bool keep_log) {
    this->keep_log = keep_log;
    this->m_keep_log_isSet = true;
}

qint32
OAIFreeStyleBuild::getQueueId() {
    return queue_id;
}
void
OAIFreeStyleBuild::setQueueId(qint32 queue_id) {
    this->queue_id = queue_id;
    this->m_queue_id_isSet = true;
}

QString*
OAIFreeStyleBuild::getResult() {
    return result;
}
void
OAIFreeStyleBuild::setResult(QString* result) {
    this->result = result;
    this->m_result_isSet = true;
}

qint32
OAIFreeStyleBuild::getTimestamp() {
    return timestamp;
}
void
OAIFreeStyleBuild::setTimestamp(qint32 timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

QString*
OAIFreeStyleBuild::getBuiltOn() {
    return built_on;
}
void
OAIFreeStyleBuild::setBuiltOn(QString* built_on) {
    this->built_on = built_on;
    this->m_built_on_isSet = true;
}

OAIEmptyChangeLogSet*
OAIFreeStyleBuild::getChangeSet() {
    return change_set;
}
void
OAIFreeStyleBuild::setChangeSet(OAIEmptyChangeLogSet* change_set) {
    this->change_set = change_set;
    this->m_change_set_isSet = true;
}


bool
OAIFreeStyleBuild::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(m_number_isSet){ isObjectUpdated = true; break;}
        if(url != nullptr && *url != QString("")){ isObjectUpdated = true; break;}
        if(actions->size() > 0){ isObjectUpdated = true; break;}
        if(m_building_isSet){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(display_name != nullptr && *display_name != QString("")){ isObjectUpdated = true; break;}
        if(m_duration_isSet){ isObjectUpdated = true; break;}
        if(m_estimated_duration_isSet){ isObjectUpdated = true; break;}
        if(executor != nullptr && *executor != QString("")){ isObjectUpdated = true; break;}
        if(full_display_name != nullptr && *full_display_name != QString("")){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(m_keep_log_isSet){ isObjectUpdated = true; break;}
        if(m_queue_id_isSet){ isObjectUpdated = true; break;}
        if(result != nullptr && *result != QString("")){ isObjectUpdated = true; break;}
        if(m_timestamp_isSet){ isObjectUpdated = true; break;}
        if(built_on != nullptr && *built_on != QString("")){ isObjectUpdated = true; break;}
        if(change_set != nullptr && change_set->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

