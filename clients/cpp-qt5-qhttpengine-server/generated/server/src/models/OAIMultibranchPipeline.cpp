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


#include "OAIMultibranchPipeline.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIMultibranchPipeline::OAIMultibranchPipeline(QString json) {
    this->fromJson(json);
}

OAIMultibranchPipeline::OAIMultibranchPipeline() {
    this->init();
}

OAIMultibranchPipeline::~OAIMultibranchPipeline() {
    
}

void
OAIMultibranchPipeline::init() {
    m_display_name_isSet = false;
    m_estimated_duration_in_millis_isSet = false;
    m_latest_run_isSet = false;
    m_name_isSet = false;
    m_organization_isSet = false;
    m_weather_score_isSet = false;
    m_branch_names_isSet = false;
    m_number_of_failing_branches_isSet = false;
    m_number_of_failing_pull_requests_isSet = false;
    m_number_of_successful_branches_isSet = false;
    m_number_of_successful_pull_requests_isSet = false;
    m_total_number_of_branches_isSet = false;
    m_total_number_of_pull_requests_isSet = false;
    m__class_isSet = false;
}

void
OAIMultibranchPipeline::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIMultibranchPipeline::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    
    ::OpenAPI::fromJsonValue(estimated_duration_in_millis, json[QString("estimatedDurationInMillis")]);
    
    ::OpenAPI::fromJsonValue(latest_run, json[QString("latestRun")]);
    
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(organization, json[QString("organization")]);
    
    ::OpenAPI::fromJsonValue(weather_score, json[QString("weatherScore")]);
    
    
    ::OpenAPI::fromJsonValue(branch_names, json[QString("branchNames")]);
    ::OpenAPI::fromJsonValue(number_of_failing_branches, json[QString("numberOfFailingBranches")]);
    
    ::OpenAPI::fromJsonValue(number_of_failing_pull_requests, json[QString("numberOfFailingPullRequests")]);
    
    ::OpenAPI::fromJsonValue(number_of_successful_branches, json[QString("numberOfSuccessfulBranches")]);
    
    ::OpenAPI::fromJsonValue(number_of_successful_pull_requests, json[QString("numberOfSuccessfulPullRequests")]);
    
    ::OpenAPI::fromJsonValue(total_number_of_branches, json[QString("totalNumberOfBranches")]);
    
    ::OpenAPI::fromJsonValue(total_number_of_pull_requests, json[QString("totalNumberOfPullRequests")]);
    
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIMultibranchPipeline::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIMultibranchPipeline::asJsonObject() const {
    QJsonObject obj;
	if(m_display_name_isSet){
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
	if(m_estimated_duration_in_millis_isSet){
        obj.insert(QString("estimatedDurationInMillis"), ::OpenAPI::toJsonValue(estimated_duration_in_millis));
    }
	if(m_latest_run_isSet){
        obj.insert(QString("latestRun"), ::OpenAPI::toJsonValue(latest_run));
    }
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_organization_isSet){
        obj.insert(QString("organization"), ::OpenAPI::toJsonValue(organization));
    }
	if(m_weather_score_isSet){
        obj.insert(QString("weatherScore"), ::OpenAPI::toJsonValue(weather_score));
    }
	
    if(branch_names.size() > 0){
        obj.insert(QString("branchNames"), ::OpenAPI::toJsonValue(branch_names));
    } 
	if(m_number_of_failing_branches_isSet){
        obj.insert(QString("numberOfFailingBranches"), ::OpenAPI::toJsonValue(number_of_failing_branches));
    }
	if(m_number_of_failing_pull_requests_isSet){
        obj.insert(QString("numberOfFailingPullRequests"), ::OpenAPI::toJsonValue(number_of_failing_pull_requests));
    }
	if(m_number_of_successful_branches_isSet){
        obj.insert(QString("numberOfSuccessfulBranches"), ::OpenAPI::toJsonValue(number_of_successful_branches));
    }
	if(m_number_of_successful_pull_requests_isSet){
        obj.insert(QString("numberOfSuccessfulPullRequests"), ::OpenAPI::toJsonValue(number_of_successful_pull_requests));
    }
	if(m_total_number_of_branches_isSet){
        obj.insert(QString("totalNumberOfBranches"), ::OpenAPI::toJsonValue(total_number_of_branches));
    }
	if(m_total_number_of_pull_requests_isSet){
        obj.insert(QString("totalNumberOfPullRequests"), ::OpenAPI::toJsonValue(total_number_of_pull_requests));
    }
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

QString
OAIMultibranchPipeline::getDisplayName() const {
    return display_name;
}
void
OAIMultibranchPipeline::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

qint32
OAIMultibranchPipeline::getEstimatedDurationInMillis() const {
    return estimated_duration_in_millis;
}
void
OAIMultibranchPipeline::setEstimatedDurationInMillis(const qint32 &estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
    this->m_estimated_duration_in_millis_isSet = true;
}

QString
OAIMultibranchPipeline::getLatestRun() const {
    return latest_run;
}
void
OAIMultibranchPipeline::setLatestRun(const QString &latest_run) {
    this->latest_run = latest_run;
    this->m_latest_run_isSet = true;
}

QString
OAIMultibranchPipeline::getName() const {
    return name;
}
void
OAIMultibranchPipeline::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString
OAIMultibranchPipeline::getOrganization() const {
    return organization;
}
void
OAIMultibranchPipeline::setOrganization(const QString &organization) {
    this->organization = organization;
    this->m_organization_isSet = true;
}

qint32
OAIMultibranchPipeline::getWeatherScore() const {
    return weather_score;
}
void
OAIMultibranchPipeline::setWeatherScore(const qint32 &weather_score) {
    this->weather_score = weather_score;
    this->m_weather_score_isSet = true;
}

QList<QString>
OAIMultibranchPipeline::getBranchNames() const {
    return branch_names;
}
void
OAIMultibranchPipeline::setBranchNames(const QList<QString> &branch_names) {
    this->branch_names = branch_names;
    this->m_branch_names_isSet = true;
}

qint32
OAIMultibranchPipeline::getNumberOfFailingBranches() const {
    return number_of_failing_branches;
}
void
OAIMultibranchPipeline::setNumberOfFailingBranches(const qint32 &number_of_failing_branches) {
    this->number_of_failing_branches = number_of_failing_branches;
    this->m_number_of_failing_branches_isSet = true;
}

qint32
OAIMultibranchPipeline::getNumberOfFailingPullRequests() const {
    return number_of_failing_pull_requests;
}
void
OAIMultibranchPipeline::setNumberOfFailingPullRequests(const qint32 &number_of_failing_pull_requests) {
    this->number_of_failing_pull_requests = number_of_failing_pull_requests;
    this->m_number_of_failing_pull_requests_isSet = true;
}

qint32
OAIMultibranchPipeline::getNumberOfSuccessfulBranches() const {
    return number_of_successful_branches;
}
void
OAIMultibranchPipeline::setNumberOfSuccessfulBranches(const qint32 &number_of_successful_branches) {
    this->number_of_successful_branches = number_of_successful_branches;
    this->m_number_of_successful_branches_isSet = true;
}

qint32
OAIMultibranchPipeline::getNumberOfSuccessfulPullRequests() const {
    return number_of_successful_pull_requests;
}
void
OAIMultibranchPipeline::setNumberOfSuccessfulPullRequests(const qint32 &number_of_successful_pull_requests) {
    this->number_of_successful_pull_requests = number_of_successful_pull_requests;
    this->m_number_of_successful_pull_requests_isSet = true;
}

qint32
OAIMultibranchPipeline::getTotalNumberOfBranches() const {
    return total_number_of_branches;
}
void
OAIMultibranchPipeline::setTotalNumberOfBranches(const qint32 &total_number_of_branches) {
    this->total_number_of_branches = total_number_of_branches;
    this->m_total_number_of_branches_isSet = true;
}

qint32
OAIMultibranchPipeline::getTotalNumberOfPullRequests() const {
    return total_number_of_pull_requests;
}
void
OAIMultibranchPipeline::setTotalNumberOfPullRequests(const qint32 &total_number_of_pull_requests) {
    this->total_number_of_pull_requests = total_number_of_pull_requests;
    this->m_total_number_of_pull_requests_isSet = true;
}

QString
OAIMultibranchPipeline::getClass() const {
    return _class;
}
void
OAIMultibranchPipeline::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIMultibranchPipeline::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_display_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_estimated_duration_in_millis_isSet){ isObjectUpdated = true; break;}
    
        if(m_latest_run_isSet){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_organization_isSet){ isObjectUpdated = true; break;}
    
        if(m_weather_score_isSet){ isObjectUpdated = true; break;}
    
        if(branch_names.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_number_of_failing_branches_isSet){ isObjectUpdated = true; break;}
    
        if(m_number_of_failing_pull_requests_isSet){ isObjectUpdated = true; break;}
    
        if(m_number_of_successful_branches_isSet){ isObjectUpdated = true; break;}
    
        if(m_number_of_successful_pull_requests_isSet){ isObjectUpdated = true; break;}
    
        if(m_total_number_of_branches_isSet){ isObjectUpdated = true; break;}
    
        if(m_total_number_of_pull_requests_isSet){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

