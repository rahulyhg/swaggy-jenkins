/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * API version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"fmt"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

type Route struct {
	Name        string
	Method      string
	Pattern     string
	HandlerFunc http.HandlerFunc
}

type Routes []Route

func NewRouter() *mux.Router {
	router := mux.NewRouter().StrictSlash(true)
	for _, route := range routes {
		var handler http.Handler
		handler = route.HandlerFunc
		handler = Logger(handler, route.Name)

		router.
			Methods(route.Method).
			Path(route.Pattern).
			Name(route.Name).
			Handler(handler)
	}

	return router
}

func Index(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Hello World!")
}

var routes = Routes{
	{
		"Index",
		"GET",
		"//",
		Index,
	},

	{
		"DeletePipelineQueueItem",
		strings.ToUpper("Delete"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/queue/{queue}",
		DeletePipelineQueueItem,
	},

	{
		"GetAuthenticatedUser",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/user/",
		GetAuthenticatedUser,
	},

	{
		"GetClasses",
		strings.ToUpper("Get"),
		"//blue/rest/classes/{class}",
		GetClasses,
	},

	{
		"GetJsonWebKey",
		strings.ToUpper("Get"),
		"//jwt-auth/jwks/{key}",
		GetJsonWebKey,
	},

	{
		"GetJsonWebToken",
		strings.ToUpper("Get"),
		"//jwt-auth/token",
		GetJsonWebToken,
	},

	{
		"GetOrganisation",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}",
		GetOrganisation,
	},

	{
		"GetOrganisations",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/",
		GetOrganisations,
	},

	{
		"GetPipeline",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}",
		GetPipeline,
	},

	{
		"GetPipelineActivities",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/activities",
		GetPipelineActivities,
	},

	{
		"GetPipelineBranch",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/branches/{branch}/",
		GetPipelineBranch,
	},

	{
		"GetPipelineBranchRun",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/branches/{branch}/runs/{run}",
		GetPipelineBranchRun,
	},

	{
		"GetPipelineBranches",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/branches",
		GetPipelineBranches,
	},

	{
		"GetPipelineFolder",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{folder}/",
		GetPipelineFolder,
	},

	{
		"GetPipelineFolderPipeline",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{folder}/pipelines/{pipeline}",
		GetPipelineFolderPipeline,
	},

	{
		"GetPipelineQueue",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/queue",
		GetPipelineQueue,
	},

	{
		"GetPipelineRun",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}",
		GetPipelineRun,
	},

	{
		"GetPipelineRunLog",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/log",
		GetPipelineRunLog,
	},

	{
		"GetPipelineRunNode",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}",
		GetPipelineRunNode,
	},

	{
		"GetPipelineRunNodeStep",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step}",
		GetPipelineRunNodeStep,
	},

	{
		"GetPipelineRunNodeStepLog",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step}/log",
		GetPipelineRunNodeStepLog,
	},

	{
		"GetPipelineRunNodeSteps",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps",
		GetPipelineRunNodeSteps,
	},

	{
		"GetPipelineRunNodes",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes",
		GetPipelineRunNodes,
	},

	{
		"GetPipelineRuns",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs",
		GetPipelineRuns,
	},

	{
		"GetPipelines",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/pipelines/",
		GetPipelines,
	},

	{
		"GetSCM",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/scm/{scm}",
		GetSCM,
	},

	{
		"GetSCMOrganisationRepositories",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/scm/{scm}/organizations/{scmOrganisation}/repositories",
		GetSCMOrganisationRepositories,
	},

	{
		"GetSCMOrganisationRepository",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/scm/{scm}/organizations/{scmOrganisation}/repositories/{repository}",
		GetSCMOrganisationRepository,
	},

	{
		"GetSCMOrganisations",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/scm/{scm}/organizations",
		GetSCMOrganisations,
	},

	{
		"GetUser",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/users/{user}",
		GetUser,
	},

	{
		"GetUserFavorites",
		strings.ToUpper("Get"),
		"//blue/rest/users/{user}/favorites",
		GetUserFavorites,
	},

	{
		"GetUsers",
		strings.ToUpper("Get"),
		"//blue/rest/organizations/{organization}/users/",
		GetUsers,
	},

	{
		"PostPipelineRun",
		strings.ToUpper("Post"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/replay",
		PostPipelineRun,
	},

	{
		"PostPipelineRuns",
		strings.ToUpper("Post"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs",
		PostPipelineRuns,
	},

	{
		"PutPipelineFavorite",
		strings.ToUpper("Put"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/favorite",
		PutPipelineFavorite,
	},

	{
		"PutPipelineRun",
		strings.ToUpper("Put"),
		"//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/stop",
		PutPipelineRun,
	},

	{
		"Search",
		strings.ToUpper("Get"),
		"//blue/rest/search/",
		Search,
	},

	{
		"SearchClasses",
		strings.ToUpper("Get"),
		"//blue/rest/classes/",
		SearchClasses,
	},

	{
		"GetComputer",
		strings.ToUpper("Get"),
		"//computer/api/json",
		GetComputer,
	},

	{
		"GetCrumb",
		strings.ToUpper("Get"),
		"//crumbIssuer/api/json",
		GetCrumb,
	},

	{
		"GetJenkins",
		strings.ToUpper("Get"),
		"//api/json",
		GetJenkins,
	},

	{
		"GetJob",
		strings.ToUpper("Get"),
		"//job/{name}/api/json",
		GetJob,
	},

	{
		"GetJobConfig",
		strings.ToUpper("Get"),
		"//job/{name}/config.xml",
		GetJobConfig,
	},

	{
		"GetJobLastBuild",
		strings.ToUpper("Get"),
		"//job/{name}/lastBuild/api/json",
		GetJobLastBuild,
	},

	{
		"GetJobProgressiveText",
		strings.ToUpper("Get"),
		"//job/{name}/{number}/logText/progressiveText",
		GetJobProgressiveText,
	},

	{
		"GetQueue",
		strings.ToUpper("Get"),
		"//queue/api/json",
		GetQueue,
	},

	{
		"GetQueueItem",
		strings.ToUpper("Get"),
		"//queue/item/{number}/api/json",
		GetQueueItem,
	},

	{
		"GetView",
		strings.ToUpper("Get"),
		"//view/{name}/api/json",
		GetView,
	},

	{
		"GetViewConfig",
		strings.ToUpper("Get"),
		"//view/{name}/config.xml",
		GetViewConfig,
	},

	{
		"HeadJenkins",
		strings.ToUpper("Head"),
		"//api/json",
		HeadJenkins,
	},

	{
		"PostCreateItem",
		strings.ToUpper("Post"),
		"//createItem",
		PostCreateItem,
	},

	{
		"PostCreateView",
		strings.ToUpper("Post"),
		"//createView",
		PostCreateView,
	},

	{
		"PostJobBuild",
		strings.ToUpper("Post"),
		"//job/{name}/build",
		PostJobBuild,
	},

	{
		"PostJobConfig",
		strings.ToUpper("Post"),
		"//job/{name}/config.xml",
		PostJobConfig,
	},

	{
		"PostJobDelete",
		strings.ToUpper("Post"),
		"//job/{name}/doDelete",
		PostJobDelete,
	},

	{
		"PostJobDisable",
		strings.ToUpper("Post"),
		"//job/{name}/disable",
		PostJobDisable,
	},

	{
		"PostJobEnable",
		strings.ToUpper("Post"),
		"//job/{name}/enable",
		PostJobEnable,
	},

	{
		"PostJobLastBuildStop",
		strings.ToUpper("Post"),
		"//job/{name}/lastBuild/stop",
		PostJobLastBuildStop,
	},

	{
		"PostViewConfig",
		strings.ToUpper("Post"),
		"//view/{name}/config.xml",
		PostViewConfig,
	},
}
