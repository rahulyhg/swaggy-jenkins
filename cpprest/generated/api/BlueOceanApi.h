/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * BlueOceanApi.h
 *
 * 
 */

#ifndef BlueOceanApi_H_
#define BlueOceanApi_H_


#include "ApiClient.h"

#include "GetMultibranchPipeline.h"
#include "GetOrganisations.h"
#include "GetPipelines.h"
#include "IojenkinsblueoceanrestimplpipelineBranchImpl.h"
#include "IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.h"
#include "IojenkinsblueoceanserviceembeddedrestPipelineImpl.h"
#include "SwaggyjenkinsOrganisation.h"
#include "SwaggyjenkinsPipeline.h"
#include "SwaggyjenkinsUser.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  BlueOceanApi
{
public:
    BlueOceanApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~BlueOceanApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve authenticated user details for an organisation
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>
    pplx::task<std::shared_ptr<SwaggyjenkinsUser>> getAuthenticatedUser(utility::string_t organisation);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get a list of class names supported by a given class
    /// </remarks>
    /// <param name="class">Name of the class</param>
    pplx::task<utility::string_t> getClasses(utility::string_t class);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve organisation details
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>
    pplx::task<std::shared_ptr<SwaggyjenkinsOrganisation>> getOrganisation(utility::string_t organisation);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all organisations details
    /// </remarks>
    
    pplx::task<std::shared_ptr<GetOrganisations>> getOrganisations();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve branch details for an organisation pipeline
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="branch">Name of the branch</param>
    pplx::task<std::shared_ptr<IojenkinsblueoceanrestimplpipelineBranchImpl>> getPipelineBranchByOrg(utility::string_t organisation, utility::string_t pipeline, utility::string_t branch);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all branches details for an organisation pipeline
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>/// <param name="pipeline">Name of the pipeline</param>
    pplx::task<std::shared_ptr<GetMultibranchPipeline>> getPipelineBranchesByOrg(utility::string_t organisation, utility::string_t pipeline);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline details for an organisation
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>/// <param name="pipeline">Name of the pipeline</param>
    pplx::task<std::shared_ptr<SwaggyjenkinsPipeline>> getPipelineByOrg(utility::string_t organisation, utility::string_t pipeline);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline folder for an organisation
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>/// <param name="folder">Name of the folder</param>
    pplx::task<std::shared_ptr<IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl>> getPipelineFolderByOrg(utility::string_t organisation, utility::string_t folder);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline details for an organisation folder
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>/// <param name="pipeline">Name of the pipeline</param>/// <param name="folder">Name of the folder</param>
    pplx::task<std::shared_ptr<IojenkinsblueoceanserviceembeddedrestPipelineImpl>> getPipelineFolderByOrg_0(utility::string_t organisation, utility::string_t pipeline, utility::string_t folder);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all pipelines details for an organisation
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>
    pplx::task<std::shared_ptr<GetPipelines>> getPipelinesByOrg(utility::string_t organisation);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve user details for an organisation
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>/// <param name="user">Name of the user</param>
    pplx::task<std::shared_ptr<SwaggyjenkinsUser>> getUser(utility::string_t organisation, utility::string_t user);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve users details for an organisation
    /// </remarks>
    /// <param name="organisation">Name of the organisation</param>
    pplx::task<std::shared_ptr<SwaggyjenkinsUser>> getUsers(utility::string_t organisation);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get classes details
    /// </remarks>
    /// <param name="q">Query string containing an array of class names</param>
    pplx::task<utility::string_t> search(utility::string_t q);
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Search for any resource details
    /// </remarks>
    /// <param name="q">Query string</param>
    pplx::task<utility::string_t> search_0(utility::string_t q);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* BlueOceanApi_H_ */
