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


#include "OAIListView.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIListView::OAIListView(QString json) {
    this->fromJson(json);
}

OAIListView::OAIListView() {
    this->init();
}

OAIListView::~OAIListView() {
    
}

void
OAIListView::init() {
    m__class_isSet = false;
    m_description_isSet = false;
    m_jobs_isSet = false;
    m_name_isSet = false;
    m_url_isSet = false;
}

void
OAIListView::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIListView::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    
    ::OpenAPI::fromJsonValue(jobs, json[QString("jobs")]);
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    
}

QString
OAIListView::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIListView::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(m_description_isSet){
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
	
    if(jobs.size() > 0){
        obj.insert(QString("jobs"), ::OpenAPI::toJsonValue(jobs));
    } 
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_url_isSet){
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
    return obj;
}

QString
OAIListView::getClass() const {
    return _class;
}
void
OAIListView::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString
OAIListView::getDescription() const {
    return description;
}
void
OAIListView::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

QList<OAIFreeStyleProject>
OAIListView::getJobs() const {
    return jobs;
}
void
OAIListView::setJobs(const QList<OAIFreeStyleProject> &jobs) {
    this->jobs = jobs;
    this->m_jobs_isSet = true;
}

QString
OAIListView::getName() const {
    return name;
}
void
OAIListView::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString
OAIListView::getUrl() const {
    return url;
}
void
OAIListView::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}


bool
OAIListView::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(m_description_isSet){ isObjectUpdated = true; break;}
    
        if(jobs.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_url_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

