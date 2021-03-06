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

/*
 * OAIPipelineFolderImpl.h
 *
 * 
 */

#ifndef OAIPipelineFolderImpl_H
#define OAIPipelineFolderImpl_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelineFolderImpl: public OAIObject {
public:
    OAIPipelineFolderImpl();
    OAIPipelineFolderImpl(QString json);
    ~OAIPipelineFolderImpl() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);

    QString getFullName() const;
    void setFullName(const QString &full_name);

    QString getName() const;
    void setName(const QString &name);

    QString getOrganization() const;
    void setOrganization(const QString &organization);

    qint32 getNumberOfFolders() const;
    void setNumberOfFolders(const qint32 &number_of_folders);

    qint32 getNumberOfPipelines() const;
    void setNumberOfPipelines(const qint32 &number_of_pipelines);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    QString display_name;
    bool m_display_name_isSet;

    QString full_name;
    bool m_full_name_isSet;

    QString name;
    bool m_name_isSet;

    QString organization;
    bool m_organization_isSet;

    qint32 number_of_folders;
    bool m_number_of_folders_isSet;

    qint32 number_of_pipelines;
    bool m_number_of_pipelines_isSet;

};

}

#endif // OAIPipelineFolderImpl_H
