/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "UserFavorites.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

UserFavorites::UserFavorites()
{
}

UserFavorites::~UserFavorites()
{
}

void UserFavorites::validate()
{
    // TODO: implement validation
}

web::json::value UserFavorites::toJson() const
{
    web::json::value val = this->null<FavoriteImpl>::toJson();


    return val;
}

void UserFavorites::fromJson(web::json::value& val)
{
    this->null<FavoriteImpl>::fromJson(val);

}

void UserFavorites::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

void UserFavorites::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

}
}
}
}

