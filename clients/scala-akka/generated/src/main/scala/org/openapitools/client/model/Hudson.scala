/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class Hudson (
  `class`: Option[String],
  assignedLabels: Option[Seq[HudsonassignedLabels]],
  mode: Option[String],
  nodeDescription: Option[String],
  nodeName: Option[String],
  numExecutors: Option[Int],
  description: Option[String],
  jobs: Option[Seq[FreeStyleProject]],
  primaryView: Option[AllView],
  quietingDown: Option[Boolean],
  slaveAgentPort: Option[Int],
  unlabeledLoad: Option[UnlabeledLoadStatistics],
  useCrumbs: Option[Boolean],
  useSecurity: Option[Boolean],
  views: Option[Seq[AllView]]
) extends ApiModel


