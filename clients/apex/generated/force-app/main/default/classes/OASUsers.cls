/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OAS-api/OAS-codegen.git
 * Do not edit the class manually.
 */

/**
 * OASUsers
 */
public class OASUsers extends List<OASUser> {
    public static OASUsers getExample() {
        OASUsers users = new OASUsers();
        return users;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASUsers) {           
                return true;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        return hashCode;
    }
}

