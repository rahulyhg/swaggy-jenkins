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


#include "OAIFreeStyleProject.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIFreeStyleProject::OAIFreeStyleProject(QString json) {
    init();
    this->fromJson(json);
}

OAIFreeStyleProject::OAIFreeStyleProject() {
    init();
}

OAIFreeStyleProject::~OAIFreeStyleProject() {
    this->cleanup();
}

void
OAIFreeStyleProject::init() {
    _class = new QString("");
    m__class_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    url = new QString("");
    m_url_isSet = false;
    color = new QString("");
    m_color_isSet = false;
    actions = new QList<OAIFreeStyleProjectactions*>();
    m_actions_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    display_name = new QString("");
    m_display_name_isSet = false;
    display_name_or_null = new QString("");
    m_display_name_or_null_isSet = false;
    full_display_name = new QString("");
    m_full_display_name_isSet = false;
    full_name = new QString("");
    m_full_name_isSet = false;
    buildable = false;
    m_buildable_isSet = false;
    builds = new QList<OAIFreeStyleBuild*>();
    m_builds_isSet = false;
    first_build = new OAIFreeStyleBuild();
    m_first_build_isSet = false;
    health_report = new QList<OAIFreeStyleProjecthealthReport*>();
    m_health_report_isSet = false;
    in_queue = false;
    m_in_queue_isSet = false;
    keep_dependencies = false;
    m_keep_dependencies_isSet = false;
    last_build = new OAIFreeStyleBuild();
    m_last_build_isSet = false;
    last_completed_build = new OAIFreeStyleBuild();
    m_last_completed_build_isSet = false;
    last_failed_build = new QString("");
    m_last_failed_build_isSet = false;
    last_stable_build = new OAIFreeStyleBuild();
    m_last_stable_build_isSet = false;
    last_successful_build = new OAIFreeStyleBuild();
    m_last_successful_build_isSet = false;
    last_unstable_build = new QString("");
    m_last_unstable_build_isSet = false;
    last_unsuccessful_build = new QString("");
    m_last_unsuccessful_build_isSet = false;
    next_build_number = 0;
    m_next_build_number_isSet = false;
    queue_item = new QString("");
    m_queue_item_isSet = false;
    concurrent_build = false;
    m_concurrent_build_isSet = false;
    scm = new OAINullSCM();
    m_scm_isSet = false;
}

void
OAIFreeStyleProject::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(url != nullptr) { 
        delete url;
    }
    if(color != nullptr) { 
        delete color;
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
    if(display_name_or_null != nullptr) { 
        delete display_name_or_null;
    }
    if(full_display_name != nullptr) { 
        delete full_display_name;
    }
    if(full_name != nullptr) { 
        delete full_name;
    }

    if(builds != nullptr) { 
        auto arr = builds;
        for(auto o: *arr) { 
            delete o;
        }
        delete builds;
    }
    if(first_build != nullptr) { 
        delete first_build;
    }
    if(health_report != nullptr) { 
        auto arr = health_report;
        for(auto o: *arr) { 
            delete o;
        }
        delete health_report;
    }


    if(last_build != nullptr) { 
        delete last_build;
    }
    if(last_completed_build != nullptr) { 
        delete last_completed_build;
    }
    if(last_failed_build != nullptr) { 
        delete last_failed_build;
    }
    if(last_stable_build != nullptr) { 
        delete last_stable_build;
    }
    if(last_successful_build != nullptr) { 
        delete last_successful_build;
    }
    if(last_unstable_build != nullptr) { 
        delete last_unstable_build;
    }
    if(last_unsuccessful_build != nullptr) { 
        delete last_unsuccessful_build;
    }

    if(queue_item != nullptr) { 
        delete queue_item;
    }

    if(scm != nullptr) { 
        delete scm;
    }
}

