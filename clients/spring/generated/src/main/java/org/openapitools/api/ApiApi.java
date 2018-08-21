/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (3.2.1-SNAPSHOT).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.api;

import org.openapitools.model.Hudson;
import io.swagger.annotations.*;
import org.springframework.http.HttpStatus;
import org.springframework.http.MediaType;
import org.springframework.http.ResponseEntity;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.context.request.NativeWebRequest;
import org.springframework.web.multipart.MultipartFile;

import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;
import java.util.Optional;
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2018-08-21T02:15:19.934Z[GMT]")

@Validated
@Api(value = "api", description = "the api API")
public interface ApiApi {

    default Optional<NativeWebRequest> getRequest() {
        return Optional.empty();
    }

    @ApiOperation(value = "", nickname = "getJenkins", notes = "Retrieve Jenkins details", response = Hudson.class, authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved Jenkins details", response = Hudson.class),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password") })
    @RequestMapping(value = "/api/json",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    default ResponseEntity<Hudson> getJenkins() {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    ApiUtil.setExampleResponse(request, "application/json", "{  \"nodeName\" : \"nodeName\",  \"assignedLabels\" : [ {    \"_class\" : \"_class\"  }, {    \"_class\" : \"_class\"  } ],  \"jobs\" : [ {    \"color\" : \"color\",    \"displayName\" : \"displayName\",    \"lastSuccessfulBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"lastUnstableBuild\" : \"lastUnstableBuild\",    \"queueItem\" : \"queueItem\",    \"buildable\" : true,    \"firstBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"lastFailedBuild\" : \"lastFailedBuild\",    \"lastBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"nextBuildNumber\" : 9,    \"builds\" : [ {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    }, {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    } ],    \"scm\" : {      \"_class\" : \"_class\"    },    \"keepDependencies\" : true,    \"displayNameOrNull\" : \"displayNameOrNull\",    \"inQueue\" : true,    \"lastCompletedBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"fullName\" : \"fullName\",    \"healthReport\" : [ {      \"score\" : 7,      \"description\" : \"description\",      \"iconClassName\" : \"iconClassName\",      \"iconUrl\" : \"iconUrl\",      \"_class\" : \"_class\"    }, {      \"score\" : 7,      \"description\" : \"description\",      \"iconClassName\" : \"iconClassName\",      \"iconUrl\" : \"iconUrl\",      \"_class\" : \"_class\"    } ],    \"lastStableBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"lastUnsuccessfulBuild\" : \"lastUnsuccessfulBuild\",    \"url\" : \"url\",    \"concurrentBuild\" : true,    \"name\" : \"name\",    \"_class\" : \"_class\",    \"actions\" : [ {      \"_class\" : \"_class\"    }, {      \"_class\" : \"_class\"    } ]  }, {    \"color\" : \"color\",    \"displayName\" : \"displayName\",    \"lastSuccessfulBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"lastUnstableBuild\" : \"lastUnstableBuild\",    \"queueItem\" : \"queueItem\",    \"buildable\" : true,    \"firstBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"lastFailedBuild\" : \"lastFailedBuild\",    \"lastBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"nextBuildNumber\" : 9,    \"builds\" : [ {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    }, {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    } ],    \"scm\" : {      \"_class\" : \"_class\"    },    \"keepDependencies\" : true,    \"displayNameOrNull\" : \"displayNameOrNull\",    \"inQueue\" : true,    \"lastCompletedBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"fullName\" : \"fullName\",    \"healthReport\" : [ {      \"score\" : 7,      \"description\" : \"description\",      \"iconClassName\" : \"iconClassName\",      \"iconUrl\" : \"iconUrl\",      \"_class\" : \"_class\"    }, {      \"score\" : 7,      \"description\" : \"description\",      \"iconClassName\" : \"iconClassName\",      \"iconUrl\" : \"iconUrl\",      \"_class\" : \"_class\"    } ],    \"lastStableBuild\" : {      \"queueId\" : 5,      \"displayName\" : \"displayName\",      \"keepLog\" : true,      \"description\" : \"description\",      \"fullDisplayName\" : \"fullDisplayName\",      \"estimatedDuration\" : 5,      \"url\" : \"url\",      \"building\" : true,      \"changeSet\" : {        \"kind\" : \"kind\",        \"_class\" : \"_class\"      },      \"duration\" : 1,      \"result\" : \"result\",      \"number\" : 6,      \"executor\" : \"executor\",      \"builtOn\" : \"builtOn\",      \"_class\" : \"_class\",      \"id\" : \"id\",      \"actions\" : [ {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      }, {        \"causes\" : [ {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        }, {          \"_class\" : \"_class\",          \"shortDescription\" : \"shortDescription\",          \"userName\" : \"userName\",          \"userId\" : \"userId\"        } ],        \"_class\" : \"_class\"      } ],      \"timestamp\" : 2    },    \"lastUnsuccessfulBuild\" : \"lastUnsuccessfulBuild\",    \"url\" : \"url\",    \"concurrentBuild\" : true,    \"name\" : \"name\",    \"_class\" : \"_class\",    \"actions\" : [ {      \"_class\" : \"_class\"    }, {      \"_class\" : \"_class\"    } ]  } ],  \"slaveAgentPort\" : 3,  \"description\" : \"description\",  \"useCrumbs\" : true,  \"nodeDescription\" : \"nodeDescription\",  \"primaryView\" : {    \"name\" : \"name\",    \"_class\" : \"_class\",    \"url\" : \"url\"  },  \"unlabeledLoad\" : {    \"_class\" : \"_class\"  },  \"mode\" : \"mode\",  \"numExecutors\" : 0,  \"quietingDown\" : true,  \"useSecurity\" : true,  \"_class\" : \"_class\",  \"views\" : [ {    \"name\" : \"name\",    \"_class\" : \"_class\",    \"url\" : \"url\"  }, {    \"name\" : \"name\",    \"_class\" : \"_class\",    \"url\" : \"url\"  } ]}");
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "headJenkins", notes = "Retrieve Jenkins headers", authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved Jenkins headers"),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password") })
    @RequestMapping(value = "/api/json",
        method = RequestMethod.HEAD)
    default ResponseEntity<Void> headJenkins() {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }

}