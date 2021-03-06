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


#include "OAIFavoriteImpl.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIFavoriteImpl::OAIFavoriteImpl(QString json) {
    init();
    this->fromJson(json);
}

OAIFavoriteImpl::OAIFavoriteImpl() {
    init();
}

OAIFavoriteImpl::~OAIFavoriteImpl() {
    this->cleanup();
}

void
OAIFavoriteImpl::init() {
    _class = new QString("");
    m__class_isSet = false;
    _links = new OAIFavoriteImpllinks();
    m__links_isSet = false;
    item = new OAIPipelineImpl();
    m_item_isSet = false;
}

void
OAIFavoriteImpl::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(_links != nullptr) { 
        delete _links;
    }
    if(item != nullptr) { 
        delete item;
    }
}

OAIFavoriteImpl*
OAIFavoriteImpl::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIFavoriteImpl::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&_links, pJson["_links"], "OAIFavoriteImpllinks", "OAIFavoriteImpllinks");
    
    ::OpenAPI::setValue(&item, pJson["item"], "OAIPipelineImpl", "OAIPipelineImpl");
    
}

QString
OAIFavoriteImpl::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIFavoriteImpl::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if((_links != nullptr) && (_links->isSet())){
        toJsonValue(QString("_links"), _links, obj, QString("OAIFavoriteImpllinks"));
    }
    if((item != nullptr) && (item->isSet())){
        toJsonValue(QString("item"), item, obj, QString("OAIPipelineImpl"));
    }

    return obj;
}

QString*
OAIFavoriteImpl::getClass() {
    return _class;
}
void
OAIFavoriteImpl::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

OAIFavoriteImpllinks*
OAIFavoriteImpl::getLinks() {
    return _links;
}
void
OAIFavoriteImpl::setLinks(OAIFavoriteImpllinks* _links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

OAIPipelineImpl*
OAIFavoriteImpl::getItem() {
    return item;
}
void
OAIFavoriteImpl::setItem(OAIPipelineImpl* item) {
    this->item = item;
    this->m_item_isSet = true;
}


bool
OAIFavoriteImpl::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(_links != nullptr && _links->isSet()){ isObjectUpdated = true; break;}
        if(item != nullptr && item->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

