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


#include "OAIHudsonMasterComputermonitorData.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIHudsonMasterComputermonitorData::OAIHudsonMasterComputermonitorData(QString json) {
    init();
    this->fromJson(json);
}

OAIHudsonMasterComputermonitorData::OAIHudsonMasterComputermonitorData() {
    init();
}

OAIHudsonMasterComputermonitorData::~OAIHudsonMasterComputermonitorData() {
    this->cleanup();
}

void
OAIHudsonMasterComputermonitorData::init() {
    hudson_node_monitors_swap_space_monitor = new OAISwapSpaceMonitorMemoryUsage2();
    m_hudson_node_monitors_swap_space_monitor_isSet = false;
    hudson_node_monitors_temporary_space_monitor = new OAIDiskSpaceMonitorDescriptorDiskSpace();
    m_hudson_node_monitors_temporary_space_monitor_isSet = false;
    hudson_node_monitors_disk_space_monitor = new OAIDiskSpaceMonitorDescriptorDiskSpace();
    m_hudson_node_monitors_disk_space_monitor_isSet = false;
    hudson_node_monitors_architecture_monitor = new QString("");
    m_hudson_node_monitors_architecture_monitor_isSet = false;
    hudson_node_monitors_response_time_monitor = new OAIResponseTimeMonitorData();
    m_hudson_node_monitors_response_time_monitor_isSet = false;
    hudson_node_monitors_clock_monitor = new OAIClockDifference();
    m_hudson_node_monitors_clock_monitor_isSet = false;
    _class = new QString("");
    m__class_isSet = false;
}

void
OAIHudsonMasterComputermonitorData::cleanup() {
    if(hudson_node_monitors_swap_space_monitor != nullptr) { 
        delete hudson_node_monitors_swap_space_monitor;
    }
    if(hudson_node_monitors_temporary_space_monitor != nullptr) { 
        delete hudson_node_monitors_temporary_space_monitor;
    }
    if(hudson_node_monitors_disk_space_monitor != nullptr) { 
        delete hudson_node_monitors_disk_space_monitor;
    }
    if(hudson_node_monitors_architecture_monitor != nullptr) { 
        delete hudson_node_monitors_architecture_monitor;
    }
    if(hudson_node_monitors_response_time_monitor != nullptr) { 
        delete hudson_node_monitors_response_time_monitor;
    }
    if(hudson_node_monitors_clock_monitor != nullptr) { 
        delete hudson_node_monitors_clock_monitor;
    }
    if(_class != nullptr) { 
        delete _class;
    }
}

OAIHudsonMasterComputermonitorData*
OAIHudsonMasterComputermonitorData::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIHudsonMasterComputermonitorData::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&hudson_node_monitors_swap_space_monitor, pJson["hudson.node_monitors.SwapSpaceMonitor"], "OAISwapSpaceMonitorMemoryUsage2", "OAISwapSpaceMonitorMemoryUsage2");
    
    ::OpenAPI::setValue(&hudson_node_monitors_temporary_space_monitor, pJson["hudson.node_monitors.TemporarySpaceMonitor"], "OAIDiskSpaceMonitorDescriptorDiskSpace", "OAIDiskSpaceMonitorDescriptorDiskSpace");
    
    ::OpenAPI::setValue(&hudson_node_monitors_disk_space_monitor, pJson["hudson.node_monitors.DiskSpaceMonitor"], "OAIDiskSpaceMonitorDescriptorDiskSpace", "OAIDiskSpaceMonitorDescriptorDiskSpace");
    
    ::OpenAPI::setValue(&hudson_node_monitors_architecture_monitor, pJson["hudson.node_monitors.ArchitectureMonitor"], "QString", "QString");
    
    ::OpenAPI::setValue(&hudson_node_monitors_response_time_monitor, pJson["hudson.node_monitors.ResponseTimeMonitor"], "OAIResponseTimeMonitorData", "OAIResponseTimeMonitorData");
    
    ::OpenAPI::setValue(&hudson_node_monitors_clock_monitor, pJson["hudson.node_monitors.ClockMonitor"], "OAIClockDifference", "OAIClockDifference");
    
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
}

QString
OAIHudsonMasterComputermonitorData::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIHudsonMasterComputermonitorData::asJsonObject() {
    QJsonObject obj;
    if((hudson_node_monitors_swap_space_monitor != nullptr) && (hudson_node_monitors_swap_space_monitor->isSet())){
        toJsonValue(QString("hudson.node_monitors.SwapSpaceMonitor"), hudson_node_monitors_swap_space_monitor, obj, QString("OAISwapSpaceMonitorMemoryUsage2"));
    }
    if((hudson_node_monitors_temporary_space_monitor != nullptr) && (hudson_node_monitors_temporary_space_monitor->isSet())){
        toJsonValue(QString("hudson.node_monitors.TemporarySpaceMonitor"), hudson_node_monitors_temporary_space_monitor, obj, QString("OAIDiskSpaceMonitorDescriptorDiskSpace"));
    }
    if((hudson_node_monitors_disk_space_monitor != nullptr) && (hudson_node_monitors_disk_space_monitor->isSet())){
        toJsonValue(QString("hudson.node_monitors.DiskSpaceMonitor"), hudson_node_monitors_disk_space_monitor, obj, QString("OAIDiskSpaceMonitorDescriptorDiskSpace"));
    }
    if(hudson_node_monitors_architecture_monitor != nullptr && *hudson_node_monitors_architecture_monitor != QString("")){
        toJsonValue(QString("hudson.node_monitors.ArchitectureMonitor"), hudson_node_monitors_architecture_monitor, obj, QString("QString"));
    }
    if((hudson_node_monitors_response_time_monitor != nullptr) && (hudson_node_monitors_response_time_monitor->isSet())){
        toJsonValue(QString("hudson.node_monitors.ResponseTimeMonitor"), hudson_node_monitors_response_time_monitor, obj, QString("OAIResponseTimeMonitorData"));
    }
    if((hudson_node_monitors_clock_monitor != nullptr) && (hudson_node_monitors_clock_monitor->isSet())){
        toJsonValue(QString("hudson.node_monitors.ClockMonitor"), hudson_node_monitors_clock_monitor, obj, QString("OAIClockDifference"));
    }
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }

    return obj;
}

