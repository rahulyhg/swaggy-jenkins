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


#include "OAIPipelineImpl.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineImpl::OAIPipelineImpl(QString json) {
    init();
    this->fromJson(json);
}

OAIPipelineImpl::OAIPipelineImpl() {
    init();
}

OAIPipelineImpl::~OAIPipelineImpl() {
    this->cleanup();
}

void
OAIPipelineImpl::init() {
    _class = new QString("");
    m__class_isSet = false;
    display_name = new QString("");
    m_display_name_isSet = false;
    estimated_duration_in_millis = 0;
    m_estimated_duration_in_millis_isSet = false;
    full_name = new QString("");
    m_full_name_isSet = false;
    latest_run = new QString("");
    m_latest_run_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    organization = new QString("");
    m_organization_isSet = false;
    weather_score = 0;
    m_weather_score_isSet = false;
    _links = new OAIPipelineImpllinks();
    m__links_isSet = false;
}

void
OAIPipelineImpl::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(display_name != nullptr) { 
        delete display_name;
    }

    if(full_name != nullptr) { 
        delete full_name;
    }
    if(latest_run != nullptr) { 
        delete latest_run;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(organization != nullptr) { 
        delete organization;
    }

    if(_links != nullptr) { 
        delete _links;
    }
}

OAIPipelineImpl*
OAIPipelineImpl::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIPipelineImpl::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&display_name, pJson["displayName"], "QString", "QString");
    
    ::OpenAPI::setValue(&estimated_duration_in_millis, pJson["estimatedDurationInMillis"], "qint32", "");
    
    ::OpenAPI::setValue(&full_name, pJson["fullName"], "QString", "QString");
    
    ::OpenAPI::setValue(&latest_run, pJson["latestRun"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&organization, pJson["organization"], "QString", "QString");
    
    ::OpenAPI::setValue(&weather_score, pJson["weatherScore"], "qint32", "");
    
    ::OpenAPI::setValue(&_links, pJson["_links"], "OAIPipelineImpllinks", "OAIPipelineImpllinks");
    
}

QString
OAIPipelineImpl::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineImpl::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(display_name != nullptr && *display_name != QString("")){
        toJsonValue(QString("displayName"), display_name, obj, QString("QString"));
    }
    if(m_estimated_duration_in_millis_isSet){
        obj.insert("estimatedDurationInMillis", QJsonValue(estimated_duration_in_millis));
    }
    if(full_name != nullptr && *full_name != QString("")){
        toJsonValue(QString("fullName"), full_name, obj, QString("QString"));
    }
    if(latest_run != nullptr && *latest_run != QString("")){
        toJsonValue(QString("latestRun"), latest_run, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(organization != nullptr && *organization != QString("")){
        toJsonValue(QString("organization"), organization, obj, QString("QString"));
    }
    if(m_weather_score_isSet){
        obj.insert("weatherScore", QJsonValue(weather_score));
    }
    if((_links != nullptr) && (_links->isSet())){
        toJsonValue(QString("_links"), _links, obj, QString("OAIPipelineImpllinks"));
    }

    return obj;
}

QString*
OAIPipelineImpl::getClass() {
    return _class;
}
void
OAIPipelineImpl::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString*
OAIPipelineImpl::getDisplayName() {
    return display_name;
}
void
OAIPipelineImpl::setDisplayName(QString* display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

qint32
OAIPipelineImpl::getEstimatedDurationInMillis() {
    return estimated_duration_in_millis;
}
void
OAIPipelineImpl::setEstimatedDurationInMillis(qint32 estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
    this->m_estimated_duration_in_millis_isSet = true;
}

QString*
OAIPipelineImpl::getFullName() {
    return full_name;
}
void
OAIPipelineImpl::setFullName(QString* full_name) {
    this->full_name = full_name;
    this->m_full_name_isSet = true;
}

QString*
OAIPipelineImpl::getLatestRun() {
    return latest_run;
}
void
OAIPipelineImpl::setLatestRun(QString* latest_run) {
    this->latest_run = latest_run;
    this->m_latest_run_isSet = true;
}

QString*
OAIPipelineImpl::getName() {
    return name;
}
void
OAIPipelineImpl::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
OAIPipelineImpl::getOrganization() {
    return organization;
}
void
OAIPipelineImpl::setOrganization(QString* organization) {
    this->organization = organization;
    this->m_organization_isSet = true;
}

qint32
OAIPipelineImpl::getWeatherScore() {
    return weather_score;
}
void
OAIPipelineImpl::setWeatherScore(qint32 weather_score) {
    this->weather_score = weather_score;
    this->m_weather_score_isSet = true;
}

OAIPipelineImpllinks*
OAIPipelineImpl::getLinks() {
    return _links;
}
void
OAIPipelineImpl::setLinks(OAIPipelineImpllinks* _links) {
    this->_links = _links;
    this->m__links_isSet = true;
}


bool
OAIPipelineImpl::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(display_name != nullptr && *display_name != QString("")){ isObjectUpdated = true; break;}
        if(m_estimated_duration_in_millis_isSet){ isObjectUpdated = true; break;}
        if(full_name != nullptr && *full_name != QString("")){ isObjectUpdated = true; break;}
        if(latest_run != nullptr && *latest_run != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(organization != nullptr && *organization != QString("")){ isObjectUpdated = true; break;}
        if(m_weather_score_isSet){ isObjectUpdated = true; break;}
        if(_links != nullptr && _links->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

