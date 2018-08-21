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
 * OASQueueItemImpl
 */
public class OASQueueItemImpl implements OAS.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get expectedBuildNumber
     * @return expectedBuildNumber
     */
    public Integer expectedBuildNumber { get; set; }

    /**
     * Get id
     * @return id
     */
    public String id { get; set; }

    /**
     * Get pipeline
     * @return pipeline
     */
    public String pipeline { get; set; }

    /**
     * Get queuedTime
     * @return queuedTime
     */
    public Integer queuedTime { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASQueueItemImpl getExample() {
        OASQueueItemImpl queueItemImpl = new OASQueueItemImpl();
          queueItemImpl.propertyClass = '';
          queueItemImpl.expectedBuildNumber = 0;
          queueItemImpl.id = '';
          queueItemImpl.pipeline = '';
          queueItemImpl.queuedTime = 0;
        return queueItemImpl;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASQueueItemImpl) {           
            OASQueueItemImpl queueItemImpl = (OASQueueItemImpl) obj;
            return this.propertyClass == queueItemImpl.propertyClass
                && this.expectedBuildNumber == queueItemImpl.expectedBuildNumber
                && this.id == queueItemImpl.id
                && this.pipeline == queueItemImpl.pipeline
                && this.queuedTime == queueItemImpl.queuedTime;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (expectedBuildNumber == null ? 0 : System.hashCode(expectedBuildNumber));
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (pipeline == null ? 0 : System.hashCode(pipeline));
        hashCode = (17 * hashCode) + (queuedTime == null ? 0 : System.hashCode(queuedTime));
        return hashCode;
    }
}
