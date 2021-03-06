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


#include "OAIGithubRespositoryContainer.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIGithubRespositoryContainer::OAIGithubRespositoryContainer(QString json) {
    this->fromJson(json);
}

OAIGithubRespositoryContainer::OAIGithubRespositoryContainer() {
    this->init();
}

OAIGithubRespositoryContainer::~OAIGithubRespositoryContainer() {
    
}

void
OAIGithubRespositoryContainer::init() {
    m__class_isSet = false;
    m__links_isSet = false;
    m_repositories_isSet = false;
}

void
OAIGithubRespositoryContainer::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIGithubRespositoryContainer::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(_links, json[QString("_links")]);
    
    ::OpenAPI::fromJsonValue(repositories, json[QString("repositories")]);
    
}

QString
OAIGithubRespositoryContainer::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIGithubRespositoryContainer::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(_links.isSet()){
        obj.insert(QString("_links"), ::OpenAPI::toJsonValue(_links));
    }
	if(repositories.isSet()){
        obj.insert(QString("repositories"), ::OpenAPI::toJsonValue(repositories));
    }
    return obj;
}

QString
OAIGithubRespositoryContainer::getClass() const {
    return _class;
}
void
OAIGithubRespositoryContainer::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

OAIGithubRespositoryContainerlinks
OAIGithubRespositoryContainer::getLinks() const {
    return _links;
}
void
OAIGithubRespositoryContainer::setLinks(const OAIGithubRespositoryContainerlinks &_links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

OAIGithubRepositories
OAIGithubRespositoryContainer::getRepositories() const {
    return repositories;
}
void
OAIGithubRespositoryContainer::setRepositories(const OAIGithubRepositories &repositories) {
    this->repositories = repositories;
    this->m_repositories_isSet = true;
}


bool
OAIGithubRespositoryContainer::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(_links.isSet()){ isObjectUpdated = true; break;}
    
        if(repositories.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