OAISwapSpaceMonitorMemoryUsage2*
OAIHudsonMasterComputermonitorData::getHudsonNodeMonitorsSwapSpaceMonitor() {
    return hudson_node_monitors_swap_space_monitor;
}
void
OAIHudsonMasterComputermonitorData::setHudsonNodeMonitorsSwapSpaceMonitor(OAISwapSpaceMonitorMemoryUsage2* hudson_node_monitors_swap_space_monitor) {
    this->hudson_node_monitors_swap_space_monitor = hudson_node_monitors_swap_space_monitor;
    this->m_hudson_node_monitors_swap_space_monitor_isSet = true;
}

OAIDiskSpaceMonitorDescriptorDiskSpace*
OAIHudsonMasterComputermonitorData::getHudsonNodeMonitorsTemporarySpaceMonitor() {
    return hudson_node_monitors_temporary_space_monitor;
}
void
OAIHudsonMasterComputermonitorData::setHudsonNodeMonitorsTemporarySpaceMonitor(OAIDiskSpaceMonitorDescriptorDiskSpace* hudson_node_monitors_temporary_space_monitor) {
    this->hudson_node_monitors_temporary_space_monitor = hudson_node_monitors_temporary_space_monitor;
    this->m_hudson_node_monitors_temporary_space_monitor_isSet = true;
}

OAIDiskSpaceMonitorDescriptorDiskSpace*
OAIHudsonMasterComputermonitorData::getHudsonNodeMonitorsDiskSpaceMonitor() {
    return hudson_node_monitors_disk_space_monitor;
}
void
OAIHudsonMasterComputermonitorData::setHudsonNodeMonitorsDiskSpaceMonitor(OAIDiskSpaceMonitorDescriptorDiskSpace* hudson_node_monitors_disk_space_monitor) {
    this->hudson_node_monitors_disk_space_monitor = hudson_node_monitors_disk_space_monitor;
    this->m_hudson_node_monitors_disk_space_monitor_isSet = true;
}

QString*
OAIHudsonMasterComputermonitorData::getHudsonNodeMonitorsArchitectureMonitor() {
    return hudson_node_monitors_architecture_monitor;
}
void
OAIHudsonMasterComputermonitorData::setHudsonNodeMonitorsArchitectureMonitor(QString* hudson_node_monitors_architecture_monitor) {
    this->hudson_node_monitors_architecture_monitor = hudson_node_monitors_architecture_monitor;
    this->m_hudson_node_monitors_architecture_monitor_isSet = true;
}

OAIResponseTimeMonitorData*
OAIHudsonMasterComputermonitorData::getHudsonNodeMonitorsResponseTimeMonitor() {
    return hudson_node_monitors_response_time_monitor;
}
void
OAIHudsonMasterComputermonitorData::setHudsonNodeMonitorsResponseTimeMonitor(OAIResponseTimeMonitorData* hudson_node_monitors_response_time_monitor) {
    this->hudson_node_monitors_response_time_monitor = hudson_node_monitors_response_time_monitor;
    this->m_hudson_node_monitors_response_time_monitor_isSet = true;
}

OAIClockDifference*
OAIHudsonMasterComputermonitorData::getHudsonNodeMonitorsClockMonitor() {
    return hudson_node_monitors_clock_monitor;
}
void
OAIHudsonMasterComputermonitorData::setHudsonNodeMonitorsClockMonitor(OAIClockDifference* hudson_node_monitors_clock_monitor) {
    this->hudson_node_monitors_clock_monitor = hudson_node_monitors_clock_monitor;
    this->m_hudson_node_monitors_clock_monitor_isSet = true;
}

QString*
OAIHudsonMasterComputermonitorData::getClass() {
    return _class;
}
void
OAIHudsonMasterComputermonitorData::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIHudsonMasterComputermonitorData::isSet(){
    bool isObjectUpdated = false;
    do{
        if(hudson_node_monitors_swap_space_monitor != nullptr && hudson_node_monitors_swap_space_monitor->isSet()){ isObjectUpdated = true; break;}
        if(hudson_node_monitors_temporary_space_monitor != nullptr && hudson_node_monitors_temporary_space_monitor->isSet()){ isObjectUpdated = true; break;}
        if(hudson_node_monitors_disk_space_monitor != nullptr && hudson_node_monitors_disk_space_monitor->isSet()){ isObjectUpdated = true; break;}
        if(hudson_node_monitors_architecture_monitor != nullptr && *hudson_node_monitors_architecture_monitor != QString("")){ isObjectUpdated = true; break;}
        if(hudson_node_monitors_response_time_monitor != nullptr && hudson_node_monitors_response_time_monitor->isSet()){ isObjectUpdated = true; break;}
        if(hudson_node_monitors_clock_monitor != nullptr && hudson_node_monitors_clock_monitor->isSet()){ isObjectUpdated = true; break;}
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

