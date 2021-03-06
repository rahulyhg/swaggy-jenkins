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
pub struct PipelineRunImpllinks {
  #[serde(rename = "nodes")]
  nodes: Option<::models::Link>,
  #[serde(rename = "log")]
  log: Option<::models::Link>,
  #[serde(rename = "self")]
  _self: Option<::models::Link>,
  #[serde(rename = "actions")]
  actions: Option<::models::Link>,
  #[serde(rename = "steps")]
  steps: Option<::models::Link>,
  #[serde(rename = "_class")]
  _class: Option<String>
}

impl PipelineRunImpllinks {
  pub fn new() -> PipelineRunImpllinks {
    PipelineRunImpllinks {
      nodes: None,
      log: None,
      _self: None,
      actions: None,
      steps: None,
      _class: None
    }
  }

  pub fn set_nodes(&mut self, nodes: ::models::Link) {
    self.nodes = Some(nodes);
  }

  pub fn with_nodes(mut self, nodes: ::models::Link) -> PipelineRunImpllinks {
    self.nodes = Some(nodes);
    self
  }

  pub fn nodes(&self) -> Option<&::models::Link> {
    self.nodes.as_ref()
  }

  pub fn reset_nodes(&mut self) {
    self.nodes = None;
  }

  pub fn set_log(&mut self, log: ::models::Link) {
    self.log = Some(log);
  }

  pub fn with_log(mut self, log: ::models::Link) -> PipelineRunImpllinks {
    self.log = Some(log);
    self
  }

  pub fn log(&self) -> Option<&::models::Link> {
    self.log.as_ref()
  }

  pub fn reset_log(&mut self) {
    self.log = None;
  }

  pub fn set__self(&mut self, _self: ::models::Link) {
    self._self = Some(_self);
  }

  pub fn with__self(mut self, _self: ::models::Link) -> PipelineRunImpllinks {
    self._self = Some(_self);
    self
  }

  pub fn _self(&self) -> Option<&::models::Link> {
    self._self.as_ref()
  }

  pub fn reset__self(&mut self) {
    self._self = None;
  }

  pub fn set_actions(&mut self, actions: ::models::Link) {
    self.actions = Some(actions);
  }

  pub fn with_actions(mut self, actions: ::models::Link) -> PipelineRunImpllinks {
    self.actions = Some(actions);
    self
  }

  pub fn actions(&self) -> Option<&::models::Link> {
    self.actions.as_ref()
  }

  pub fn reset_actions(&mut self) {
    self.actions = None;
  }

  pub fn set_steps(&mut self, steps: ::models::Link) {
    self.steps = Some(steps);
  }

  pub fn with_steps(mut self, steps: ::models::Link) -> PipelineRunImpllinks {
    self.steps = Some(steps);
    self
  }

  pub fn steps(&self) -> Option<&::models::Link> {
    self.steps.as_ref()
  }

  pub fn reset_steps(&mut self) {
    self.steps = None;
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> PipelineRunImpllinks {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

}



