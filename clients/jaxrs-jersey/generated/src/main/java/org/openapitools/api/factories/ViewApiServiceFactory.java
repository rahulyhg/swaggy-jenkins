package org.openapitools.api.factories;

import org.openapitools.api.ViewApiService;
import org.openapitools.api.impl.ViewApiServiceImpl;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2018-08-21T04:39:03.702Z[GMT]")
public class ViewApiServiceFactory {
    private final static ViewApiService service = new ViewApiServiceImpl();

    public static ViewApiService getViewApi() {
        return service;
    }
}
