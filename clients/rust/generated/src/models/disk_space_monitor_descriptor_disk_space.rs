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
pub struct DiskSpaceMonitorDescriptorDiskSpace {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "timestamp")]
  timestamp: Option<i32>,
  #[serde(rename = "path")]
  path: Option<String>,
  #[serde(rename = "size")]
  size: Option<i32>
}

impl DiskSpaceMonitorDescriptorDiskSpace {
  pub fn new() -> DiskSpaceMonitorDescriptorDiskSpace {
    DiskSpaceMonitorDescriptorDiskSpace {
      _class: None,
      timestamp: None,
      path: None,
      size: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> DiskSpaceMonitorDescriptorDiskSpace {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_timestamp(&mut self, timestamp: i32) {
    self.timestamp = Some(timestamp);
  }

  pub fn with_timestamp(mut self, timestamp: i32) -> DiskSpaceMonitorDescriptorDiskSpace {
    self.timestamp = Some(timestamp);
    self
  }

  pub fn timestamp(&self) -> Option<&i32> {
    self.timestamp.as_ref()
  }

  pub fn reset_timestamp(&mut self) {
    self.timestamp = None;
  }

  pub fn set_path(&mut self, path: String) {
    self.path = Some(path);
  }

  pub fn with_path(mut self, path: String) -> DiskSpaceMonitorDescriptorDiskSpace {
    self.path = Some(path);
    self
  }

  pub fn path(&self) -> Option<&String> {
    self.path.as_ref()
  }

  pub fn reset_path(&mut self) {
    self.path = None;
  }

  pub fn set_size(&mut self, size: i32) {
    self.size = Some(size);
  }

  pub fn with_size(mut self, size: i32) -> DiskSpaceMonitorDescriptorDiskSpace {
    self.size = Some(size);
    self
  }

  pub fn size(&self) -> Option<&i32> {
    self.size.as_ref()
  }

  pub fn reset_size(&mut self) {
    self.size = None;
  }

}



