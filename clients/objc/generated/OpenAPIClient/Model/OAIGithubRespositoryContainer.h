#import <Foundation/Foundation.h>
#import "OAIObject.h"

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


#import "OAIGithubRepositories.h"
#import "OAIGithubRespositoryContainerlinks.h"
@protocol OAIGithubRepositories;
@class OAIGithubRepositories;
@protocol OAIGithubRespositoryContainerlinks;
@class OAIGithubRespositoryContainerlinks;



@protocol OAIGithubRespositoryContainer
@end

@interface OAIGithubRespositoryContainer : OAIObject


@property(nonatomic) NSString* _class;

@property(nonatomic) OAIGithubRespositoryContainerlinks* links;

@property(nonatomic) OAIGithubRepositories* repositories;

@end