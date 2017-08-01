# swagger
Jenkins API clients generated from Swagger / Open API specification

This Dart package is automatically generated by the [Swagger Codegen](https://github.com/swagger-api/swagger-codegen) project:

- API version: 0.1.0
- Build package: io.swagger.codegen.languages.DartClientCodegen
For more information, please visit [http://github.com/cliffano/swaggy-jenkins](http://github.com/cliffano/swaggy-jenkins)

## Requirements

Dart 1.20.0 and later

## Installation & Usage

### Github
If this Dart package is published to Github, please include the following in pubspec.yaml
```
name: swagger
version: 1.0.0
description: Swagger API client
dependencies:
  swagger:
    git: https://github.com/GIT_USER_ID/GIT_REPO_ID.git
      version: 'any'
```

### Local
To use the package in your local drive, please include the following in pubspec.yaml
```
dependencies:
  swagger:
    path: /path/to/swagger
```

## Tests

TODO

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```dart
import 'package:swagger/api.dart';


var api_instance = new BlueOceanApi();
var organisation = organisation_example; // String | Name of the organisation

try {
    var result = api_instance.getAuthenticatedUser(organisation);
    print(result);
} catch (e) {
    print("Exception when calling BlueOceanApi->getAuthenticatedUser: $e\n");
}

```

## Documentation for API Endpoints

All URIs are relative to *http://localhost*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*BlueOceanApi* | [**getAuthenticatedUser**](docs//BlueOceanApi.md#getauthenticateduser) | **GET** /blue/rest/organizations/{organisation}/user/ | 
*BlueOceanApi* | [**getClasses**](docs//BlueOceanApi.md#getclasses) | **GET** /blue/rest/classes/{class} | 
*BlueOceanApi* | [**getOrganisation**](docs//BlueOceanApi.md#getorganisation) | **GET** /blue/rest/organizations/{organisation} | 
*BlueOceanApi* | [**getOrganisations**](docs//BlueOceanApi.md#getorganisations) | **GET** /blue/rest/organizations/ | 
*BlueOceanApi* | [**getPipelineBranchByOrg**](docs//BlueOceanApi.md#getpipelinebranchbyorg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches/{branch}/ | 
*BlueOceanApi* | [**getPipelineBranchesByOrg**](docs//BlueOceanApi.md#getpipelinebranchesbyorg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches | 
*BlueOceanApi* | [**getPipelineByOrg**](docs//BlueOceanApi.md#getpipelinebyorg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline} | 
*BlueOceanApi* | [**getPipelineFolderByOrg**](docs//BlueOceanApi.md#getpipelinefolderbyorg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{folder}/ | 
*BlueOceanApi* | [**getPipelineFolderByOrg_0**](docs//BlueOceanApi.md#getpipelinefolderbyorg_0) | **GET** /blue/rest/organizations/{organisation}/pipelines/{folder}/pipelines/{pipeline} | 
*BlueOceanApi* | [**getPipelinesByOrg**](docs//BlueOceanApi.md#getpipelinesbyorg) | **GET** /blue/rest/organizations/{organisation}/pipelines/ | 
*BlueOceanApi* | [**getUser**](docs//BlueOceanApi.md#getuser) | **GET** /blue/rest/organizations/{organisation}/users/{user} | 
*BlueOceanApi* | [**getUsers**](docs//BlueOceanApi.md#getusers) | **GET** /blue/rest/organizations/{organisation}/users/ | 
*BlueOceanApi* | [**search**](docs//BlueOceanApi.md#search) | **GET** /blue/rest/classes/ | 
*BlueOceanApi* | [**search_0**](docs//BlueOceanApi.md#search_0) | **GET** /blue/rest/search/ | 
*RemoteAccessApi* | [**getComputer**](docs//RemoteAccessApi.md#getcomputer) | **GET** /computer/api/json?depth&#x3D;1 | 
*RemoteAccessApi* | [**getCrumb**](docs//RemoteAccessApi.md#getcrumb) | **GET** /crumbIssuer/api/json | 
*RemoteAccessApi* | [**getJenkins**](docs//RemoteAccessApi.md#getjenkins) | **GET** /api/json | 
*RemoteAccessApi* | [**getJob**](docs//RemoteAccessApi.md#getjob) | **GET** /job/{name}/api/json | 
*RemoteAccessApi* | [**getJobConfig**](docs//RemoteAccessApi.md#getjobconfig) | **GET** /job/{name}/config.xml | 
*RemoteAccessApi* | [**getJobLastBuild**](docs//RemoteAccessApi.md#getjoblastbuild) | **GET** /job/{name}/lastBuild/api/json | 
*RemoteAccessApi* | [**getJobProgressiveText**](docs//RemoteAccessApi.md#getjobprogressivetext) | **GET** /job/{name}/{number}/logText/progressiveText | 
*RemoteAccessApi* | [**getQueue**](docs//RemoteAccessApi.md#getqueue) | **GET** /queue/api/json | 
*RemoteAccessApi* | [**getQueueItem**](docs//RemoteAccessApi.md#getqueueitem) | **GET** /queue/item/{number}/api/json | 
*RemoteAccessApi* | [**getView**](docs//RemoteAccessApi.md#getview) | **GET** /view/{name}/api/json | 
*RemoteAccessApi* | [**getViewConfig**](docs//RemoteAccessApi.md#getviewconfig) | **GET** /view/{name}/config.xml | 
*RemoteAccessApi* | [**headJenkins**](docs//RemoteAccessApi.md#headjenkins) | **HEAD** /api/json | 
*RemoteAccessApi* | [**postCreateItem**](docs//RemoteAccessApi.md#postcreateitem) | **POST** /createItem | 
*RemoteAccessApi* | [**postCreateView**](docs//RemoteAccessApi.md#postcreateview) | **POST** /createView | 
*RemoteAccessApi* | [**postJobBuild**](docs//RemoteAccessApi.md#postjobbuild) | **POST** /job/{name}/build | 
*RemoteAccessApi* | [**postJobConfig**](docs//RemoteAccessApi.md#postjobconfig) | **POST** /job/{name}/config.xml | 
*RemoteAccessApi* | [**postJobDelete**](docs//RemoteAccessApi.md#postjobdelete) | **POST** /job/{name}/doDelete | 
*RemoteAccessApi* | [**postJobDisable**](docs//RemoteAccessApi.md#postjobdisable) | **POST** /job/{name}/disable | 
*RemoteAccessApi* | [**postJobEnable**](docs//RemoteAccessApi.md#postjobenable) | **POST** /job/{name}/enable | 
*RemoteAccessApi* | [**postJobLastBuildStop**](docs//RemoteAccessApi.md#postjoblastbuildstop) | **POST** /job/{name}/lastBuild/stop | 
*RemoteAccessApi* | [**postViewConfig**](docs//RemoteAccessApi.md#postviewconfig) | **POST** /view/{name}/config.xml | 


## Documentation For Models

 - [GetClassesByClass](docs//GetClassesByClass.md)
 - [GetMultibranchPipeline](docs//GetMultibranchPipeline.md)
 - [GetOrganisations](docs//GetOrganisations.md)
 - [GetPipelineBranches](docs//GetPipelineBranches.md)
 - [GetPipelineBranchesitem](docs//GetPipelineBranchesitem.md)
 - [GetPipelineBranchesitemLatestRun](docs//GetPipelineBranchesitemLatestRun.md)
 - [GetPipelineBranchesitemPullRequest](docs//GetPipelineBranchesitemPullRequest.md)
 - [GetPipelineBranchesitemPullRequestLinks](docs//GetPipelineBranchesitemPullRequestLinks.md)
 - [GetPipelines](docs//GetPipelines.md)
 - [GetUsers](docs//GetUsers.md)
 - [HudsonmodelAllView](docs//HudsonmodelAllView.md)
 - [HudsonmodelCauseAction](docs//HudsonmodelCauseAction.md)
 - [HudsonmodelCauseUserIdCause](docs//HudsonmodelCauseUserIdCause.md)
 - [HudsonmodelComputerSet](docs//HudsonmodelComputerSet.md)
 - [HudsonmodelFreeStyleBuild](docs//HudsonmodelFreeStyleBuild.md)
 - [HudsonmodelFreeStyleProject](docs//HudsonmodelFreeStyleProject.md)
 - [HudsonmodelFreeStyleProjectactions](docs//HudsonmodelFreeStyleProjectactions.md)
 - [HudsonmodelFreeStyleProjecthealthReport](docs//HudsonmodelFreeStyleProjecthealthReport.md)
 - [HudsonmodelHudson](docs//HudsonmodelHudson.md)
 - [HudsonmodelHudsonMasterComputer](docs//HudsonmodelHudsonMasterComputer.md)
 - [HudsonmodelHudsonMasterComputerMonitorData](docs//HudsonmodelHudsonMasterComputerMonitorData.md)
 - [HudsonmodelHudsonMasterComputerexecutors](docs//HudsonmodelHudsonMasterComputerexecutors.md)
 - [HudsonmodelHudsonassignedLabels](docs//HudsonmodelHudsonassignedLabels.md)
 - [HudsonmodelLabel1](docs//HudsonmodelLabel1.md)
 - [HudsonmodelListView](docs//HudsonmodelListView.md)
 - [HudsonmodelQueue](docs//HudsonmodelQueue.md)
 - [HudsonmodelQueueBlockedItem](docs//HudsonmodelQueueBlockedItem.md)
 - [HudsonmodelQueueLeftItem](docs//HudsonmodelQueueLeftItem.md)
 - [HudsonmodelStringParameterDefinition](docs//HudsonmodelStringParameterDefinition.md)
 - [HudsonmodelStringParameterValue](docs//HudsonmodelStringParameterValue.md)
 - [HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace](docs//HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.md)
 - [HudsonnodeMonitorsResponseTimeMonitorData](docs//HudsonnodeMonitorsResponseTimeMonitorData.md)
 - [HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2](docs//HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2.md)
 - [HudsonscmEmptyChangeLogSet](docs//HudsonscmEmptyChangeLogSet.md)
 - [HudsonscmNullSCM](docs//HudsonscmNullSCM.md)
 - [HudsonsecuritycsrfDefaultCrumbIssuer](docs//HudsonsecuritycsrfDefaultCrumbIssuer.md)
 - [HudsonutilClockDifference](docs//HudsonutilClockDifference.md)
 - [IojenkinsblueoceanresthalLink](docs//IojenkinsblueoceanresthalLink.md)
 - [IojenkinsblueoceanrestimplpipelineBranchImpl](docs//IojenkinsblueoceanrestimplpipelineBranchImpl.md)
 - [IojenkinsblueoceanrestimplpipelineBranchImplPermissions](docs//IojenkinsblueoceanrestimplpipelineBranchImplPermissions.md)
 - [IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1](docs//IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1.md)
 - [IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links](docs//IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links.md)
 - [IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map](docs//IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.md)
 - [IojenkinsblueoceanserviceembeddedrestExtensionClassImpl](docs//IojenkinsblueoceanserviceembeddedrestExtensionClassImpl.md)
 - [IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks](docs//IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks.md)
 - [IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl](docs//IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.md)
 - [IojenkinsblueoceanserviceembeddedrestPipelineImpl](docs//IojenkinsblueoceanserviceembeddedrestPipelineImpl.md)
 - [JenkinsmodelUnlabeledLoadStatistics](docs//JenkinsmodelUnlabeledLoadStatistics.md)
 - [SwaggyjenkinsOrganisation](docs//SwaggyjenkinsOrganisation.md)
 - [SwaggyjenkinsPipeline](docs//SwaggyjenkinsPipeline.md)
 - [SwaggyjenkinsPipelineLatestRun](docs//SwaggyjenkinsPipelineLatestRun.md)
 - [SwaggyjenkinsPipelineLatestRunartifacts](docs//SwaggyjenkinsPipelineLatestRunartifacts.md)
 - [SwaggyjenkinsUser](docs//SwaggyjenkinsUser.md)


## Documentation For Authorization


## jenkins_auth

- **Type**: HTTP basic authentication


## Author

blah@cliffano.com