OAIFreeStyleProject*
OAIFreeStyleProject::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIFreeStyleProject::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&url, pJson["url"], "QString", "QString");
    
    ::OpenAPI::setValue(&color, pJson["color"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&actions, pJson["actions"], "QList", "OAIFreeStyleProjectactions");
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&display_name, pJson["displayName"], "QString", "QString");
    
    ::OpenAPI::setValue(&display_name_or_null, pJson["displayNameOrNull"], "QString", "QString");
    
    ::OpenAPI::setValue(&full_display_name, pJson["fullDisplayName"], "QString", "QString");
    
    ::OpenAPI::setValue(&full_name, pJson["fullName"], "QString", "QString");
    
    ::OpenAPI::setValue(&buildable, pJson["buildable"], "bool", "");
    
    
    ::OpenAPI::setValue(&builds, pJson["builds"], "QList", "OAIFreeStyleBuild");
    ::OpenAPI::setValue(&first_build, pJson["firstBuild"], "OAIFreeStyleBuild", "OAIFreeStyleBuild");
    
    
    ::OpenAPI::setValue(&health_report, pJson["healthReport"], "QList", "OAIFreeStyleProjecthealthReport");
    ::OpenAPI::setValue(&in_queue, pJson["inQueue"], "bool", "");
    
    ::OpenAPI::setValue(&keep_dependencies, pJson["keepDependencies"], "bool", "");
    
    ::OpenAPI::setValue(&last_build, pJson["lastBuild"], "OAIFreeStyleBuild", "OAIFreeStyleBuild");
    
    ::OpenAPI::setValue(&last_completed_build, pJson["lastCompletedBuild"], "OAIFreeStyleBuild", "OAIFreeStyleBuild");
    
    ::OpenAPI::setValue(&last_failed_build, pJson["lastFailedBuild"], "QString", "QString");
    
    ::OpenAPI::setValue(&last_stable_build, pJson["lastStableBuild"], "OAIFreeStyleBuild", "OAIFreeStyleBuild");
    
    ::OpenAPI::setValue(&last_successful_build, pJson["lastSuccessfulBuild"], "OAIFreeStyleBuild", "OAIFreeStyleBuild");
    
    ::OpenAPI::setValue(&last_unstable_build, pJson["lastUnstableBuild"], "QString", "QString");
    
    ::OpenAPI::setValue(&last_unsuccessful_build, pJson["lastUnsuccessfulBuild"], "QString", "QString");
    
    ::OpenAPI::setValue(&next_build_number, pJson["nextBuildNumber"], "qint32", "");
    
    ::OpenAPI::setValue(&queue_item, pJson["queueItem"], "QString", "QString");
    
    ::OpenAPI::setValue(&concurrent_build, pJson["concurrentBuild"], "bool", "");
    
    ::OpenAPI::setValue(&scm, pJson["scm"], "OAINullSCM", "OAINullSCM");
    
}

