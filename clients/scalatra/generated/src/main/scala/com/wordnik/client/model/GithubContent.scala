/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package com.wordnik.client.model


case class GithubContent (
  name: Option[String],
  sha: Option[String],
  _class: Option[String],
  repo: Option[String],
  size: Option[Int],
  owner: Option[String],
  path: Option[String],
  base64Data: Option[String]
)