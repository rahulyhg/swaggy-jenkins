package org.openapitools.api;

import org.openapitools.api.*;
import org.openapitools.model.*;

import org.wso2.msf4j.formparam.FormDataParam;
import org.wso2.msf4j.formparam.FileInfo;

import org.openapitools.model.ListView;

import java.util.List;
import org.openapitools.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaMSF4JServerCodegen", date = "2018-08-21T04:38:21.382Z[GMT]")
public abstract class ViewApiService {
    public abstract Response getView(String name
 ) throws NotFoundException;
    public abstract Response getViewConfig(String name
 ) throws NotFoundException;
    public abstract Response postViewConfig(String name
 ,String body
 ,String jenkinsCrumb
 ) throws NotFoundException;
}
