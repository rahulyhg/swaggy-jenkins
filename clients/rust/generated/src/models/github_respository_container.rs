/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct GithubRespositoryContainer {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "_links")]
  _links: Option<::models::GithubRespositoryContainerlinks>,
  #[serde(rename = "repositories")]
  repositories: Option<::models::GithubRepositories>
}

impl GithubRespositoryContainer {
  pub fn new() -> GithubRespositoryContainer {
    GithubRespositoryContainer {
      _class: None,
      _links: None,
      repositories: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> GithubRespositoryContainer {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set__links(&mut self, _links: ::models::GithubRespositoryContainerlinks) {
    self._links = Some(_links);
  }

  pub fn with__links(mut self, _links: ::models::GithubRespositoryContainerlinks) -> GithubRespositoryContainer {
    self._links = Some(_links);
    self
  }

  pub fn _links(&self) -> Option<&::models::GithubRespositoryContainerlinks> {
    self._links.as_ref()
  }

  pub fn reset__links(&mut self) {
    self._links = None;
  }

  pub fn set_repositories(&mut self, repositories: ::models::GithubRepositories) {
    self.repositories = Some(repositories);
  }

  pub fn with_repositories(mut self, repositories: ::models::GithubRepositories) -> GithubRespositoryContainer {
    self.repositories = Some(repositories);
    self
  }

  pub fn repositories(&self) -> Option<&::models::GithubRepositories> {
    self.repositories.as_ref()
  }

  pub fn reset_repositories(&mut self) {
    self.repositories = None;
  }

}



