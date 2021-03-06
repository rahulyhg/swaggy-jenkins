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
pub struct QueueItemImpl {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "expectedBuildNumber")]
  expected_build_number: Option<i32>,
  #[serde(rename = "id")]
  id: Option<String>,
  #[serde(rename = "pipeline")]
  pipeline: Option<String>,
  #[serde(rename = "queuedTime")]
  queued_time: Option<i32>
}

impl QueueItemImpl {
  pub fn new() -> QueueItemImpl {
    QueueItemImpl {
      _class: None,
      expected_build_number: None,
      id: None,
      pipeline: None,
      queued_time: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> QueueItemImpl {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_expected_build_number(&mut self, expected_build_number: i32) {
    self.expected_build_number = Some(expected_build_number);
  }

  pub fn with_expected_build_number(mut self, expected_build_number: i32) -> QueueItemImpl {
    self.expected_build_number = Some(expected_build_number);
    self
  }

  pub fn expected_build_number(&self) -> Option<&i32> {
    self.expected_build_number.as_ref()
  }

  pub fn reset_expected_build_number(&mut self) {
    self.expected_build_number = None;
  }

  pub fn set_id(&mut self, id: String) {
    self.id = Some(id);
  }

  pub fn with_id(mut self, id: String) -> QueueItemImpl {
    self.id = Some(id);
    self
  }

  pub fn id(&self) -> Option<&String> {
    self.id.as_ref()
  }

  pub fn reset_id(&mut self) {
    self.id = None;
  }

  pub fn set_pipeline(&mut self, pipeline: String) {
    self.pipeline = Some(pipeline);
  }

  pub fn with_pipeline(mut self, pipeline: String) -> QueueItemImpl {
    self.pipeline = Some(pipeline);
    self
  }

  pub fn pipeline(&self) -> Option<&String> {
    self.pipeline.as_ref()
  }

  pub fn reset_pipeline(&mut self) {
    self.pipeline = None;
  }

  pub fn set_queued_time(&mut self, queued_time: i32) {
    self.queued_time = Some(queued_time);
  }

  pub fn with_queued_time(mut self, queued_time: i32) -> QueueItemImpl {
    self.queued_time = Some(queued_time);
    self
  }

  pub fn queued_time(&self) -> Option<&i32> {
    self.queued_time.as_ref()
  }

  pub fn reset_queued_time(&mut self) {
    self.queued_time = None;
  }

}



