package apimodels;

import apimodels.Link;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
/**
 * GithubRepositorylinks
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2018-08-21T04:38:33.847Z[GMT]")

@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class GithubRepositorylinks   {
  @JsonProperty("self")
  private Link self = null;

  @JsonProperty("_class")
  private String propertyClass = null;

  public GithubRepositorylinks self(Link self) {
    this.self = self;
    return this;
  }

   /**
   * Get self
   * @return self
  **/
  @Valid
  public Link getSelf() {
    return self;
  }

  public void setSelf(Link self) {
    this.self = self;
  }

  public GithubRepositorylinks propertyClass(String propertyClass) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GithubRepositorylinks githubRepositorylinks = (GithubRepositorylinks) o;
    return Objects.equals(self, githubRepositorylinks.self) &&
        Objects.equals(propertyClass, githubRepositorylinks.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(self, propertyClass);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GithubRepositorylinks {\n");
    
    sb.append("    self: ").append(toIndentedString(self)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
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
}

