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


#include "OAIDiskSpaceMonitorDescriptorDiskSpace.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIDiskSpaceMonitorDescriptorDiskSpace::OAIDiskSpaceMonitorDescriptorDiskSpace(QString json) {
    init();
    this->fromJson(json);
}

OAIDiskSpaceMonitorDescriptorDiskSpace::OAIDiskSpaceMonitorDescriptorDiskSpace() {
    init();
}

OAIDiskSpaceMonitorDescriptorDiskSpace::~OAIDiskSpaceMonitorDescriptorDiskSpace() {
    this->cleanup();
}

void
OAIDiskSpaceMonitorDescriptorDiskSpace::init() {
    _class = new QString("");
    m__class_isSet = false;
    timestamp = 0;
    m_timestamp_isSet = false;
    path = new QString("");
    m_path_isSet = false;
    size = 0;
    m_size_isSet = false;
}

void
OAIDiskSpaceMonitorDescriptorDiskSpace::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }

    if(path != nullptr) { 
        delete path;
    }

}

OAIDiskSpaceMonitorDescriptorDiskSpace*
OAIDiskSpaceMonitorDescriptorDiskSpace::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIDiskSpaceMonitorDescriptorDiskSpace::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&timestamp, pJson["timestamp"], "qint32", "");
    
    ::OpenAPI::setValue(&path, pJson["path"], "QString", "QString");
    
    ::OpenAPI::setValue(&size, pJson["size"], "qint32", "");
    
}

QString
OAIDiskSpaceMonitorDescriptorDiskSpace::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIDiskSpaceMonitorDescriptorDiskSpace::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(m_timestamp_isSet){
        obj.insert("timestamp", QJsonValue(timestamp));
    }
    if(path != nullptr && *path != QString("")){
        toJsonValue(QString("path"), path, obj, QString("QString"));
    }
    if(m_size_isSet){
        obj.insert("size", QJsonValue(size));
    }

    return obj;
}

QString*
OAIDiskSpaceMonitorDescriptorDiskSpace::getClass() {
    return _class;
}
void
OAIDiskSpaceMonitorDescriptorDiskSpace::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

qint32
OAIDiskSpaceMonitorDescriptorDiskSpace::getTimestamp() {
    return timestamp;
}
void
OAIDiskSpaceMonitorDescriptorDiskSpace::setTimestamp(qint32 timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

QString*
OAIDiskSpaceMonitorDescriptorDiskSpace::getPath() {
    return path;
}
void
OAIDiskSpaceMonitorDescriptorDiskSpace::setPath(QString* path) {
    this->path = path;
    this->m_path_isSet = true;
}

qint32
OAIDiskSpaceMonitorDescriptorDiskSpace::getSize() {
    return size;
}
void
OAIDiskSpaceMonitorDescriptorDiskSpace::setSize(qint32 size) {
    this->size = size;
    this->m_size_isSet = true;
}


bool
OAIDiskSpaceMonitorDescriptorDiskSpace::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(m_timestamp_isSet){ isObjectUpdated = true; break;}
        if(path != nullptr && *path != QString("")){ isObjectUpdated = true; break;}
        if(m_size_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
