package apimodels;

import java.util.Objects;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import javax.validation.constraints.*;
/**
 * DiskSpaceMonitorDescriptorDiskSpace
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-08-03T23:33:33.060Z")

public class DiskSpaceMonitorDescriptorDiskSpace   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("timestamp")
  private Integer timestamp = null;

  @JsonProperty("path")
  private String path = null;

  @JsonProperty("size")
  private Integer size = null;

  public DiskSpaceMonitorDescriptorDiskSpace propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
    public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public DiskSpaceMonitorDescriptorDiskSpace timestamp(Integer timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
    public Integer getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(Integer timestamp) {
    this.timestamp = timestamp;
  }

  public DiskSpaceMonitorDescriptorDiskSpace path(String path) {
    this.path = path;
    return this;
  }

   /**
   * Get path
   * @return path
  **/
    public String getPath() {
    return path;
  }

  public void setPath(String path) {
    this.path = path;
  }

  public DiskSpaceMonitorDescriptorDiskSpace size(Integer size) {
    this.size = size;
    return this;
  }

   /**
   * Get size
   * @return size
  **/
    public Integer getSize() {
    return size;
  }

  public void setSize(Integer size) {
    this.size = size;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DiskSpaceMonitorDescriptorDiskSpace diskSpaceMonitorDescriptorDiskSpace = (DiskSpaceMonitorDescriptorDiskSpace) o;
    return Objects.equals(this.propertyClass, diskSpaceMonitorDescriptorDiskSpace.propertyClass) &&
        Objects.equals(this.timestamp, diskSpaceMonitorDescriptorDiskSpace.timestamp) &&
        Objects.equals(this.path, diskSpaceMonitorDescriptorDiskSpace.path) &&
        Objects.equals(this.size, diskSpaceMonitorDescriptorDiskSpace.size);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, timestamp, path, size);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DiskSpaceMonitorDescriptorDiskSpace {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    path: ").append(toIndentedString(path)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

  public void validate() {
    ValidatorFactory factory = Validation.buildDefaultValidatorFactory();
    Validator validator = factory.getValidator();
    Set<ConstraintViolation<DiskSpaceMonitorDescriptorDiskSpace>> constraintViolations = validator.validate(this);
    if (constraintViolations.size() > 0) {
      StringBuilder errors = new StringBuilder();
      for (ConstraintViolation<DiskSpaceMonitorDescriptorDiskSpace> contraintes : constraintViolations) {
        errors.append(String.format("%s.%s %s\n",
            contraintes.getRootBeanClass().getSimpleName(),
            contraintes.getPropertyPath(),
            contraintes.getMessage()));
      }
      throw new RuntimeException("Bean validation : " + errors);
    }
  }
}