QString
OAIFreeStyleProject::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIFreeStyleProject::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(url != nullptr && *url != QString("")){
        toJsonValue(QString("url"), url, obj, QString("QString"));
    }
    if(color != nullptr && *color != QString("")){
        toJsonValue(QString("color"), color, obj, QString("QString"));
    }
    if(actions->size() > 0){
        toJsonArray((QList<void*>*)actions, obj, "actions", "OAIFreeStyleProjectactions");
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(display_name != nullptr && *display_name != QString("")){
        toJsonValue(QString("displayName"), display_name, obj, QString("QString"));
    }
    if(display_name_or_null != nullptr && *display_name_or_null != QString("")){
        toJsonValue(QString("displayNameOrNull"), display_name_or_null, obj, QString("QString"));
    }
    if(full_display_name != nullptr && *full_display_name != QString("")){
        toJsonValue(QString("fullDisplayName"), full_display_name, obj, QString("QString"));
    }
    if(full_name != nullptr && *full_name != QString("")){
        toJsonValue(QString("fullName"), full_name, obj, QString("QString"));
    }
    if(m_buildable_isSet){
        obj.insert("buildable", QJsonValue(buildable));
    }
    if(builds->size() > 0){
        toJsonArray((QList<void*>*)builds, obj, "builds", "OAIFreeStyleBuild");
    }
    if((first_build != nullptr) && (first_build->isSet())){
        toJsonValue(QString("firstBuild"), first_build, obj, QString("OAIFreeStyleBuild"));
    }
    if(health_report->size() > 0){
        toJsonArray((QList<void*>*)health_report, obj, "healthReport", "OAIFreeStyleProjecthealthReport");
    }
    if(m_in_queue_isSet){
        obj.insert("inQueue", QJsonValue(in_queue));
    }
    if(m_keep_dependencies_isSet){
        obj.insert("keepDependencies", QJsonValue(keep_dependencies));
    }
    if((last_build != nullptr) && (last_build->isSet())){
        toJsonValue(QString("lastBuild"), last_build, obj, QString("OAIFreeStyleBuild"));
    }
    if((last_completed_build != nullptr) && (last_completed_build->isSet())){
        toJsonValue(QString("lastCompletedBuild"), last_completed_build, obj, QString("OAIFreeStyleBuild"));
    }
    if(last_failed_build != nullptr && *last_failed_build != QString("")){
        toJsonValue(QString("lastFailedBuild"), last_failed_build, obj, QString("QString"));
    }
    if((last_stable_build != nullptr) && (last_stable_build->isSet())){
        toJsonValue(QString("lastStableBuild"), last_stable_build, obj, QString("OAIFreeStyleBuild"));
    }
    if((last_successful_build != nullptr) && (last_successful_build->isSet())){
        toJsonValue(QString("lastSuccessfulBuild"), last_successful_build, obj, QString("OAIFreeStyleBuild"));
    }
    if(last_unstable_build != nullptr && *last_unstable_build != QString("")){
        toJsonValue(QString("lastUnstableBuild"), last_unstable_build, obj, QString("QString"));
    }
    if(last_unsuccessful_build != nullptr && *last_unsuccessful_build != QString("")){
        toJsonValue(QString("lastUnsuccessfulBuild"), last_unsuccessful_build, obj, QString("QString"));
    }
    if(m_next_build_number_isSet){
        obj.insert("nextBuildNumber", QJsonValue(next_build_number));
    }
    if(queue_item != nullptr && *queue_item != QString("")){
        toJsonValue(QString("queueItem"), queue_item, obj, QString("QString"));
    }
    if(m_concurrent_build_isSet){
        obj.insert("concurrentBuild", QJsonValue(concurrent_build));
    }
    if((scm != nullptr) && (scm->isSet())){
        toJsonValue(QString("scm"), scm, obj, QString("OAINullSCM"));
    }

    return obj;
}

QString*
OAIFreeStyleProject::getClass() {
    return _class;
}
void
OAIFreeStyleProject::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString*
OAIFreeStyleProject::getName() {
    return name;
}
void
OAIFreeStyleProject::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
OAIFreeStyleProject::getUrl() {
    return url;
}
void
OAIFreeStyleProject::setUrl(QString* url) {
    this->url = url;
    this->m_url_isSet = true;
}

QString*
OAIFreeStyleProject::getColor() {
    return color;
}
void
OAIFreeStyleProject::setColor(QString* color) {
    this->color = color;
    this->m_color_isSet = true;
}

QList<OAIFreeStyleProjectactions*>*
OAIFreeStyleProject::getActions() {
    return actions;
}
void
OAIFreeStyleProject::setActions(QList<OAIFreeStyleProjectactions*>* actions) {
    this->actions = actions;
    this->m_actions_isSet = true;
}

