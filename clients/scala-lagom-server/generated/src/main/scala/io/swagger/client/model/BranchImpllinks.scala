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

package io.swagger.client.model
import play.api.libs.json._

case class BranchImpllinks (
                  self: Option[Link],
                  actions: Option[Link],
                  runs: Option[Link],
                  queue: Option[Link],
                  `class`: Option[String]
)

object BranchImpllinks {
implicit val format: Format[BranchImpllinks] = Json.format
}
