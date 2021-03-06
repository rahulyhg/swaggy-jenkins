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
 * OAIGithubRepositories.h
 *
 * 
 */

#ifndef OAIGithubRepositories_H
#define OAIGithubRepositories_H

#include <QJsonObject>


#include "OAIGithubRepositorieslinks.h"
#include "OAIGithubRepository.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIGithubRepositories: public OAIObject {
public:
    OAIGithubRepositories();
    OAIGithubRepositories(QString json);
    ~OAIGithubRepositories() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    OAIGithubRepositorieslinks getLinks() const;
    void setLinks(const OAIGithubRepositorieslinks &_links);

    QList<OAIGithubRepository> getItems() const;
    void setItems(const QList<OAIGithubRepository> &items);

    qint32 getLastPage() const;
    void setLastPage(const qint32 &last_page);

    qint32 getNextPage() const;
    void setNextPage(const qint32 &next_page);

    qint32 getPageSize() const;
    void setPageSize(const qint32 &page_size);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    OAIGithubRepositorieslinks _links;
    bool m__links_isSet;

    QList<OAIGithubRepository> items;
    bool m_items_isSet;

    qint32 last_page;
    bool m_last_page_isSet;

    qint32 next_page;
    bool m_next_page_isSet;

    qint32 page_size;
    bool m_page_size_isSet;

};

}

#endif // OAIGithubRepositories_H