QString*
OAIFreeStyleProject::getDescription() {
    return description;
}
void
OAIFreeStyleProject::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QString*
OAIFreeStyleProject::getDisplayName() {
    return display_name;
}
void
OAIFreeStyleProject::setDisplayName(QString* display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

QString*
OAIFreeStyleProject::getDisplayNameOrNull() {
    return display_name_or_null;
}
void
OAIFreeStyleProject::setDisplayNameOrNull(QString* display_name_or_null) {
    this->display_name_or_null = display_name_or_null;
    this->m_display_name_or_null_isSet = true;
}

QString*
OAIFreeStyleProject::getFullDisplayName() {
    return full_display_name;
}
void
OAIFreeStyleProject::setFullDisplayName(QString* full_display_name) {
    this->full_display_name = full_display_name;
    this->m_full_display_name_isSet = true;
}

QString*
OAIFreeStyleProject::getFullName() {
    return full_name;
}
void
OAIFreeStyleProject::setFullName(QString* full_name) {
    this->full_name = full_name;
    this->m_full_name_isSet = true;
}

bool
OAIFreeStyleProject::isBuildable() {
    return buildable;
}
void
OAIFreeStyleProject::setBuildable(bool buildable) {
    this->buildable = buildable;
    this->m_buildable_isSet = true;
}

QList<OAIFreeStyleBuild*>*
OAIFreeStyleProject::getBuilds() {
    return builds;
}
void
OAIFreeStyleProject::setBuilds(QList<OAIFreeStyleBuild*>* builds) {
    this->builds = builds;
    this->m_builds_isSet = true;
}

OAIFreeStyleBuild*
OAIFreeStyleProject::getFirstBuild() {
    return first_build;
}
void
OAIFreeStyleProject::setFirstBuild(OAIFreeStyleBuild* first_build) {
    this->first_build = first_build;
    this->m_first_build_isSet = true;
}

QList<OAIFreeStyleProjecthealthReport*>*
OAIFreeStyleProject::getHealthReport() {
    return health_report;
}
void
OAIFreeStyleProject::setHealthReport(QList<OAIFreeStyleProjecthealthReport*>* health_report) {
    this->health_report = health_report;
    this->m_health_report_isSet = true;
}

bool
OAIFreeStyleProject::isInQueue() {
    return in_queue;
}
void
OAIFreeStyleProject::setInQueue(bool in_queue) {
    this->in_queue = in_queue;
    this->m_in_queue_isSet = true;
}

bool
OAIFreeStyleProject::isKeepDependencies() {
    return keep_dependencies;
}
void
OAIFreeStyleProject::setKeepDependencies(bool keep_dependencies) {
    this->keep_dependencies = keep_dependencies;
    this->m_keep_dependencies_isSet = true;
}

OAIFreeStyleBuild*
OAIFreeStyleProject::getLastBuild() {
    return last_build;
}
void
OAIFreeStyleProject::setLastBuild(OAIFreeStyleBuild* last_build) {
    this->last_build = last_build;
    this->m_last_build_isSet = true;
}

OAIFreeStyleBuild*
OAIFreeStyleProject::getLastCompletedBuild() {
    return last_completed_build;
}
void
OAIFreeStyleProject::setLastCompletedBuild(OAIFreeStyleBuild* last_completed_build) {
    this->last_completed_build = last_completed_build;
    this->m_last_completed_build_isSet = true;
}

QString*
OAIFreeStyleProject::getLastFailedBuild() {
    return last_failed_build;
}
void
OAIFreeStyleProject::setLastFailedBuild(QString* last_failed_build) {
    this->last_failed_build = last_failed_build;
    this->m_last_failed_build_isSet = true;
}

OAIFreeStyleBuild*
OAIFreeStyleProject::getLastStableBuild() {
    return last_stable_build;
}
void
OAIFreeStyleProject::setLastStableBuild(OAIFreeStyleBuild* last_stable_build) {
    this->last_stable_build = last_stable_build;
    this->m_last_stable_build_isSet = true;
}

OAIFreeStyleBuild*
OAIFreeStyleProject::getLastSuccessfulBuild() {
    return last_successful_build;
}
void
OAIFreeStyleProject::setLastSuccessfulBuild(OAIFreeStyleBuild* last_successful_build) {
    this->last_successful_build = last_successful_build;
    this->m_last_successful_build_isSet = true;
}

QString*
OAIFreeStyleProject::getLastUnstableBuild() {
    return last_unstable_build;
}
void
OAIFreeStyleProject::setLastUnstableBuild(QString* last_unstable_build) {
    this->last_unstable_build = last_unstable_build;
    this->m_last_unstable_build_isSet = true;
}

QString*
OAIFreeStyleProject::getLastUnsuccessfulBuild() {
    return last_unsuccessful_build;
}
void
OAIFreeStyleProject::setLastUnsuccessfulBuild(QString* last_unsuccessful_build) {
    this->last_unsuccessful_build = last_unsuccessful_build;
    this->m_last_unsuccessful_build_isSet = true;
}

qint32
OAIFreeStyleProject::getNextBuildNumber() {
    return next_build_number;
}
void
OAIFreeStyleProject::setNextBuildNumber(qint32 next_build_number) {
    this->next_build_number = next_build_number;
    this->m_next_build_number_isSet = true;
}

QString*
OAIFreeStyleProject::getQueueItem() {
    return queue_item;
}
void
OAIFreeStyleProject::setQueueItem(QString* queue_item) {
    this->queue_item = queue_item;
    this->m_queue_item_isSet = true;
}

bool
OAIFreeStyleProject::isConcurrentBuild() {
    return concurrent_build;
}
void
OAIFreeStyleProject::setConcurrentBuild(bool concurrent_build) {
    this->concurrent_build = concurrent_build;
    this->m_concurrent_build_isSet = true;
}

OAINullSCM*
OAIFreeStyleProject::getScm() {
    return scm;
}
void
OAIFreeStyleProject::setScm(OAINullSCM* scm) {
    this->scm = scm;
    this->m_scm_isSet = true;
}


bool
OAIFreeStyleProject::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(url != nullptr && *url != QString("")){ isObjectUpdated = true; break;}
        if(color != nullptr && *color != QString("")){ isObjectUpdated = true; break;}
        if(actions->size() > 0){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(display_name != nullptr && *display_name != QString("")){ isObjectUpdated = true; break;}
        if(display_name_or_null != nullptr && *display_name_or_null != QString("")){ isObjectUpdated = true; break;}
        if(full_display_name != nullptr && *full_display_name != QString("")){ isObjectUpdated = true; break;}
        if(full_name != nullptr && *full_name != QString("")){ isObjectUpdated = true; break;}
        if(m_buildable_isSet){ isObjectUpdated = true; break;}
        if(builds->size() > 0){ isObjectUpdated = true; break;}
        if(first_build != nullptr && first_build->isSet()){ isObjectUpdated = true; break;}
        if(health_report->size() > 0){ isObjectUpdated = true; break;}
        if(m_in_queue_isSet){ isObjectUpdated = true; break;}
        if(m_keep_dependencies_isSet){ isObjectUpdated = true; break;}
        if(last_build != nullptr && last_build->isSet()){ isObjectUpdated = true; break;}
        if(last_completed_build != nullptr && last_completed_build->isSet()){ isObjectUpdated = true; break;}
        if(last_failed_build != nullptr && *last_failed_build != QString("")){ isObjectUpdated = true; break;}
        if(last_stable_build != nullptr && last_stable_build->isSet()){ isObjectUpdated = true; break;}
        if(last_successful_build != nullptr && last_successful_build->isSet()){ isObjectUpdated = true; break;}
        if(last_unstable_build != nullptr && *last_unstable_build != QString("")){ isObjectUpdated = true; break;}
        if(last_unsuccessful_build != nullptr && *last_unsuccessful_build != QString("")){ isObjectUpdated = true; break;}
        if(m_next_build_number_isSet){ isObjectUpdated = true; break;}
        if(queue_item != nullptr && *queue_item != QString("")){ isObjectUpdated = true; break;}
        if(m_concurrent_build_isSet){ isObjectUpdated = true; break;}
        if(scm != nullptr && scm->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

